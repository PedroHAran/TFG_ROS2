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

//Para comando de voz
#include <cstdlib>

class NavigationNode : public rclcpp::Node
{
public:
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   NavigationNode()
   : Node("navigation_node"),
     current_state_(RobotState::CHECKING_DOCK)
   {
      // Create tf buffer and listener
      tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
      tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
      
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

      // PointCloud2
      point_cloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>(
         "/point_cloud",
         qos_profile);

      // Waiting for data
      std::this_thread::sleep_for(std::chrono::seconds(2));
      RCLCPP_INFO(this->get_logger(), "Node --> Navigation Node");
      
      // Timer
      timer_ = this->create_wall_timer(
         3min, 
         std::bind(&NavigationNode::timer_callback, this));
      
   }

private:
   // Robot status
   enum class RobotState 
   {
      CHECKING_DOCK,
      UNDOCKING,
      SCANNING, // Detectar
      ROTATING, // Girar
      WALKING,  // !Detectar y !Girar
      STOP
   };
   RobotState current_state_;

   double current_yaw, current_yaw_degrees;
   double target_angle_degrees = 0, target_global = 0;
   const double angle_min = -180;
   const double angle_increment = 0.5625;

   struct point2D{
      float x;
      float y;
   };

   double calculateAngle(struct point2D point) {
      // atan2 return radians
      double rad = std::atan2(point.y, point.x);

      // To degrees
      double degrees = rad * (180.0 / M_PI);

      // Degrees format 0-360 instead of -180 to 180:
      if (degrees < 0) 
      {
         degrees += 360.0;
      }

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
      // Change speed if simulation or not
      float lineal_velocity_, angular_velocity_, stop_dist_;

      if (SIMULATION){
         lineal_velocity_  = 3.0;
         angular_velocity_ = 0.5;
         stop_dist_        = 0.5;
      }
      else
      {
         lineal_velocity_  = 0.2;
         angular_velocity_ = 0.3;
         stop_dist_        = 0.5;
      }

      std::string target_frame = "base_link"; // Change between 'odom' or 'map'
      sensor_msgs::msg::PointCloud2 cloud;

      if (!tf_buffer_->canTransform(target_frame, msg->header.frame_id, msg->header.stamp, tf2::Duration(RCL_S_TO_NS(1))))
      {
         RCLCPP_WARN(this->get_logger(), "Could not transfrom from %s to %s in time %f. Waiting transformation...",
                     msg->header.frame_id.c_str(), target_frame.c_str(), rclcpp::Time(msg->header.stamp).seconds());
         return;
      }
      try
      {
         // Transform LaserScan to PointCloud2
         projector_.transformLaserScanToPointCloud(target_frame, *msg, cloud, *tf_buffer_);

         point_cloud_pub_->publish(cloud);
      }
      catch (tf2::TransformException &ex)
      {
         RCLCPP_ERROR(this->get_logger(), "Error of transformation trying to convert LaserScan to PointCloud2: %s", ex.what());
         return;
      }

      struct point2D far_point_={0,0}, close_frontal_point_={0,0};

      std::vector<float> distances;

      sensor_msgs::PointCloud2Iterator<float> iter_x(cloud, "x");
      sensor_msgs::PointCloud2Iterator<float> iter_y(cloud, "y");
      sensor_msgs::PointCloud2Iterator<float> iter_z(cloud, "z");

      //double dist_min = std::numeric_limits<double>::max();
      double frontal_dist_min_ = std::numeric_limits<double>::max();
      double dist_max = 0.0;

      for (; iter_x != iter_x.end(); ++iter_x, ++iter_y, ++iter_z) 
      {
         // Calculate distance to origin (base_link)
         double d = std::sqrt(std::pow(*iter_x, 2) + std::pow(*iter_y, 2) + std::pow(*iter_z, 2));

         if (d > dist_max) {
            far_point_.x = *iter_x;
            far_point_.y = *iter_y;
            dist_max     =  d;
         }

         if (*iter_x > 0.40)
         {
            if(d < frontal_dist_min_)
            {
               frontal_dist_min_       =  d;
               close_frontal_point_.x  = *iter_x;
               close_frontal_point_.y  = *iter_y;
            }
         }
      }

      auto vel_msg = geometry_msgs::msg::TwistStamped();
      float vel_angular_msg = 0.0;
      bool rotateLeft = false;

      vel_msg.header.stamp = this->get_clock()->now();
      vel_msg.header.frame_id = "base_link";

      if(current_state_ == RobotState::SCANNING)
      {
         if (VOZ)
         {
            std::string comando = "espeak-ng -v es -s 130 \"Detectando espacio libre alrededor\"";
            std::system(comando.c_str());
         } 

         target_angle_degrees = calculateAngle(far_point_);
         target_global = int(target_angle_degrees + current_yaw_degrees)%360;

         RCLCPP_INFO(this->get_logger(), "Free space at %.2fm in %.1f degrees, tar.glob.: %.2f",
            dist_max, 
            target_angle_degrees, 
            target_global);
         RCLCPP_INFO(this->get_logger(), "Objective: %.2f OG: %.2f Actual: %.2f", 
            target_angle_degrees, 
            target_global, 
            current_yaw_degrees);

         current_state_ = RobotState::ROTATING;
         RCLCPP_INFO(this->get_logger(), "Scanning --> Rotating");

         if (VOZ) 
         {
            char mensaje[300];
            std::snprintf(mensaje, sizeof(mensaje), "Se ha detectado espacio libre a %d metros en %d grados. Girando.", (int)dist_max, (int)target_angle_degrees);
            std::string mensajeString("espeak-ng -v es -s 130 ");
            mensajeString=mensajeString+ "\""+ string(mensaje)+"\"";
            cout << mensajeString << endl;
            std::system(mensajeString.c_str());
         }
      }
      else if (current_state_ == RobotState::ROTATING)
      {         
         float angle_tolerance = 0.6;

         float difference = target_global - current_yaw_degrees;

         if(fabs(difference) > angle_tolerance)
         {
            if(fabs(difference) < 180)
            {
               if(difference > 0)
               {
                  rotateLeft = true;
               }
               else 
               {
                  rotateLeft = false;
               }
            }
            else
            {
               if(difference > 0)
               {
                  rotateLeft = false;
               }
               else 
               {
                  rotateLeft = true;
               }
            }
      
            if (rotateLeft)
            {
               vel_angular_msg = angular_velocity_;
            }
            else
            {
               vel_angular_msg = -1 * angular_velocity_;
            }

            vel_msg.twist.linear.x = 0.0;
            vel_msg.twist.angular.z = vel_angular_msg;
            movement_publisher_->publish(vel_msg);
         }
         else
         {
            // Alined. Stop
            //RCLCPP_INFO(this->get_logger(), "Aligned");
            if (VOZ) 
            {
               std::string comando = "espeak-ng -v es -s 130 \"Giro realizado. Avanzando hasta detectar distancia de seguridad.\"";
               std::system(comando.c_str());
            }

            current_state_ = RobotState::WALKING;
            RCLCPP_INFO(this->get_logger(), "Scannig --> Walking");
            vel_msg.twist.linear.x = 0.0;
            vel_msg.twist.angular.z = 0.0;
            movement_publisher_->publish(vel_msg);
         }
      }
      else if(current_state_ == RobotState::WALKING)
      {
         bool emergency_stop = false;
         if (frontal_dist_min_ < stop_dist_) 
         {
            emergency_stop = true;
         }

         if (emergency_stop) 
         {
            RCLCPP_INFO(this->get_logger(), "Object detected at %.2fm with an angle %.2f", 
               frontal_dist_min_, 
               calculateAngle(close_frontal_point_) );

            vel_msg.twist.linear.x = 0.0;
            vel_msg.twist.angular.z = 0.0;
            movement_publisher_->publish(vel_msg);

            current_state_ = RobotState::SCANNING;
            RCLCPP_INFO(this->get_logger(), "Walking--> Scanning");

            if (VOZ)
            {
               char mensaje[300];
               std::snprintf(mensaje, sizeof(mensaje), "Se ha detectado obstaculo a %.1f metros en %d grados.", frontal_dist_min_, (int)calculateAngle(close_frontal_point_));
               std::string mensajeString("espeak-ng -v es -s 130 ");
               mensajeString=mensajeString+ "\""+ string(mensaje)+"\"";
               cout << mensajeString << endl;

               std::system(mensajeString.c_str());
            }
         }
         else
         {
            vel_msg.twist.linear.x = lineal_velocity_;
            vel_msg.twist.angular.z = 0;
            movement_publisher_->publish(vel_msg);
         }
      }
   }

   void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
   {
      // Actual yaw 
      double siny_cosp = 2 * (msg->pose.pose.orientation.w * msg->pose.pose.orientation.z +
                              msg->pose.pose.orientation.x * msg->pose.pose.orientation.y);

      double cosy_cosp = 1 - 2 * (msg->pose.pose.orientation.y * msg->pose.pose.orientation.y +
                                  msg->pose.pose.orientation.z * msg->pose.pose.orientation.z);

      current_yaw = std::atan2(siny_cosp, cosy_cosp);
      current_yaw_degrees=current_yaw * (180.0 / M_PI); 
      
      if (current_yaw_degrees < 0)
      { 
         current_yaw_degrees += 360;
      }
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
                  
                  if (current_state_ == RobotState::WALKING) 
                  {
                     auto stop_msg = geometry_msgs::msg::TwistStamped();
                     stop_msg.header.stamp = this->get_clock()->now();
                     stop_msg.header.frame_id = "base_link";
                     stop_msg.twist.linear.x = 0.0;
                     stop_msg.twist.angular.z = 0.0;
                     movement_publisher_->publish(stop_msg);

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
            
            if (current_state_ == RobotState::WALKING) 
            {
               auto stop_msg = geometry_msgs::msg::TwistStamped();
               stop_msg.header.stamp = this->get_clock()->now();
               stop_msg.header.frame_id = "base_link";
               stop_msg.twist.linear.x = 0.0;
               stop_msg.twist.angular.z = 0.0;
               movement_publisher_->publish(stop_msg);

               current_state_ = RobotState::SCANNING;
            }
         }
      }
   }

   void timer_callback()
   {
      RCLCPP_WARN(this->get_logger(), "Time is up! Shutting node...");

      if (VOZ) 
      {
         std::string comando = "espeak-ng -v es -s 130 \"Se ha alcanzado el tiempo máximo establecido. Fin del programa.\"";
         std::system(comando.c_str());
      }

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

   std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
   std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
   laser_geometry::LaserProjection projector_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<NavigationNode>());
  rclcpp::shutdown();
  return 0;
}