#!/usr/bin/env python3

import rclpy
from geometry_msgs.msg import TransformStamped
import tf2_ros
import math

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('static_tf2_broadcaster')
    tf_broadcaster = tf2_ros.StaticTransformBroadcaster(node)

    static_transformStamped = TransformStamped()

    static_transformStamped.header.stamp = node.get_clock().now().to_msg()
    static_transformStamped.header.frame_id = 'map'
    static_transformStamped.child_frame_id = 'frame2'

    static_transformStamped.transform.translation.x = 1.0
    static_transformStamped.transform.translation.y = 2.0
    static_transformStamped.transform.translation.z = 3.0

    static_transformStamped.transform.rotation.x = 0.0
    static_transformStamped.transform.rotation.y = 0.0
    static_transformStamped.transform.rotation.z = 0.0
    static_transformStamped.transform.rotation.w = 0.98

    tf_broadcaster.send_transform(static_transformStamped)

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()
def euler_from_quaternion(x, y, z, w):

    t0 = +2.0 * (w * x + y * z)
    t1 = +1.0 - 2.0 * (x * x + y * y)
    roll_x = math.atan2(t0, t1)
     
    t2 = +2.0 * (w * y - z * x)
    t2 = +1.0 if t2 > +1.0 else t2
    t2 = -1.0 if t2 < -1.0 else t2
    pitch_y = math.asin(t2)
     
    t3 = +2.0 * (w * z + x * y)
    t4 = +1.0 - 2.0 * (y * y + z * z)
    yaw_z = math.atan2(t3, t4)
     
    return  yaw_z 

if __name__ == '__main__':
    main()
