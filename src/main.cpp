#include "livox_ros_driver2.cpp"

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions options;
  auto node = std::make_shared<livox_ros::DriverNode>(options);
  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();
  return 0;
}