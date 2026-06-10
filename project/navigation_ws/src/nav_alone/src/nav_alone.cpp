/*****************************************************************************/
//  Navigation with Laser Scan, Bumpers, IR Proximity & Adaptive Velocity
/*****************************************************************************/

#include <chrono>
#include <memory>
#include <cmath>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "irobot_create_msgs/msg/dock_status.hpp"
#include "irobot_create_msgs/action/undock.hpp"

#include "nav_msgs/msg/odometry.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"
#include "irobot_create_msgs/msg/hazard_detection_vector.hpp"
#include "irobot_create_msgs/msg/ir_intensity_vector.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class NavigationNode : public rclcpp::Node
{
public:
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   NavigationNode()
   : Node("navigation_node"),
     current_state_(RobotState::CHECKING_DOCK),
     object_detected_(false),
     target_angle_(0.0),
     facing_direction_(0.0),
     free_space_ahead_(1.0)
   {
      // Distance to stop
      this->declare_parameter<float>("stop_distance", 0.35);
      stop_distance_ = this->get_parameter("stop_distance").as_double();

      // QoS Best Effort
      rclcpp::QoS qos_profile = rclcpp::SensorDataQoS();

      // Movement
      movement_publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(
         "/cmd_vel", 
         qos_profile);

      // Check dock status
      dock_subscriber_ = this->create_subscription<irobot_create_msgs::msg::DockStatus>(
         "/dock_status", 
         qos_profile, 
         std::bind(&NavigationNode::dock_status_callback, this, _1));

      // Undock
      undock_client_ = rclcpp_action::create_client<Undock>(this, "/undock");

      // Scanner
      laser_subscriber_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
         "/scan", 
         qos_profile, 
         std::bind(&NavigationNode::scan_callback, this, _1));

      // Odometry
      odom_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>(
         "/odom", 
         qos_profile, 
         std::bind(&NavigationNode::odom_callback, this, _1));

      // Bumpers
      hazard_subscriber_ = this->create_subscription<irobot_create_msgs::msg::HazardDetectionVector>(
         "/hazard_detection", 
         qos_profile,
         std::bind(&NavigationNode::hazard_callback, this, _1));

      // IR
      ir_subscriber_ = this->create_subscription<irobot_create_msgs::msg::IrIntensityVector>(
         "/ir_intensity", 
         qos_profile,
         std::bind(&NavigationNode::ir_callback, this, _1));

      // Timer
      timer_ = this->create_wall_timer(
         100ms, 
         std::bind(&NavigationNode::timer_callback, this));
      
      RCLCPP_INFO(this->get_logger(), "Node --> Navigation Node");
   }

private:
   // Robot status
   enum class RobotState 
   {
      CHECKING_DOCK,
      UNDOCKING,
      SCANNING,
      ROTATING,
      WALKING,
      STOP
   };
   RobotState current_state_;

   void dock_status_callback(const irobot_create_msgs::msg::DockStatus::SharedPtr msg)
   {
      if (current_state_ == RobotState::CHECKING_DOCK) 
      {
         if (msg->is_docked) 
         {
            RCLCPP_INFO(this->get_logger(), "Docked --> Undocking");
            current_state_ = RobotState::UNDOCKING;
            send_undock_goal();
         } 
         else 
         {
            RCLCPP_INFO(this->get_logger(), "Undocked --> Walking");
            current_state_ = RobotState::SCANNING;
         }
      }
   }

   void send_undock_goal()
   {
      if (!undock_client_->wait_for_action_server(std::chrono::seconds(5))) 
      {
         RCLCPP_ERROR(this->get_logger(), "Error in /undock");
         return;
      }

      auto send_goal_options = rclcpp_action::Client<Undock>::SendGoalOptions();

      send_goal_options.result_callback = std::bind(&NavigationNode::undock_result_callback, this, _1);

      undock_client_->async_send_goal(Undock::Goal(), send_goal_options);
   }

   void undock_result_callback(const GoalHandleUndock::WrappedResult & result)
   {
      switch (result.code) 
      {
         case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Undock completed!");
            current_state_ = RobotState::SCANNING;
            break;
         case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(this->get_logger(), "Undock ABORTED");
            break;
         case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(this->get_logger(), "Undock CANCELLED");
            break;
         default:
            RCLCPP_ERROR(this->get_logger(), "???????????????");
            break;
      }
   }

   void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
   {    
      float min_frontal_dist = msg->range_max;
      // Check laser
      for (size_t i = 0; i < msg->ranges.size(); i++) 
      {
         float range = msg->ranges[i];

         // Sensor can return infinite
         if (!std::isfinite(range) || range > msg->range_max)
         {
            continue;
         }

         /*if (range < msg->range_min) 
         {
            local_object_detected = true;
            break;
         }
         */
         // Calculate angle
         double angle = msg->angle_min + (i * msg->angle_increment);
         angle = atan2(sin(angle), cos(angle));

         if (std::abs(angle) <= (20.0 * M_PI / 180.0)) 
         {
            if (range < min_frontal_dist) 
            {
               min_frontal_dist = range;
            }
            if (range < stop_distance_) 
            {
               object_detected_ = true;
               break; 
            }
         }
      }

      free_space_ahead_ = min_frontal_dist;

      // Calculate new route
      if (object_detected_ && current_state_ == RobotState::WALKING)
      {
         RCLCPP_INFO(this->get_logger(), "Obstacle detected. Changing direction");
         current_state_ = RobotState::SCANNING;
      }

      if (current_state_ == RobotState::SCANNING)
      {
         const int total_rays = msg->ranges.size();
         const int window_size = 40;
         
         float best_avg_dist = -1.0;
         float best_window_angle = 0.0;

         for (int i = 0; i < total_rays - window_size; i+=5) 
         {
            float sum = 0.0;
            int valid_rays = 0;

            for (int j = 0; j < window_size; ++j) 
            {
               // Obtain ray data
               float ray_value = msg->ranges[i + j];

               // Check if ray data is valid
               if (!std::isfinite(ray_value) || ray_value > msg->range_max) 
               {
                  ray_value = msg->range_max; 
               }
               else if (ray_value < msg->range_min) 
               {
                  ray_value = 0.0;
               }

               // Update window value
               sum += ray_value;
               valid_rays++;
            }

            if (valid_rays > 0) 
            {
               float current_avg = sum / valid_rays;

               int center_ray_index = i + (window_size / 2);
               double window_angle = msg->angle_min + (center_ray_index * msg->angle_increment);
               window_angle = atan2(sin(window_angle), cos(window_angle));

               // Penalyze wall just deteted
               if (object_detected_ && std::abs(window_angle) < (60.0 * M_PI / 180.0)) 
               {
                  current_avg *= 0.1; 
               }

               // Update best window
               if (current_avg > best_avg_dist) 
               {
                  best_avg_dist = current_avg;
                  best_window_angle = window_angle;
               }
            }
         }

         RCLCPP_INFO(this->get_logger(), "Going direction %.2f with %.2f m free (avg)", 
                        best_window_angle, 
                        best_avg_dist);
                        
         double aux_angle = facing_direction_ + best_window_angle;
         target_angle_ = atan2(sin(aux_angle), cos(aux_angle));

         object_detected_ = false;
         current_state_ = RobotState::ROTATING;
      }
   }

   void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
   {
      tf2::Quaternion q(
         msg->pose.pose.orientation.x,
         msg->pose.pose.orientation.y,
         msg->pose.pose.orientation.z,
         msg->pose.pose.orientation.w
      );

      // Get facing direction
      tf2::Matrix3x3 m(q);      

      double roll, pitch, yaw;

      m.getRPY(roll, pitch, yaw);
      
      facing_direction_ = yaw;
   }

   void hazard_callback(const irobot_create_msgs::msg::HazardDetectionVector::SharedPtr msg)
   {
      if (!msg->detections.empty()) 
      {
         for (const auto& hazard : msg->detections) 
         {
               if (hazard.type == irobot_create_msgs::msg::HazardDetection::BUMP) 
               {
                  RCLCPP_WARN_THROTTLE(
                     this->get_logger(), 
                     *this->get_clock(), 
                     1000, 
                     "Bumper Activated"
                  );
                  
                  object_detected_ = true;
                  
                  if (current_state_ == RobotState::WALKING) 
                  {
                     current_state_ = RobotState::SCANNING;
                  }
               }
         }
      }
   }

   void ir_callback(const irobot_create_msgs::msg::IrIntensityVector::SharedPtr msg)
   {
      // Minimal distance
      const int ir_obstacle_threshold = 200; 

      for (const auto& reading : msg->readings) 
      {
         if (reading.value > ir_obstacle_threshold) 
         {
            RCLCPP_WARN_THROTTLE(
               this->get_logger(), 
               *this->get_clock(), 
               1000, 
               "IR activated, object detected by sensor '%s' with intensity %d", 
               reading.header.frame_id.c_str(), reading.value
            );
            
            object_detected_ = true;
            if (current_state_ == RobotState::WALKING) 
            {
               current_state_ = RobotState::SCANNING;
            }
         }
      }
   }

   void timer_callback()
   {
      auto msg = geometry_msgs::msg::TwistStamped();
      msg.header.stamp = this->get_clock()->now();
      msg.header.frame_id = "base_link";

      if (current_state_ == RobotState::SCANNING || 
          current_state_ == RobotState::STOP) 
      {
         msg.twist.linear.x = 0.0;
         msg.twist.angular.z = 0.0;
         movement_publisher_->publish(msg);
         return;
      }
      
      if (current_state_ == RobotState::ROTATING || 
          current_state_ == RobotState::WALKING) 
      {
         // Normalize the angle
         double direction = target_angle_ - facing_direction_;
         direction = atan2(sin(direction), cos(direction));

         if (std::abs(direction) > 0.05)
         {
            msg.twist.linear.x = 0.0; 
            msg.twist.angular.z = direction;
            current_state_ = RobotState::ROTATING;
         }
         else
         {
            if (current_state_ == RobotState::ROTATING)
            {
               object_detected_ = false;
            }
            
            float max_speed = 0.45;
            float min_speed = 0.08;
            
            // Calculate speed
            float calculated_speed = free_space_ahead_ * 0.25; 

            msg.twist.linear.x = std::max(min_speed, std::min(max_speed, calculated_speed));
            msg.twist.angular.z = 0.0;
            current_state_ = RobotState::WALKING;
         }

         movement_publisher_->publish(msg);
      }
   }

   bool object_detected_;
   float stop_distance_;
   float target_angle_;
   double facing_direction_;
   float free_space_ahead_;
   
   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
   rclcpp_action::Client<Undock>::SharedPtr undock_client_;
   rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
   rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
   rclcpp::Subscription<irobot_create_msgs::msg::HazardDetectionVector>::SharedPtr hazard_subscriber_;
   rclcpp::Subscription<irobot_create_msgs::msg::IrIntensityVector>::SharedPtr ir_subscriber_;
   rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NavigationNode>());
  rclcpp::shutdown();
  return 0;
}