#include <ros/ros.h>
#include <std_msgs/Int32.h>



int main(int argc,char** argv)
{
	if(argc <2)
	{
		ROS_ERROR("please input trigger rate!");
		return 0;
	}
	
	ros::init(argc, argv, "save_image_trigger");
	
	ros::NodeHandle nh;

	ros::Publisher pub = nh.advertise<std_msgs::Int32>("save_image_trigger",1);
	
	ros::Rate loop_rate(atoi(argv[1]));
	
	
	std_msgs::Int32 triggerMsg;
	triggerMsg.data = 0;
	
	while(ros::ok())
	{
		pub.publish(triggerMsg);
		
		triggerMsg.data ++ ;
		
		loop_rate.sleep();
	}
	
	return 0;
}

