#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
  ros::init(argc, argv, "credits_receiver");
  ros::NodeHandle nh;
  ros::Publisher chatter_pub = nh.advertise<std_msgs::Int32>("credits", 10);
  ros::Rate loop_rate(10);

 

  while (ros::ok())
  {

    double cred;

    std_msgs::Int32 msg;

    std::cout <<"Professor, I would like credits!" <<endl;
    std::cout <<"<<How much money could you pay?>>"<<endl;
    std::cout <<"I will pay you ~~ $:";

    std::cin >> cred;


    msg.data = cred;

    if(cred >= 999999999999){
      break;
    }
  
   /* ROS_INFO("publish: %s", msg.data.c_str());*/
    chatter_pub.publish(msg);

    ros::spinOnce();
    loop_rate.sleep();
  }

  return 0;
}

