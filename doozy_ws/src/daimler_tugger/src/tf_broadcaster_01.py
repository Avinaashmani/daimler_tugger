#!/usr/bin/env python3

import rospy

import numpy as np
import math
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
from scripts.msg import SickTMini


class DollyTF:

    def __init__(self):
        
        rospy.init_node('dolly_tf_publisher')

        self.tf_broadcaster = TransformBroadcaster()

        self.rightCorner_x = 0.0
        self.rightCorner_y = 0.0
        self.rightCorner_z = 0.0

        self.leftCorner_x = 0.0
        self.leftCorner_y = 0.0
        self.leftCorner_z = 0.0

        rospy.Subscriber('/sick_vision_t_mini/one',SickTMini, self.sick_callback, queue_size=10)

    def sick_callback(self, msg ):

        sick_tf = TransformStamped()
        sick_tf.header.frame_id = 'map'
        sick_tf.child_frame_id = 'sick_visionary_t_mini'
        sick_tf.header.stamp = rospy.Time.now()
        sick_tf.transform.translation.x = msg.point.z
        sick_tf.transform.translation.y = msg.point.x
        sick_tf.transform.rotation.z = 0.0
        sick_tf.transform.rotation.w = 1.0

        self.tf_broadcaster.sendTransform(sick_tf)

        self.rightCorner_x = msg.right_corners.x
        self.rightCorner_y = msg.right_corners.y
        self.rightCorner_z = msg.right_corners.z

        self.leftCorner_x = msg.left_corners.x 
        self.leftCorner_y = msg.left_corners.y
        self.leftCorner_z = msg.left_corners.z

        rospy.loginfo("Sick TF published.")
        rospy.loginfo(f"Right Corner (x, y, z): ({self.rightCorner_x}, {self.rightCorner_y}, {self.rightCorner_z})")
        rospy.loginfo(f"Left Corner (x, y, z): ({self.leftCorner_x}, {self.leftCorner_y}, {self.leftCorner_z})")


def main():

    try:
        dolly_tf = DollyTF()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass

if __name__=='__main__':
    main()
