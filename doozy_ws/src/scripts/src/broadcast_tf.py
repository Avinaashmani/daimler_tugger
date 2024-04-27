#!/usr/bin/env python3

import rospy
import tf2_ros

from geometry_msgs.msg import TransformStamped, Quaternion


def main():
    rospy.init_node('tf_publisher')
    tf_broadcaster = tf2_ros.TransformBroadcaster()

    while not rospy.is_shutdown():
        try:
            # Publish transform for pallet_01
            t1 = TransformStamped()
            t1.header.stamp = rospy.Time.now()
            t1.header.frame_id = 'map'
            t1.child_frame_id = 'dolly_01'
            t1.transform.translation.x = 1.97
            t1.transform.translation.y = -1.93
            t1.transform.translation.z = 0.0
            t1.transform.rotation=Quaternion(0, 0, 0.7071068, 0.7071068)
            tf_broadcaster.sendTransform(t1)

            # Publish transform for pallet_02
            t2 = TransformStamped()
            t2.header.stamp = rospy.Time.now()
            t2.header.frame_id = 'odom'
            t2.child_frame_id = 'dolly_02'
            t2.transform.translation.x = -0.52
            t2.transform.translation.y = -1.98
            t2.transform.translation.z = 0.0
            t2.transform.rotation = Quaternion(0, 0, 0.7071068, 0.7071068)
            tf_broadcaster.sendTransform(t2)

            # Publish transform for pallet_03
            t3 = TransformStamped()
            t3.header.stamp = rospy.Time.now()
            t3.header.frame_id = 'map'
            t3.child_frame_id = 'charger'
            t3.transform.translation.x = -1.22
            t3.transform.translation.y = -2.15
            t3.transform.translation.z = 0.0
            t3.transform.rotation = Quaternion(0.0, 0.0, 0.0, 1.0)
            tf_broadcaster.sendTransform(t3)

        except rospy.ROSInterruptException:
            pass

        rospy.Rate(10).sleep()

if __name__ == '__main__':
    try:
        main()
    except rospy.ROSInterruptException:
        pass
