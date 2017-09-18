//Created by : Pranita Shrestha
//Created on : 9/13/2017

// This lab is about calculating the acceleration with the help of velocity, time, and distance.



#include <iostream>
#include <string>
using namespace std;
struct acceleration;

int main()
{
float distance;
float speed;
float time;
float acceleration;
float meters;

cout << " Enter jets takeoff speed in Km/hr.: ";
cin >> speed;
cout << "Enter distance of takeoff in meters.: ";
cin >> meters;

time = (7.2*(distance)/ speed);
acceleration = (speed /(distance * 3.6));

cout << "The acceleration of a jet";
cout << "traveling at " << speed <<"Km/Hr" << endl;
cout << "at a distance of " << distance << "meters." <<  endl;
cout << "Is " << acceleration << " meters/seconds^2" << endl;
cout << ", with a time of " << time << " seconds to reach takeoff speed" << endl;


}
    