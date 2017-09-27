//Created by : Pranita Shrestha
//Created on : 9/27/2017

// This lab is about creating a random number between 1 and 100.



#include <iostream>
#include <string>
using namespace std;
int main()
{
    srand (time(NULL));
    int random_number;
    int random = rand () % 100 + 1;
    
    
    cout << " The random number is " << random << endl;
    cin >> random_number;
    
    
    
}