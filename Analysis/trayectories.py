#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
import rclpy.time

class TrajectoryExtractor(Node):
    def __init__(self):
        super().__init__('trajectory_extractor')
        
        # Forzar al nodo a usar el tiempo de la simulación (del bag)
        self.set_parameters([rclpy.Parameter('use_sim_time', rclpy.Parameter.Type.BOOL, True)])
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        # Leemos a 10 Hz (cada 0.1 segundos)
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        # Archivos formato TUM (timestamp x y z qx qy qz qw)
        self.file_slam = open('trayectoria_slam.tum', 'w')
        self.file_odom = open('trayectoria_odom.tum', 'w')
        
        self.get_logger().info('Esperando datos del bag... (Reproduce el bag en otra terminal)')

    def timer_callback(self):
        # 1. Extraer trayectoria de Odometría (Referencia)
        try:
            t_odom = self.tf_buffer.lookup_transform('odom', 'base_link', rclpy.time.Time())
            time_odom = t_odom.header.stamp.sec + t_odom.header.stamp.nanosec * 1e-9
            pos = t_odom.transform.translation
            rot = t_odom.transform.rotation
            self.file_odom.write(f"{time_odom:.6f} {pos.x:.6f} {pos.y:.6f} {pos.z:.6f} {rot.x:.6f} {rot.y:.6f} {rot.z:.6f} {rot.w:.6f}\n")
        except Exception:
            pass

        # 2. Extraer trayectoria de SLAM (Estimada)
        try:
            t_slam = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time())
            time_slam = t_slam.header.stamp.sec + t_slam.header.stamp.nanosec * 1e-9
            pos = t_slam.transform.translation
            rot = t_slam.transform.rotation
            self.file_slam.write(f"{time_slam:.6f} {pos.x:.6f} {pos.y:.6f} {pos.z:.6f} {rot.x:.6f} {rot.y:.6f} {rot.z:.6f} {rot.w:.6f}\n")
            
            self.get_logger().info('Grabando puntos...', throttle_duration_sec=2.0)
        except Exception:
            pass

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryExtractor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Extracción finalizada. Cerrando archivos.')
    finally:
        node.file_slam.close()
        node.file_odom.close()
        rclpy.shutdown()

if __name__ == '__main__':
    main()