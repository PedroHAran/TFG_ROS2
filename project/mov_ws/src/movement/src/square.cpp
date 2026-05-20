/*****************************************************************************/
// First test with coding the TurtleBot
//
// Make the robot do a square. It doesnt do it right because the program is 
// based on time and not distance
/*****************************************************************************/
#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "irobot_create_msgs/msg/dock_status.hpp"
#include "irobot_create_msgs/action/undock.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class SquareNode : public rclcpp::Node
{
public:
   // Alias
   using Undock = irobot_create_msgs::action::Undock;
   using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

   SquareNode()
   : Node("walking_node"), current_state_(RobotState::CHECKING_DOCK)
   {
      // QoS Best Effort
      rclcpp::QoS qos_profile = rclcpp::SensorDataQoS();

      // Movement publisher
      movement_publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(
         "/cmd_vel", 
         qos_profile);

      // Check dock status
      dock_subscriber_ = this->create_subscription<irobot_create_msgs::msg::DockStatus>(
         "/dock_status", 
         qos_profile, 
         std::bind(&SquareNode::dock_status_callback, this, _1));

      // Undock
      undock_client_ = rclcpp_action::create_client<Undock>(this, "/undock");

      // TImer
      timer_ = this->create_wall_timer(
         100ms, 
         std::bind(&SquareNode::timer_callback, this));
         
      RCLCPP_INFO(this->get_logger(), "Node --> walking_node");
   }

private:
  // Robot states
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
            RCLCPP_INFO(this->get_logger(), "Undocked");
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
      
      send_goal_options.result_callback = std::bind(&SquareNode::undock_result_callback, this, _1);

      undock_client_->async_send_goal(Undock::Goal(), send_goal_options);
   }

   void undock_result_callback(const GoalHandleUndock::WrappedResult & result)
   {
      switch (result.code) {
         case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "Undock completed");
            current_state_ = RobotState::WALKING;
            break;
         case rclcpp_action::ResultCode::ABORTED:
            RCLCPP_ERROR(this->get_logger(), "Undock aborted");
            break;
         case rclcpp_action::ResultCode::CANCELED:
            RCLCPP_ERROR(this->get_logger(), "Undock canceled");
            break;
         default:
            RCLCPP_ERROR(this->get_logger(), "???????????????");
            break;
      }
   }

   void timer_callback()
   {
      if (current_state_ == RobotState::WALKING) {
         auto msg = geometry_msgs::msg::TwistStamped();
         rclcpp::Rate loop_rate(10);
         
         msg.header.stamp = this->get_clock()->now();
         msg.header.frame_id = "base_link"; 

         RCLCPP_INFO(this->get_logger(), "Moving to a secure spot");
         msg.twist.linear.x = 0.5;

         auto start_movement = this->now();
         while (rclcpp::ok() && (this->now() - start_movement) < 10s) 
         {
            movement_publisher_->publish(msg);
            loop_rate.sleep();
         }

         RCLCPP_INFO(this->get_logger(), "Starting the square");
         for (int i=0; i<4; i++)
         {
            RCLCPP_INFO(this->get_logger(), "Side: %i", i+1);

            // Rotate first
            msg.twist.linear.x = 0.0;
            msg.twist.angular.z = 0.5;
            auto start_rotation = this->now();
            while (rclcpp::ok() && (this->now() - start_rotation) < 6s) 
            {
               movement_publisher_->publish(msg);
               loop_rate.sleep();
            }

            // Do the side
            msg.twist.linear.x = 0.5;
            msg.twist.angular.z = 0.0;
            auto start_side = this->now();
            while (rclcpp::ok() && (this->now() - start_side) < 6s) 
            {
               movement_publisher_->publish(msg);
               loop_rate.sleep();
            }
         }

         RCLCPP_INFO(this->get_logger(), "STOP");
         msg.twist.linear.x = 0.0; 
         movement_publisher_->publish(msg);
         current_state_ = RobotState::STOP;
      }
   }

   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
   rclcpp_action::Client<Undock>::SharedPtr undock_client_;
   rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
   rclcpp::init(argc, argv);
   rclcpp::spin(std::make_shared<SquareNode>());
   rclcpp::shutdown();

   return 0;
}