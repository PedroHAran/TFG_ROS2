#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <vector>
#include <cstdlib>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"

using namespace std::chrono_literals;

class WarehouseExplorer : public rclcpp::Node
{
public:
  WarehouseExplorer()
  : Node("warehouse_explorer"), step_(0)
  {
    // 1. Desacoplar el robot (Undock)
    RCLCPP_INFO(this->get_logger(), "Iniciando maniobra de desacople (Undocking)...");
    
    // CORRECCIÓN: El comando correcto en ROS 2 es "send_goal"
    int result = std::system("ros2 action send_goal /undock irobot_create_msgs/action/Undock \"{}\"");
    
    if (result != 0) {
        RCLCPP_WARN(this->get_logger(), "Aviso: El comando de desacople devolvio un error (quiza ya estaba desacoplado).");
    } else {
        RCLCPP_INFO(this->get_logger(), "Robot desacoplado con exito. Iniciando ruta...");
    }

    // 2. Inicializar publicador con TwistStamped
    publisher_ = this->create_publisher<geometry_msgs::msg::TwistStamped>("cmd_vel", 10);
    
    // 3. Inicializar el timer (se ejecuta cada 10ms)
    timer_ = this->create_wall_timer(
      10ms, std::bind(&WarehouseExplorer::timer_callback, this));
      
    // 4. Definir la ruta: {velocidad_lineal (x), velocidad_angular (z), duracion_en_segundos}
    sequence_ = {
        // 1. Salir de la base
        {0.2, 0.0, 2.5},
        {0.0, 0.0, 1.0},   // Pausa
        
        // 2. Esquivar la primera estanteria
        {0.0, 0.2, 6.5},
        {0.2, 0.0, 28.0}, 
        {0.0, 0.0, 1.0},   // Pausa
        
        // 3. Rodear estanteria
        {0.0, 0.2, 16.9},
        {0.2, 0.0, 28.4},  
        {0.0, 0.0, 1.0},   // Pausa

        // 4. Recorrer el pasillo
        {0.0, -0.2, 9.30},
        {0.2, 0.0, 115.0},  
        {0.0, 0.0, 1.0},   // Pausa

        // 5. Inicio de la vuelta haciendo una U
        {0.0, 0.2, 14.0},
        {0.2, 0.0, 36.0},
        {0.0, 0.0, 1.0},   // Pausa

        // 6. Vuelta 
        {0.0, 0.2, 16.2},
        {0.2, 0.0, 132.0},
        {0.0, 0.0, 1.0},   // Pausa
/*
        // 8. CIERRE DE BUCLE: Giro de 360 grados
        // 360 grados = 6.2832 radianes. A 0.1 rad/s = 62.8 segundos.
        {0.0, 0.1, 62.8},

        */
        // 9. Fin
        
    };

    current_action_start_ = this->now();
  }

private:
  struct Action {
      double linear_x;
      double angular_z;
      double duration;
  };

  void timer_callback()
  {
      if (step_ >= sequence_.size()) {
          // Secuencia terminada, enviar 0 para que no se mueva
          auto msg = geometry_msgs::msg::TwistStamped();
          msg.header.stamp = this->now();
          msg.header.frame_id = "base_link";
          publisher_->publish(msg);
          
          if (step_ == sequence_.size()) {
             RCLCPP_INFO(this->get_logger(), "¡Ruta completada!");
             step_++; 
          }
          return;
      }

      auto now = this->now();
      auto elapsed = (now - current_action_start_).seconds();
      auto current_action = sequence_[step_];

      if (elapsed >= current_action.duration) {
          step_++;
          current_action_start_ = now;
          RCLCPP_INFO(this->get_logger(), "Paso %zu finalizado.", step_);
      } else {
          // Publicar la velocidad actual usando TwistStamped
          auto msg = geometry_msgs::msg::TwistStamped();
          msg.header.stamp = now;
          msg.header.frame_id = "base_link"; // El frame de referencia del robot
          msg.twist.linear.x = current_action.linear_x;
          msg.twist.angular.z = current_action.angular_z;
          publisher_->publish(msg);
      }
  }

  rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  std::vector<Action> sequence_;
  size_t step_;
  rclcpp::Time current_action_start_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<WarehouseExplorer>());
  rclcpp::shutdown();
  return 0;
}