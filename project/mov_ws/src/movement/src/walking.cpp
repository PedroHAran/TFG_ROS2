#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
// 1. CAMBIO IMPORTANTE: Incluir el mensaje Stamped
#include "geometry_msgs/msg/twist_stamped.hpp" 

using namespace std::chrono_literals;

class TurtleBot4WalkingNode : public rclcpp::Node
{
public:
  TurtleBot4WalkingNode()
  : Node("walking_node")
  {
    // 2. CAMBIO IMPORTANTE: Usar el perfil QoS "SensorData" (Best Effort) 
    // para asegurar compatibilidad total con los drivers del robot.
    rclcpp::QoS qos_profile = rclcpp::SensorDataQoS();

    // Actualizamos el tipo de publicador a TwistStamped
    movement_publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(
      "/cmd_vel", 
      qos_profile);

    timer_ = this->create_wall_timer(
      100ms, 
      std::bind(&TurtleBot4WalkingNode::publish_velocity, this));
  }

private:
  void publish_velocity()
  {
    // Usamos el nuevo tipo de mensaje
    auto msg = geometry_msgs::msg::TwistStamped();
    
    // 3. CAMBIO IMPORTANTE: Llenar el Header
    // Al robot le importa CUÁNDO se generó este comando
    msg.header.stamp = this->get_clock()->now();
    msg.header.frame_id = "base_link"; // El sistema de referencia del robot

    // Set speed (nota que ahora las velocidades están dentro del sub-objeto 'twist')
    msg.twist.linear.x = 1.0;
    msg.twist.angular.z = 0.0;

    // Publicar
    movement_publisher_->publish(msg);
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TurtleBot4WalkingNode>());
  rclcpp::shutdown();

  return 0;
}