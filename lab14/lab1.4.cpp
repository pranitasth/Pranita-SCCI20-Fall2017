//Created by : Pranita Shrestha
//Created on : 9/6/2017

// This lab calculate dnominations of coins of a given amount of change and determining the earning in dollars and cents. 


#include <iostream>
using namespace std;
int main()
{
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int change =0;
    int dollar = 0;
    int cents = 0;
    int tens = 0;
    int ones = 0;
    
    int userNumber;
    int change_quarter_dime_nickel_penny; //declare variables
    cout <<"Enter amount of money";
    cin >> userNumber; //input the amount of change
    change = userNumber;
    quarter = change / 25;
    change = change % 25;
    dime = change / 10;
    change = change % 10;
    nickel = change / 5;
    change = change % 5;
    penny = change / 1;
    
    cout <<"Quarter :"<< quarter << endl; 
    cout <<"Dime :" << dime << endl;
    cout <<"Nickel :" << nickel << endl;
    cout <<"Penny :" << penny << endl;
    
    dollar = userNumber / 100;
    cents = userNumber % 100;
    tens = cents / 10;
    ones = cents % 10;
    
    cout << "The total is $" << dollar << "." << tens << ones << "." << endl;
    
    

    
}