//Created by : Pranita Shrestha
//Created on : 9/20/2017

// This lab is will output information about windchills, based on the user’s inputs of temperature and starting wind speed. 



#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    
    double velocity;
    double windchill;
    double wind_speed;
    double old_style_wind_chill;
    double new_style_wind_chill;
    double new_formula;
    double old_formula;
    double difference;
    double temperature;
    
    cout << "Enter the wind speed: ";
    cin >> wind_speed;
    cout << " Enter the temperature: " ;
    cin >> temperature;
    
    
    
    old_style_wind_chill = (0.81 * 3.71 * (sqrt(velocity)) + 5.81 - 0.25 * velocity) * ((temperature - 91.4) + 91.4);
    new_style_wind_chill = (35.74 + 0.6215 * temperature - 35.75 * (pow(velocity,0.16)) + 0.4275 * temperature * (pow(velocity,0.16)));
    
    difference  = old_style_wind_chill - new_style_wind_chill;
    
    cout << " Wind speed : " << wind_speed << endl;
    cout << " New formula : " << new_style_wind_chill << endl;
    cout << " Old formula : " << old_style_wind_chill << endl;
    cout << " Difference : " << difference << endl;
    
    
}