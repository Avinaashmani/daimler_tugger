#!/usr/bin/env python3

import rclpy
import time

from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle
from doozy_actions.action import DollyDock

class DollyClient(Node):

    def __init__(self):
        super().__init__('client_node')

        self.dock_client = ActionClient(self, DollyDock, 'dock_to_dolly')

    def send_goal(self, reached_point, idx_no):
        self.dock_client.wait_for_server()
        send_goal = DollyDock.Goal()

        self.get_logger().info('Sending Goal to Server....')

        send_goal.idx_no = idx_no
        send_goal.reached_point = reached_point

        self.dock_client.wait_for_server()

        send_goal_future = self.dock_client.send_goal_async(send_goal, self.feedback_callback)
        send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        
        self.client_goal_handle: ClientGoalHandle = future.result()

        if self.client_goal_handle.accepted:
            self.client_goal_handle.get_result().add_done_callback(self.result_callback)
        else:
            print("Goal Rejected")
        return 

    def result_callback(self, future):
        result = future.result().result
        self.get_logger().info('result: '+str(result.docked_to_dolly))
    
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Recieved Feedback: {feedback}')

def main(args=None):
    rclpy.init(args=args)
    dock_client = DollyClient()
    dock_client.send_goal(True, '3')
    
    rclpy.spin_once(dock_client)

    dock_client.get_logger().info('All done!')

    rclpy.shutdown()

if __name__=='__main__':
    main()
    

