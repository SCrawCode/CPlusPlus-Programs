//C++ version of radio publisher node in ROS

#include <ros/ros.h>
#include <std_msgs/String.h>


int main (int argc, char **argv)
{
	ros::init(argc, argv, "robot_news_radio_transmitter", ros::init_options::AnonymousName);      //Initializes node
	ros::NodeHandle nh;					

	ros::Publisher pub = nh.advertise<std_msgs::String>("/robot_news_radio", 10);		//Creates topic publisher

	ros::Rate rate(3);		//Sleep rate (3Hz)

	//Message block (Executed every .33 secs)
	while (ros::ok()) {
		std_msgs::String msg;
		msg.data = "This is Will-Bot from the somehow even more robotic C++ division of Robot News Radio";
		pub.publish(msg);
		rate.sleep();
	}	
}
