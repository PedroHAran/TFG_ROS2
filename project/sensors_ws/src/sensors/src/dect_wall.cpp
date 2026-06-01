/*****************************************************************************/
//  First test with coding the TurtleBot
//
//  Make the robot stop before a wall
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

using namespace std::chrono_literals;
using std::placeholders::_1;

class ObjectDetecterNode : public rclcpp::Node
{
public:
   // Alias
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   ObjectDetecterNode()
   : Node("object_detecter"),
     current_state_(RobotState::CHECKING_DOCK),
     object_detected_(false)
   {
      // Distance to stop
      this->declare_parameter<float>("stop_distance", 0.6);
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
         std::bind(&ObjectDetecterNode::dock_status_callback, this, _1));

      // Undock
      undock_client_ = rclcpp_action::create_client<Undock>(this, "/undock");

      // Scanner
      laser_subscriber_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
         "/scan", 
         qos_profile, 
         std::bind(&ObjectDetecterNode::scan_callback, this, _1));

      // TImer
      timer_ = this->create_wall_timer(
         100ms, 
         std::bind(&ObjectDetecterNode::timer_callback, this));
      
      RCLCPP_INFO(this->get_logger(), "Node --> scanner_node");
   }

private:
   // Robot status
   enum class RobotState 
   {
      CHECKING_DOCK,
      UNDOCKING,
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
            current_state_ = RobotState::WALKING;
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

    send_goal_options.result_callback = std::bind(&ObjectDetecterNode::undock_result_callback, this, _1);

    undock_client_->async_send_goal(Undock::Goal(), send_goal_options);
  }

   void undock_result_callback(const GoalHandleUndock::WrappedResult & result)
   {
      switch (result.code) 
      {
         case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Undock completed!");
            current_state_ = RobotState::WALKING;
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
      bool local_object_detected = false;

      // Scan 15 degrees
      double fov = 15.0 * M_PI / 180.0;

      for (size_t i = 0; i < msg->ranges.size(); i++) 
      {
         float range = msg->ranges[i];
         
         // Sensor can return infinite
         if (!std::isfinite(range) || range < 0.15)
         {
            continue;
         }

         double angle = msg->angle_min + (i * msg->angle_increment);         
         angle = atan2(sin(angle), cos(angle));

         if (angle >= (M_PI - fov) || angle <= (-M_PI + fov)) 
         {
            if (range < stop_distance_) 
            {
               local_object_detected = true;
               break; 
            }
         }
      }

      object_detected_ = local_object_detected;
   }

   void timer_callback()
   {
      if (current_state_ == RobotState::WALKING || current_state_ == RobotState::STOP) 
      {
         auto msg = geometry_msgs::msg::TwistStamped();
         msg.header.stamp = this->get_clock()->now();
         msg.header.frame_id = "base_link";

         if (object_detected_) 
         {
            msg.twist.linear.x = 0.0;
            msg.twist.angular.z = 0.0;
            
            if (current_state_ != RobotState::STOP) 
            {
               RCLCPP_INFO(this->get_logger(), "Object Detected! --> Stopping");
               current_state_ = RobotState::STOP;
            }
         } 
         else 
         {
            msg.twist.linear.x = 0.2; 
            msg.twist.angular.z = 0.0;
         }

         movement_publisher_->publish(msg);
      }
   }

   bool object_detected_;
   float stop_distance_;
   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
   rclcpp_action::Client<Undock>::SharedPtr undock_client_;
   rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_subscriber_;
   rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ObjectDetecterNode>());
  rclcpp::shutdown();
  return 0;
}