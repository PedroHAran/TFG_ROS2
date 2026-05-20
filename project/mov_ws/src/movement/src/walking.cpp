/*****************************************************************************/
//  First test with coding the TurtleBot
//
//  Just make the robot walk to the infinity
/*****************************************************************************/

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"

using namespace std::chrono_literals;

class WalkingNode : public rclcpp::Node
{
public:
   WalkingNode()
   : Node("walking_node")
   {
      // QoS Best Effort
      rclcpp::QoS qos_profile = rclcpp::SensorDataQoS();

      // Speed publisher
      movement_publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>(
         "/cmd_vel", 
         qos_profile);

      // TImer
      timer_ = this->create_wall_timer(
         100ms, 
         std::bind(&WalkingNode::publish_velocity, this));
   }

private:
   void publish_velocity()
   {
      auto msg = geometry_msgs::msg::TwistStamped();
      
      msg.header.stamp = this->get_clock()->now();
      msg.header.frame_id = "base_link";

      // Set sepeed
      msg.twist.linear.x = 0.3;
      msg.twist.angular.z = 0.0;

      // Publish
      movement_publisher_->publish(msg);
   }

   rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr movement_publisher_;
   rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char ** argv)
{
   rclcpp::init(argc, argv);
   rclcpp::spin(std::make_shared<WalkingNode>());
   rclcpp::shutdown();

  return 0;
}