//Created by : Pranita Shrestha
//Created on : 9/18/2017

// This lab is about calculating the acceleration with the help of velocity, time, and distance.



#include <iostream>
#include <string>
using namespace std;
struct PlaneInfo {

double distance;
double speed;
double time;
double acceleration;
double meters;
};

int main()
{
PlaneInfo jet_fighter;

cout << " Enter jets takeoff speed in Km/hr.: ";
cin >> jet_fighter.speed;
cout << "Enter distance of takeoff in meters.: ";
cin >> jet_fighter.meters;

jet_fighter.time = (7.2*(jet_fighter.distance)/ jet_fighter.speed);
jet_fighter.acceleration = (jet_fighter.speed / (jet_fighter.meters * 3.6));

cout << "The acceleration of a jet";
cout << "traveling at " << jet_fighter.speed <<"Km/Hr" << endl;
cout << "at a distance of " << jet_fighter.distance << " meters" <<  endl;
cout << "Is " << jet_fighter.acceleration << " meters/seconds^2" << endl;
cout << ", with a time of " << time << " seconds to reach takeoff speed" << endl;


}
    
    Enter jets takeoff speed in Km/hr.: 500
Enter distance of takeoff in meters.: 1000
The acceleration of a jettraveling at 500Km/Hr
at a distance of 9.88131e-324 meters
Is 0.138889 meters/seconds^2
, with a time of 1 seconds to reach takeoff speed