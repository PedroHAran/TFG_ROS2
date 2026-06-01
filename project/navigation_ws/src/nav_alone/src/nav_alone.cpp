/*****************************************************************************/
//  First attemp of navigation alone
/*****************************************************************************/

#include <chrono>
#include <memory>
#include <cmath>

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

using namespace std::chrono_literals;
using std::placeholders::_1;

class NavigationNode : public rclcpp::Node
{
public:
   // Alias
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   NavigationNode()
   : Node("navigation_node"),
     current_state_(RobotState::CHECKING_DOCK),
     object_detected_(false),
     target_angle_(0.0),
     facing_direction_(0.0)
   {
      // Distance to stop
      this->declare_parameter<float>("stop_distance", 1.0);
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
      // Detect objects
      bool local_object_detected = false;

      for (size_t i = 0; i < msg->ranges.size(); i++) 
      {
         float range = msg->ranges[i];

         if (range < msg->range_min) 
         {
            local_object_detected = true;
            break;
         }
         
         // Sensor can return infinite
         if (!std::isfinite(range) || range > msg->range_max)
         {
            continue;
         }
         
         double angle = msg->angle_min + (i * msg->angle_increment);
         angle = atan2(sin(angle), cos(angle));

         if (std::abs(angle) <= (20.0 * M_PI / 180.0)) 
         {
            if (range < stop_distance_) 
            {
               local_object_detected = true;
               break; 
            }
         }
      }
      
      if (local_object_detected) 
      {
         object_detected_ = true;
      }

      // Calculate new route
      if (object_detected_ && current_state_ == RobotState::WALKING)
      {
         RCLCPP_INFO(this->get_logger(), "Obstacle detected. Changing direction");
         current_state_ = RobotState::SCANNING;
      }

      if (current_state_ == RobotState::SCANNING)
      {
         const int rays_per_window = 15; // This number should be variable, now scaning for 2 meters
         const int total_rays = msg->ranges.size();
         const int num_windows = total_rays / rays_per_window;
         
         float max_free_space = -1.0;
         int best_window_index = -1;
         float best_window_angle = 0.0;

         for (int i = 0; i < num_windows; ++i) 
         {
            float current_window_min = std::numeric_limits<float>::infinity();

            for (int j = 0; j < rays_per_window; ++j) 
            {
               // Obtain ray data
               int ray_index = (i * rays_per_window) + j;
               if (ray_index >= total_rays) break; 
               float ray_value = msg->ranges[ray_index];

               // Check if ray data is valid
               if (!std::isfinite(ray_value) || ray_value > msg->range_max) 
               {
                  ray_value = msg->range_max; 
               }
               else if (ray_value < msg->range_min) 
               {
                  ray_value = 0.0;
               }

               // Update window min
               if (ray_value < current_window_min) 
               {
                  current_window_min = ray_value;
               }
            }

            int central_ray_index = (i * rays_per_window) + (rays_per_window / 2);
            double window_angle = msg->angle_min + (central_ray_index * msg->angle_increment);

            // Normalize
            window_angle = atan2(sin(window_angle), cos(window_angle));

            if (object_detected_ && std::abs(window_angle) < (45.0 * M_PI / 180.0)) 
            {
               current_window_min = -1.0;
            }

            // Update best window
            if (current_window_min > max_free_space) 
            {
               max_free_space = current_window_min;
               best_window_index = i;
               best_window_angle = window_angle;
            }
         }

         RCLCPP_INFO(this->get_logger(), "Window %d with direction %.2f with %.2f m free", 
                        best_window_index, 
                        best_window_angle, 
                        max_free_space);
                        
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
                     "¡BUMPER ACTIVADO! Impacto detectado frente al robot."
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
            msg.twist.linear.x = 0.3; 
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
   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
   rclcpp_action::Client<Undock>::SharedPtr undock_client_;
   rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
   rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
   rclcpp::Subscription<irobot_create_msgs::msg::HazardDetectionVector>::SharedPtr hazard_subscriber_;
   rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NavigationNode>());
  rclcpp::shutdown();
  return 0;
}