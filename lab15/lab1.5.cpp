//Created by : Pranita Shrestha
//Created on : 9/11/2017

// This lab is about creating a paragraph by using different variables.


#include <iostream>
#include <string>
using namespace std;
int main()
{
    string day = "25";
    string day_of_week = "Wednesday";
    string months = "March";
    string time = "9:56 am";
    string temperature = "45 degree";
    string RAM = "78";
    string CPU = "22";
    string battery = "93%";
    
    cout << "There are many kinds of dinosaurs. Today scientist know about " << day <<" different kinds of dinosaurs." << endl;
    cout << "Some like " << day_of_week <<", ate plants but others, like " << months <<" ate " << time << endl;
    cout << "They could grow to " << temperature <<" meters tall." << endl;
    cout << "Scientist think they first appeared about " << RAM << " million years ago." << endl;
    cout << "Scientists believe that dinosaurs became extinct " << CPU << " million years ago, but i'm " << battery <<" sure my lizard is secretly a dinosaur." << endl;
    
}
    