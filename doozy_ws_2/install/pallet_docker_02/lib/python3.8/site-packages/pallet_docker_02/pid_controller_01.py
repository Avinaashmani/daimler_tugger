#!/usr/bin/env python3 

import rclpy
import math 
import numpy as np 
import tf2_ros
import tf2_geometry_msgs

from geometry_msgs.msg import TransformStamped, Twist, PointStamped
from rclpy.qos import QoSProfile, QoSReliabilityPolicy, QoSHistoryPolicy
from std_msgs.msg import String
from rclpy.node import Node
from rclpy.time import Time
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener

class Pallet_Docker(Node):

    def __init__(self):

        super().__init__('pallet_docker')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listner = tf2_ros.TransformListener(self.tf_buffer, self)
        qos_profile = QoSProfile(reliability=QoSReliabilityPolicy.BEST_EFFORT,
                                          history=QoSHistoryPolicy.KEEP_LAST,
                                          depth=1)
        self.tf_idx_sub = self.create_subscription(String, '/pallet_idx', self.tf_callback, qos_profile)
        self.target_frame = '/map'
    
    def tf_callback(self, data):
        
        tf_idx = data.data
        source_frame = f'/pallet_{tf_idx}' 
        point_msg = PointStamped()
        
        while tf_idx is not None:
            try:
                
                tf_transform = self.tf_buffer.lookup_transform(self.target_frame, source_frame, Time())
                transformed_point = tf2_geometry_msgs.do_transform_point(point_msg,tf_transform)

                print(transformed_point)
            
            except(tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException) as e:
                self.get_logger().error(f"Error: {e}")

def main():
    
    rclpy.init()
    pallet_docker = Pallet_Docker()
    rclpy.spin(pallet_docker)
    pallet_docker.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()