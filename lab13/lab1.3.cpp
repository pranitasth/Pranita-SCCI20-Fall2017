#include <iostream>
using namespace std;
int main ()
{
    int population = 325365189; //initial population
    int current_year = 2017;
    int years_future;
    int past_year = 0;
    int rate_of_growth = 12;
    int rate_of_growth_year; // rate of growth in one year
    
cout <<"How many years in the future would you like to know the population? ";
cin >> years_future;


//calculate result
rate_of_growth_year = 60*60*24*365/12;
population = population + rate_of_growth_year * years_future;
 //show result
 
 cout <<"Final population is " << population;
}