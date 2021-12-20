#include <ros/ros.h>
#include <std_msgs/Int32.h>
#include <iostream>
#include <random>

using namespace std;

void credit_creator(int num)
{


  std::cout <<num<<endl;


  if(num <= 999){

    cout <<"I will not give you any credits."<< endl;

  }

  if(num >= 1000 && num <= 9999 ){

    cout <<"I will give you "<< rand() % 3 + 1 << " credits." << endl;

  }else if(num >=10000  && num <= 99999){

    cout <<"I will give you "<< rand() % 3 + 4 << " credits." << endl;

  }else if(num >= 100000 && num <=999999){

    cout <<"I will give you "<< rand() % 2 + 8 << " credits." << endl;

  }

  if(num >= 1000000){

  cout <<"I allow you to graduate this college."<< endl;
  }
}

void chatterCallback(const std_msgs::Int32& msg)
{
  credit_creator(msg.data);
}

int main(int argc, char** argv)
{
  std::cout <<" Hmmm,,, you'd like to get credits. If you give me much money, I will give you credits." <<endl;
  std::cout <<" How much money could you pay to me??" <<endl;
  ros::init(argc, argv, "credits_donor");
  ros::NodeHandle nh;
  ros::Subscriber sub = nh.subscribe("credits", 10, chatterCallback);

  ros::spin();
  return 0;
}
