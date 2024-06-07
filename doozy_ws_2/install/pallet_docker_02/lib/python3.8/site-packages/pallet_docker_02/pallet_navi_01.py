import rclpy
from geometry_msgs.msg import PoseStamped
from nav2_msgs.action import NavigateToPose

class NavigationClient:
    def __init__(self):
        self.node = rclpy.create_node('navigation_client')
        self.action_client = self.node.create_client(NavigateToPose, '/navigate_to_pose')

        while not self.action_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('Action server not available, waiting...')

    def send_goal(self, pose):
        goal_msg = NavigateToPose.Goal()
        goal_msg.pose.header.frame_id = 'map'  # Frame ID should match your map frame
        goal_msg.pose.pose = pose

        self.node.get_logger().info(f'Sending goal: {goal_msg.pose.pose}')
        self.action_client.wait_for_server()

        self.send_goal_future = self.action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def feedback_callback(self, feedback_msg):
        self.node.get_logger().info(f'Received feedback: {feedback_msg}')

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.node.get_logger().info('Goal rejected')
            return

        self.node.get_logger().info('Goal accepted')

def main(args=None):
    rclpy.init(args=args)
    navigation_client = NavigationClient()

    # Define the goal pose
    goal_pose = PoseStamped()
    goal_pose.pose.position.x = 1.0
    goal_pose.pose.position.y = 1.0
    goal_pose.pose.orientation.w = 1.0  # Facing forward

    # Send the goal
    navigation_client.send_goal(goal_pose)

    rclpy.spin(navigation_client.node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
