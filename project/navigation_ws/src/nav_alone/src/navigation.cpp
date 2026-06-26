/*****************************************************************************/
//  Navigation with Laser Scan, Bumpers, IR Proximity & Adaptive Velocity
/*****************************************************************************/

#include <chrono>
#include <memory>
#include <cmath>
#include <algorithm>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "irobot_create_msgs/msg/dock_status.hpp"
#include "irobot_create_msgs/action/undock.hpp"

#include "nav_msgs/msg/odometry.hpp"
#include "tf2/utils.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2/LinearMath/Matrix3x3.h"
#include "irobot_create_msgs/msg/hazard_detection_vector.hpp"
#include "irobot_create_msgs/msg/ir_intensity_vector.hpp"

// PointCloud
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <laser_geometry/laser_geometry.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>

using namespace std::chrono_literals;
using namespace std;
using std::placeholders::_1;

#define SIMULATION true
#define VOZ        false

#include <cstdlib>

class NavigationNode : public rclcpp::Node
{
public:
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   NavigationNode()
   : Node("navigation_node"),
     current_state_(RobotState::CHECKING_DOCK),
     target_angle_degrees_(0.0),
     target_global_(0.0),
     scan_data_ready_(false),
     hazard_detected_(false),
     dist_max_(0.0),
     frontal_dist_min_(std::numeric_limits<double>::max())
   {
      tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
      tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

      this->declare_parameter<float>("stop_distance", 0.5);
      stop_distance_ = this->get_parameter("stop_distance").as_double();
      
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

      // PointCloud2
      point_cloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(
         "/point_cloud",
         qos_profile);

      // Waiting for data
      std::this_thread::sleep_for(std::chrono::seconds(2));
      RCLCPP_INFO(this->get_logger(), "Node --> Navigation Node Started");
      
      // Timer
      timer_ = this->create_wall_timer(
         100ms, 
         std::bind(&NavigationNode::timer_callback, this));
   }

private:
   // Máquina de estados sin estados intermedios extra
   enum class RobotState 
   {
      CHECKING_DOCK,
      UNDOCKING,
      SCANNING, 
      ROTATING, 
      WALKING
   };
   RobotState current_state_;

   double current_yaw_, current_yaw_degrees_;
   double target_angle_degrees_, target_global_;

   bool scan_data_ready_;
   bool hazard_detected_;
   double dist_max_;
   double frontal_dist_min_;
   float stop_distance_;

   struct point2D{
      float x;
      float y;
   };

   point2D far_point_ = {0.0, 0.0};
   point2D close_frontal_point_ = {0.0, 0.0};

   double calculateAngle(struct point2D point) 
   {
      double rad = std::atan2(point.y, point.x);
      double degrees = rad * (180.0 / M_PI);
      if (degrees < 0) degrees += 360.0;
      return degrees;
   }

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
            RCLCPP_INFO(this->get_logger(), "Undocked --> Ready to Scan");
            current_state_ = RobotState::SCANNING;
         }
      }
   }

   void send_undock_goal()
   {
      if (!undock_client_->wait_for_action_server(std::chrono::seconds(5))) {
         RCLCPP_ERROR(this->get_logger(), "Error in /undock");
         return;
      }
      auto send_goal_options = rclcpp_action::Client<Undock>::SendGoalOptions();
      send_goal_options.result_callback = std::bind(&NavigationNode::undock_result_callback, this, _1);
      undock_client_->async_send_goal(Undock::Goal(), send_goal_options);
   }

   void undock_result_callback(const GoalHandleUndock::WrappedResult & result)
   {
      if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
         RCLCPP_INFO(this->get_logger(), "Undock completed!");
         current_state_ = RobotState::SCANNING;
      }
   }

   void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
   {    
      std::string target_frame = "base_link"; 
      sensor_msgs::msg::PointCloud2 cloud;

      if (!tf_buffer_->canTransform(target_frame, msg->header.frame_id, msg->header.stamp, tf2::Duration(RCL_S_TO_NS(1)))) {
         return;
      }
      
      try {
         projector_.transformLaserScanToPointCloud(target_frame, *msg, cloud, *tf_buffer_);
         point_cloud_pub_->publish(cloud);
      } catch (tf2::TransformException &ex) {
         return;
      }

      sensor_msgs::PointCloud2Iterator<float> iter_x(cloud, "x");
      sensor_msgs::PointCloud2Iterator<float> iter_y(cloud, "y");

      double temp_frontal_min = std::numeric_limits<double>::max();
      double temp_dist_max = 0.0;
      point2D temp_far_point = {0.0, 0.0};
      point2D temp_close_point = {0.0, 0.0};

      for (; iter_x != iter_x.end(); ++iter_x, ++iter_y) 
      {
         if (!std::isfinite(*iter_x) || !std::isfinite(*iter_y)) continue; 

         double d = std::sqrt(std::pow(*iter_x, 2) + std::pow(*iter_y, 2));

         if (*iter_x > 0.0 && std::abs(*iter_y) < 0.25) 
         {
            if (d < temp_frontal_min) 
            {
               temp_frontal_min   =  d;
               temp_close_point.x = *iter_x;
               temp_close_point.y = *iter_y;
            }
         }

         if (d > temp_dist_max && d < 8.0 && std::abs(*iter_y) > 0.30) 
         {
            temp_dist_max = d;
            temp_far_point.x = *iter_x;
            temp_far_point.y = *iter_y;
         }
      }

      if (temp_dist_max == 0.0) {
          temp_dist_max = 3.0;
          temp_far_point.x = 3.0; 
          temp_far_point.y = 0.0;
      }

      dist_max_ = temp_dist_max;
      frontal_dist_min_ = temp_frontal_min;
      far_point_ = temp_far_point;
      close_frontal_point_ = temp_close_point;
      scan_data_ready_ = true;
   }

   void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
   {
      double siny_cosp = 2 * (msg->pose.pose.orientation.w * msg->pose.pose.orientation.z +
                              msg->pose.pose.orientation.x * msg->pose.pose.orientation.y);
      double cosy_cosp = 1 - 2 * (msg->pose.pose.orientation.y * msg->pose.pose.orientation.y +
                                  msg->pose.pose.orientation.z * msg->pose.pose.orientation.z);

      current_yaw_ = std::atan2(siny_cosp, cosy_cosp);
      current_yaw_degrees_ = current_yaw_ * (180.0 / M_PI); 
      if (current_yaw_degrees_ < 0) current_yaw_degrees_ += 360;
   }

   void hazard_callback(const irobot_create_msgs::msg::HazardDetectionVector::SharedPtr msg)
   {
      if (current_state_ == RobotState::CHECKING_DOCK || current_state_ == RobotState::UNDOCKING) return;
      if (!msg->detections.empty()) hazard_detected_ = true;
   }

   void ir_callback(const irobot_create_msgs::msg::IrIntensityVector::SharedPtr msg)
   {
      if (current_state_ == RobotState::CHECKING_DOCK || current_state_ == RobotState::UNDOCKING) return;
      for (const auto& reading : msg->readings) {
         if (reading.value > 200) hazard_detected_ = true;
      }
   }

   void timer_callback()
   {
      if (current_state_ == RobotState::CHECKING_DOCK || current_state_ == RobotState::UNDOCKING || !scan_data_ready_) 
      {
         return;
      }

      float lineal_velocity = SIMULATION ? 3.0 : 0.2;
      float angular_velocity = SIMULATION ? 0.5 : 0.3;

      auto vel_msg = geometry_msgs::msg::TwistStamped();
      vel_msg.header.stamp = this->get_clock()->now();
      vel_msg.header.frame_id = "base_link";

      bool obstacle_ahead = (current_state_ == RobotState::WALKING && frontal_dist_min_ < stop_distance_);

      if (hazard_detected_ || obstacle_ahead) 
      {
         vel_msg.twist.linear.x = 0.0;
         vel_msg.twist.angular.z = 0.0;
         movement_publisher_->publish(vel_msg);
         
         if (current_state_ == RobotState::WALKING || current_state_ == RobotState::ROTATING) 
         {
            RCLCPP_INFO(this->get_logger(), "Obstaculo detectado a %.2fm --> Escaneando", frontal_dist_min_);
            if (VOZ) {
               char mensaje[300];
               std::snprintf(mensaje, sizeof(mensaje), "Se ha detectado obstaculo a %.1f metros.", frontal_dist_min_);
               std::string msj = "espeak-ng -v es -s 130 \"" + std::string(mensaje) + "\"";
               std::system(msj.c_str());
            }
            current_state_ = RobotState::SCANNING;
         }
         hazard_detected_ = false; 
         return;
      }

      if (current_state_ == RobotState::SCANNING)
      {
         target_angle_degrees_ = calculateAngle(far_point_);
         target_global_ = int(target_angle_degrees_ + current_yaw_degrees_) % 360;

         RCLCPP_INFO(this->get_logger(), "Hueco a %.2fm en %.1fº | Obj global: %.2fº",
            dist_max_, target_angle_degrees_, target_global_);

         current_state_ = RobotState::ROTATING;
      }
      else if (current_state_ == RobotState::ROTATING)
      {
         float angle_tolerance = 1.0;
         float difference = target_global_ - current_yaw_degrees_;
         bool rotateLeft = false;

         if (std::fabs(difference) > angle_tolerance)
         {
            if (std::fabs(difference) < 180) rotateLeft = (difference > 0);
            else rotateLeft = !(difference > 0);
      
            vel_msg.twist.linear.x = 0.0;
            vel_msg.twist.angular.z = rotateLeft ? angular_velocity : -angular_velocity;
            movement_publisher_->publish(vel_msg);
         }
         else
         {
            RCLCPP_INFO(this->get_logger(), "Alineacion conseguida --> Avanzando");
            vel_msg.twist.linear.x = 0.0;
            vel_msg.twist.angular.z = 0.0;
            movement_publisher_->publish(vel_msg);
            
            current_state_ = RobotState::WALKING;
         }
      }
      else if (current_state_ == RobotState::WALKING)
      {
         vel_msg.twist.linear.x = lineal_velocity;
         vel_msg.twist.angular.z = 0.0;
         movement_publisher_->publish(vel_msg);
      }
   }

   void shutdown_timer_callback()
   {
      RCLCPP_WARN(this->get_logger(), "Tiempo maximo alcanzado. Apagando nodo...");
      rclcpp::shutdown();
   }

   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
   rclcpp_action::Client<Undock>::SharedPtr undock_client_;
   rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
   rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber_;
   rclcpp::Subscription<irobot_create_msgs::msg::HazardDetectionVector>::SharedPtr hazard_subscriber_;
   rclcpp::Subscription<irobot_create_msgs::msg::IrIntensityVector>::SharedPtr ir_subscriber_;
   rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_pub_;
   
   rclcpp::TimerBase::SharedPtr timer_;
   rclcpp::TimerBase::SharedPtr shutdown_timer_;

   std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
   std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
   laser_geometry::LaserProjection projector_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  std::cout << "Iniciando nodo scan_safe_move adaptado..." << std::endl;
  rclcpp::spin(std::make_shared<NavigationNode>());
  rclcpp::shutdown();
  return 0;
}