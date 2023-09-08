#include<ros/ros.h>
#include<std_msgs/String.h>


void cmd_callback(std_msgs::String msg)
{
    ROS_INFO(msg.data.c_str());
}


int main(int argc, char  *argv[])
{
    ros::init(argc,argv,"testNode");
    ros::NodeHandle n;

    
    ros::Subscriber subcmd = n.subscribe("cmd_vel",1,cmd_callback);

    while(ros::ok())
    {
        ros::spinOnce();
    }
    return 0;
}
