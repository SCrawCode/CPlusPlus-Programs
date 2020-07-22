//C++ version of smartphone radio subscriber node in ROS

#include <ros/ros.h>
#include <std_msgs/String.h>


void callback_receive_radio_data(const std_msgs::String& msg)
{
	ROS_INFO("Message Received: %s", msg.data.c_str());	//Prints data for sub
}

int main (int argc, char **argv)
{
	ros::init(argc, argv, "smartphone"); //Initialize node
	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe("/robot_news_radio", 
		1000, callback_receive_radio_data );	//Sets as sub

	ros::spin();     	//Keeps node running until termination
}
