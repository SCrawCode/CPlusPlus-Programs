#include <ros/ros.h>

int main(int argc, char **argv)
{
	ros::init(argc, argv, "first_cpp_node");
	ros::NodeHandle nh;  				//Starts node (Exclusive to C++)

	ROS_INFO("Node has started");

	ros::Rate rate(10);				//Objects that sets a rate of 10Hz

	while (ros::ok()){
		ROS_INFO("Henlo");
		rate.sleep();				//Publishes data at a regular time rate
	}
}
