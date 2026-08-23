//Versión con transformación de coordenadas para /scan del laser a nube de puntos
#include <cmath>
#include <chrono>
#include <thread>
#include <algorithm>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp" // Cambiado a TwistStamped
#include "nav_msgs/msg/odometry.hpp"
#include "tf2/utils.h" // Para convertir quaternion a yaw

//Para la nube de puntos laser
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <laser_geometry/laser_geometry.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>


#include <iostream>
using namespace std;
using namespace std::chrono_literals;

#define SIMULACION  false //true o false
#define VOZ     false

//Para comando de voz
#include <cstdlib>


class SafeSpaceExplorer : public rclcpp::Node {
public:
    SafeSpaceExplorer() : Node("scan_safe_move") {

    // Crear un tf buffer y listener
    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(this->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    // Suscriptor para los mensajes LaserScan
    scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
      "/scan", rclcpp::SensorDataQoS(), std::bind(&SafeSpaceExplorer::scanCallback, this, std::placeholders::_1));

       /*
        scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
           "/scan", 10, std::bind(&SafeSpaceExplorer::scan_callback, this, std::placeholders::_1));
        //Los valores del laser están centrados en el sensor con centro en frame rplidar_link, son coordenadas locales
        */
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10, std::bind(&SafeSpaceExplorer::odom_callback, this, std::placeholders::_1));
        //La odometría /odom tiene como centro de coordenadas el punto de partida del robot, son coordinadas globales

        // Publicador actualizado a TwistStamped
        vel_pub_ = this->create_publisher<geometry_msgs::msg::TwistStamped>("/cmd_vel", 1);

        // Publicador para los mensajes PointCloud2
        point_cloud_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/point_cloud", 10);


        std::this_thread::sleep_for(std::chrono::seconds(2));//esperamos a que entren datos
        RCLCPP_INFO(this->get_logger(), "Nodo iniciado después de la pausa");

        // Creamos un WallTimer: usa el reloj del sistema (tiempo real)
        timer_ = this->create_wall_timer(
            3min,
            std::bind(&SafeSpaceExplorer::on_timer_timeout, this)
        );

        //this->declare_parameter("stop_threshold", 0.50);
    }





private:
    double current_yaw, current_yaw_grados;
    bool detectar=true, girar=true;
    double target_angle_grados=0, target_global=0;
    const double angle_min = -180;
    const double angle_increment=0.5625;
    struct punto2D{
        float x;
        float y;
    };


    double calcularAngulo(struct punto2D punto) {
        // atan2 devuelve el arco tangente en radianes entre -PI y PI
        double radianes = std::atan2(punto.y, punto.x);

        // Convertimos a grados
        double grados = radianes * (180.0 / M_PI);

        // Si prefieres el ángulo en formato 0-360 en lugar de -180 a 180:
        if (grados < 0) grados += 360.0;

        return grados;
    }




    void scanCallback(const sensor_msgs::msg::LaserScan::SharedPtr scan_msg)
    {
    //Parámetros para simulación o mundo real
    float velLinealAvance, velAngular, stop_dist;

    if (SIMULACION){
        velLinealAvance=3.0;velAngular=0.5;stop_dist=0.5;
    }
    else //Mundo real
    {
        velLinealAvance=0.2;velAngular=0.3;stop_dist=0.5;
    }



    // Esperar una transformación entre el marco del láser y el marco base (ej. 'base_link','odom' o 'map')
    // El marco a transformar puede variar dependiendo de la configuración de tu TurtleBot4
    // y tu stack de navegación. 'odom' o 'map' son comunes.
    std::string target_frame = "base_link"; // Puedes cambiar esto a 'odom' o 'map' si es necesario
    sensor_msgs::msg::PointCloud2 cloud;

    if (!tf_buffer_->canTransform(target_frame, scan_msg->header.frame_id, scan_msg->header.stamp, tf2::Duration(RCL_S_TO_NS(1))))
    {
      RCLCPP_WARN(this->get_logger(), "No se pudo transformar de %s a %s en el tiempo %f. Esperando transformacion...",
                  scan_msg->header.frame_id.c_str(), target_frame.c_str(), rclcpp::Time(scan_msg->header.stamp).seconds());
      return;
    }
    try
    {
      // Convertir LaserScan a PointCloud2

      projector_.transformLaserScanToPointCloud(target_frame, *scan_msg, cloud, *tf_buffer_);
      // Publicar la nube de puntos
      point_cloud_pub_->publish(cloud);
    }
    catch (tf2::TransformException &ex)
    {
      RCLCPP_ERROR(this->get_logger(), "Error de transformación al convertir LaserScan a PointCloud2: %s", ex.what());
      return;
    }



    struct punto2D pLejano={0,0}, pFrontalCerca={0,0};

     std::vector<float> distancias;

            // Iteradores para recorrer la nube de puntos
            sensor_msgs::PointCloud2Iterator<float> iter_x(cloud, "x");
            sensor_msgs::PointCloud2Iterator<float> iter_y(cloud, "y");
            sensor_msgs::PointCloud2Iterator<float> iter_z(cloud, "z");

            //double dist_min = std::numeric_limits<double>::max();
            double dist_min_frontal = std::numeric_limits<double>::max();
            double dist_max = 0.0;

            for (; iter_x != iter_x.end(); ++iter_x, ++iter_y, ++iter_z) {
                // Calcular distancia al origen (base_link)
                double d = std::sqrt(std::pow(*iter_x, 2) + std::pow(*iter_y, 2) + std::pow(*iter_z, 2));

                /*if (d < dist_min){
                     dist_min = d;
                    pCercano.x=*iter_x;
                    pCercano.y=*iter_y;
                } */


                if (d > dist_max) {
                    pLejano.x=*iter_x;
                    pLejano.y=*iter_y;
                    dist_max = d;
                 }

                //Radio de la base es 17 cm
                if (*iter_x>0.40)//Considero que es un punto por delante 30 cm
                {
                    if(d<dist_min_frontal)
                    {
                        dist_min_frontal = d;
                        pFrontalCerca.x=*iter_x;
                        pFrontalCerca.y=*iter_y;
                    }
                }
            }

            //RCLCPP_INFO(this->get_logger(), "CercaFrontal: %.2f m  (%.2f, %.2f)| Lejos: %.2f m (%.2f, %.2f)",dist_min_frontal, pFrontalCerca.x, pFrontalCerca.y, dist_max, pLejano.x, pLejano.y);
            //RCLCPP_INFO(this->get_logger(), "En grados, cerca: %.2fº  Lejos %.2fº", calcularAngulo(pFrontalCerca), calcularAngulo(pLejano));


            auto vel_msg = geometry_msgs::msg::TwistStamped();
            float velAngularMsg=0;
            bool giroIzq=false;


                // Configuración del Header (Obligatorio en Stamped)
            vel_msg.header.stamp = this->get_clock()->now();
            vel_msg.header.frame_id = "base_link"; // O el frame de tu robot

         if(detectar){

            std::string comando = "espeak-ng -v es -s 130 \"Detectando espacio libre alrededor\"";
            if (VOZ) std::system(comando.c_str());

            target_angle_grados = calcularAngulo(pLejano);//Est entre 0 y 360 grados
            target_global=int(target_angle_grados+current_yaw_grados)%360;


                RCLCPP_INFO(this->get_logger(), "Espacio libre a %.2fm en %.1f grados, tar.glob.: %.2f",
                dist_max, target_angle_grados , target_global);
                RCLCPP_INFO(this->get_logger(), "ObjetivoL: %.2f OG: %.2f Actual: %.2f", target_angle_grados, target_global, current_yaw_grados);

                detectar=false;
                char mensaje[300];
                std::snprintf(mensaje, sizeof(mensaje), "Se ha detectado espacio libre a %d metros en %d grados. Girando.", (int)dist_max, (int)target_angle_grados);
                std::string mensajeString("espeak-ng -v es -s 130 ");
                mensajeString=mensajeString+ "\""+ string(mensaje)+"\"";
                cout << mensajeString << endl;

                if (VOZ) std::system(mensajeString.c_str());

            }

        if (!detectar && girar ) {

            //Estará alineado con este índice cuando el ángulo sea aproximadamente cero
            float angle_tolerance_grados = 0.6; //grados

            float diferencia=target_global-current_yaw_grados;

            if(fabs(diferencia)>angle_tolerance_grados)//Hay que girar. Dejamos un margen de precisión definido por el umbral.
            {
                if(fabs(diferencia)<180)
                    if(diferencia>0)
                    giroIzq=true;
                    else giroIzq=false;
                else
                    if(diferencia>0)
                   giroIzq=false;
                    else giroIzq=true;
            
                if (giroIzq)//Girar hacia la izquierda
                    velAngularMsg=velAngular;
                else//Girar a la derecha
                    velAngularMsg=-1*velAngular;
                                
                vel_msg.twist.linear.x = 0.0;
                vel_msg.twist.angular.z = velAngularMsg;
                vel_pub_->publish(vel_msg);
            
            }
            else
            {
                // Alineado: se para
                RCLCPP_INFO(this->get_logger(), "Alineación conseguida");
                std::string comando = "espeak-ng -v es -s 130 \"Giro realizado. Avanzando hasta detectar distancia de seguridad.\"";
                if (VOZ) std::system(comando.c_str());
                girar=false;
                vel_msg.twist.linear.x = 0.0;
                vel_msg.twist.angular.z = 0.0;
                vel_pub_->publish(vel_msg);
            }

           }

           if(!detectar && !girar)
           {
                //RCLCPP_INFO(this->get_logger(), "Avanzando");

                 // 1. CHEQUEO DE SEGURIDAD (Parada de emergencia)
                //int center_idx = msg->ranges.size() / 2;
                //int check_range = 10;
                bool emergency_stop = false;
                if (dist_min_frontal<stop_dist) emergency_stop=true;


            if (emergency_stop) {
                RCLCPP_INFO(this->get_logger(), "Parada por cercanía en %.2fm grados %.2f", dist_min_frontal, calcularAngulo(pFrontalCerca) );

                vel_msg.twist.linear.x = 0.0;
                vel_msg.twist.angular.z = 0.0;
                vel_pub_->publish(vel_msg);
                detectar=true;
                girar=true;
                char mensaje[300];
                std::snprintf(mensaje, sizeof(mensaje), "Se ha detectado obstaculo a %.1f metros en %d grados.", dist_min_frontal, (int)calcularAngulo(pFrontalCerca));
                std::string mensajeString("espeak-ng -v es -s 130 ");
                mensajeString=mensajeString+ "\""+ string(mensaje)+"\"";
                cout << mensajeString << endl;

                if (VOZ) std::system(mensajeString.c_str());

                rclcpp::sleep_for(1s);//Para esperar a que se pare
                //return;
            }
            else
            {

                //velLineal=std::min(0.3f, best_avg_dist * 0.15f);

                vel_msg.twist.linear.x = velLinealAvance;
                vel_msg.twist.angular.z = 0;
                vel_pub_->publish(vel_msg);


            }


           }

   }




     void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {

           // Obtener el yaw actual (ángulo de giro)
        double siny_cosp = 2 * (msg->pose.pose.orientation.w * msg->pose.pose.orientation.z +
                                msg->pose.pose.orientation.x * msg->pose.pose.orientation.y);
        double cosy_cosp = 1 - 2 * (msg->pose.pose.orientation.y * msg->pose.pose.orientation.y +
                                    msg->pose.pose.orientation.z * msg->pose.pose.orientation.z);
        current_yaw = std::atan2(siny_cosp, cosy_cosp); //En radianes
        current_yaw_grados=current_yaw * (180.0 / M_PI); //En grados, Desde -180º a +180º segun la orientación del odom
        //Lo paso a grados y siempre positivos para que esté entre 0 y 360 grados.
        if (current_yaw_grados <0) current_yaw_grados=current_yaw_grados+360;


    }

     void on_timer_timeout()
    {
        RCLCPP_WARN(this->get_logger(), "¡Se alcanzó el tiempo. Apagando el nodo...");

        std::string comando = "espeak-ng -v es -s 130 \"Se ha alcanzado el tiempo máximo establecido. Fin del programa.\"";
        if (VOZ) std::system(comando.c_str());
        // rclcpp::shutdown() notifica al ejecutor (spin) que debe detenerse
        rclcpp::shutdown();
    }



/*
    void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg) {
        auto vel_msg = geometry_msgs::msg::TwistStamped();
        float velAngular=0, velLineal=0, best_avg_dist = 0.0;
        float stop_dist=0.5;
        int numLaseres=msg->ranges.size(); //Son 640 laseres
        int best_index=-1;


               // Configuración del Header (Obligatorio en Stamped)
        vel_msg.header.stamp = this->get_clock()->now();
        vel_msg.header.frame_id = "base_link"; // O el frame de tu robot

        // float stop_dist = this->get_parameter("stop_threshold").as_double();

        //cout<<"Valores laser recibidos: "<<numLaseres<<endl;
        // Primero ver el estado: Si detectando hueco o moviéndose
        if (detectar)
        {

        // 1. LÓGICA DE DETECCIÓN
        const int window = 12;

        for (int i = 0; i <numLaseres-window; i++) { // Desde -180º a +180º segun la orientación del odom, son 640 laseres
            float sum = 0.0;
            int valid = 0;
            for (int j = 0; j < window; ++j) {
                float r = msg->ranges[i + j];
                if (std::isfinite(r) && r > 2*stop_dist) {
                    sum += r;
                    valid++;
                }
            }

            if (valid>window/2) {
                float avg = sum / valid;
                //RCLCPP_INFO(this->get_logger(), "Media %.2fm en index: %d", avg, i + (window / 2) );
                if (avg > best_avg_dist) {
                    best_avg_dist = avg;
                    best_index = i + (window / 2);
                    //RCLCPP_INFO(this->get_logger(), "Max. local a %.2fm en index: %d", best_avg_dist, best_index);
                }
            }
          }

          if (best_index!=-1)
          {
              target_angle_grados = angle_min + (best_index * angle_increment);
              //Lo paso a grados y siempre positivos para que esté entre 0 y 360 grados.
              if (target_angle_grados <0) target_angle_grados=target_angle_grados+360;

              target_global=int(target_angle_grados+current_yaw_grados)%360;
              //target_angle_grados=target_angle * (180.0 / M_PI);
              RCLCPP_INFO(this->get_logger(), "Espacio libre a %.2fm en %.1f grados, best index: %d, tar.glob.: %.2f",
                best_avg_dist, target_angle_grados ,best_index, target_global);

              detectar=false;
              best_index=-1;

          }
          else
            RCLCPP_INFO(this->get_logger(), "No se ha detectado espacio libre" );



        } //fin de si detectar

        if (!detectar && girar ) {
            //cout<<"best_index: "<<best_index<<" ";
            //target_angle = msg->angle_min + (best_index * msg->angle_increment);
            //Estará alineado con este índice cuando el ángulo sea aproximadamente cero
            float angle_tolerance_grados = 0.6; // radianes (~0.57 grados)

            //cout<<"best_index: "<<best_index<<" "<<"target angle: "<<target_angle<<" ";


            //RCLCPP_INFO(this->get_logger(), "ObjetivoL: %.2f OG: %.2f Actual: %.2f", target_angle_grados, target_global, current_yaw_grados);



            if (std::abs(target_global-current_yaw_grados)> angle_tolerance_grados) {
           // Girar hacia el espacio libre (Z positiva es izquierda)
                velAngular= ((target_global-current_yaw_grados) > 0) ? 0.5 : -0.5;
                velLineal= 0; // Moverse un poco mientras gira
                vel_msg.twist.linear.x = velLineal;
                vel_msg.twist.angular.z = velAngular;
                vel_pub_->publish(vel_msg);

                }

            else
            {
                // Alineado: se para
                RCLCPP_INFO(this->get_logger(), "Alineación conseguida");
                girar=false;
                velAngular=0.0;
                velLineal=0.0;
                vel_msg.twist.linear.x = velLineal;
                vel_msg.twist.angular.z = velAngular;
                vel_pub_->publish(vel_msg);
            }

           }

           if(!detectar && !girar)
           {
                //RCLCPP_INFO(this->get_logger(), "Avanzando");

                 // 1. CHEQUEO DE SEGURIDAD (Parada de emergencia)
                //int center_idx = msg->ranges.size() / 2;
                //int check_range = 10;
                bool emergency_stop = false;
                int umbralLaserCerca=0;
                int numLaserCerca=0;
                int inicioFrontal=int(90/angle_increment);
                int finalFrontal=int(270/angle_increment);
                // Miro los laseres desde -80 grados a + 80 grados, rango de 100 grados frontal
                for (int i = inicioFrontal; i <= finalFrontal && !emergency_stop; ++i) {
                    float r = msg->ranges[i];
                    //cout<<"r es: "<<r<<" i es: "<<i<<" ";
                    if (std::isfinite(r) && r < stop_dist) numLaserCerca++;
                    if (numLaserCerca>umbralLaserCerca)
                    {
                        RCLCPP_INFO(this->get_logger(), "r cerca es: %2f, i es: %d", r, i);
                        emergency_stop=true;
                    }

                }

            if (emergency_stop) {
                RCLCPP_INFO(this->get_logger(), "Parada por cercanía de obstáculo" );
                vel_msg.twist.linear.x = 0.0;
                vel_msg.twist.angular.z = 0.0;
                vel_pub_->publish(vel_msg);
                detectar=true;
                girar=true;

                rclcpp::sleep_for(1s);//Para esperar a que se pare
                //return;
            }
            else
            {

                //velLineal=std::min(0.3f, best_avg_dist * 0.15f);
                velLineal=1;
                vel_msg.twist.linear.x = velLineal;
                vel_msg.twist.angular.z = 0;
                vel_pub_->publish(vel_msg);


            }


        }
    }
    */
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr vel_pub_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr point_cloud_pub_;
    rclcpp::TimerBase::SharedPtr timer_;

    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
    laser_geometry::LaserProjection projector_;




};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    cout<<"Iniciando nodo scan_safe_move"<<endl;
    //Hay que iniciar la suscripción a la odometría un tiempo inicial para esperar




    rclcpp::spin(std::make_shared<SafeSpaceExplorer>());
    rclcpp::shutdown();
    return 0;
}
