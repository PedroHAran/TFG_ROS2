#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

// Tipos de mensajes
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "irobot_create_msgs/msg/dock_status.hpp"
#include "irobot_create_msgs/action/undock.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;

class TurtleBot4WalkingNode : public rclcpp::Node
{
public:
  // Alias para hacer el código de acciones más legible
  using Undock = irobot_create_msgs::action::Undock;
  using GoalHandleUndock = rclcpp_action::ClientGoalHandle<Undock>;

  TurtleBot4WalkingNode()
  : Node("walking_node"), current_state_(RobotState::CHECKING_DOCK)
  {
    // QoS "SensorData" (Best Effort) por los los drivers
    rclcpp::QoS qos_profile = rclcpp::SensorDataQoS();

    // Avanzar
    movement_publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(
      "/cmd_vel", 
      qos_profile);

    // Mirar el estado del dock
    dock_subscriber_ = this->create_subscription<irobot_create_msgs::msg::DockStatus>(
      "/dock_status", 
      qos_profile, 
      std::bind(&TurtleBot4WalkingNode::dock_status_callback, this, _1));

    // Realizar undock
    undock_client_ = rclcpp_action::create_client<Undock>(this, "/undock");

    // TImer
    timer_ = this->create_wall_timer(
      100ms, 
      std::bind(&TurtleBot4WalkingNode::timer_callback, this));
      
    RCLCPP_INFO(this->get_logger(), "Node --> walking_node");
  }

private:
  // Estado del robot
  enum class RobotState {
    CHECKING_DOCK,
    UNDOCKING,
    WALKING
  };
  RobotState current_state_;

  // Callback del subscriptor de DockStatus
  void dock_status_callback(const irobot_create_msgs::msg::DockStatus::SharedPtr msg)
  {
    // Solo nos importa este mensaje al inicio para decidir qué hacer
    if (current_state_ == RobotState::CHECKING_DOCK) 
    {
      if (msg->is_docked) 
      {
        RCLCPP_INFO(this->get_logger(), "Docked --> Undocking");
        current_state_ = RobotState::UNDOCKING; // Actualizo estado
        send_undock_goal();
      } 
      else 
      {
        RCLCPP_INFO(this->get_logger(), "Undocked");
        current_state_ = RobotState::WALKING; // Actualizo estado
      }
    }
  }

  // Método para enviar la petición al Action Server
  void send_undock_goal()
  {
    if (!undock_client_->wait_for_action_server(std::chrono::seconds(5))) 
    {
      RCLCPP_ERROR(this->get_logger(), "Error in /undock");
      return;
    }

    auto send_goal_options = rclcpp_action::Client<Undock>::SendGoalOptions();
    
    // Callback para cuando termine undock
    send_goal_options.result_callback =
      std::bind(&TurtleBot4WalkingNode::undock_result_callback, this, _1);

    undock_client_->async_send_goal(Undock::Goal(), send_goal_options);
  }

  // Callback que se ejecuta cuando la acción de Undock termina
  void undock_result_callback(const GoalHandleUndock::WrappedResult & result)
  {
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        RCLCPP_INFO(this->get_logger(), "Undock completed");
        current_state_ = RobotState::WALKING; // Actualizo estado
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

  // Bucle de control (Ejecutado cada 100ms)
  void timer_callback()
  {
    // Si estamos en el estado correcto
    if (current_state_ == RobotState::WALKING) {
      auto msg = geometry_msgs::msg::TwistStamped();
      
      msg.header.stamp = this->get_clock()->now();
      msg.header.frame_id = "base_link"; 

      msg.twist.linear.x = 0.5; 
      msg.twist.angular.z = 0.1;

      movement_publisher_->publish(msg);
    }
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
  rclcpp::Subscription<irobot_create_msgs::msg::DockStatus>::SharedPtr dock_subscriber_;
  rclcpp_action::Client<Undock>::SharedPtr undock_client_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TurtleBot4WalkingNode>());
  rclcpp::shutdown();

  return 0;
}