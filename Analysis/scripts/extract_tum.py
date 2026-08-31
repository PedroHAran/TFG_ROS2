#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from nav_msgs.msg import Odometry
import rclpy.time
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy

class TrajectoryExtractor(Node):
    def __init__(self):
        super().__init__('trajectory_extractor')
        self.set_parameters([rclpy.Parameter('use_sim_time', rclpy.Parameter.Type.BOOL, True)])
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        self.file_slam = open('trayectoria_slam.tum', 'w')
        self.file_odom = open('trayectoria_odom.tum', 'w')
        
        # Perfil QoS para leer rosbags de forma fiable
        qos_profile = QoSProfile(
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=100,
            reliability=QoSReliabilityPolicy.BEST_EFFORT
        )
        
        # Suscripción al Ground Truth con el QoS ajustado
        self.gt_sub_odom = self.create_subscription(
            Odometry, 
            '/sim_ground_truth_pose', 
            self.gt_callback_odom, 
            qos_profile
        )
        
        # Reducimos el tiempo del timer a 0.05 para ir más rápido (acorde al -r 5)
        self.timer = self.create_timer(0.05, self.timer_callback)
        self.get_logger().info('Esperando datos del bag...')

    def gt_callback_odom(self, msg):
        time_gt = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9
        pos = msg.pose.pose.position
        rot = msg.pose.pose.orientation
        self.file_odom.write(f"{time_gt:.6f} {pos.x:.6f} {pos.y:.6f} {pos.z:.6f} {rot.x:.6f} {rot.y:.6f} {rot.z:.6f} {rot.w:.6f}\n")
        self.file_odom.flush()

    def timer_callback(self):
        try:
            # Intenta primero con 'map' (para SLAM Toolbox, Cartographer, etc.)
            t_slam = self.tf_buffer.lookup_transform('map', 'base_link', rclpy.time.Time())
        except Exception:
            try:
                # Si falla, intenta con 'odom' (suele ser el caso de RTAB-Map o fallos de tf)
                t_slam = self.tf_buffer.lookup_transform('odom', 'base_link', rclpy.time.Time())
            except Exception:
                return # Si ambos fallan, sale sin escribir nada

        time_slam = t_slam.header.stamp.sec + t_slam.header.stamp.nanosec * 1e-9
        pos = t_slam.transform.translation
        rot = t_slam.transform.rotation
        self.file_slam.write(f"{time_slam:.6f} {pos.x:.6f} {pos.y:.6f} {pos.z:.6f} {rot.x:.6f} {rot.y:.6f} {rot.z:.6f} {rot.w:.6f}\n")
        self.file_slam.flush()

def main(args=None):
    rclpy.init(args=args)
    node = TrajectoryExtractor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.file_slam.close()
        node.file_odom.close()
        rclpy.shutdown()

if __name__ == '__main__':
    main()