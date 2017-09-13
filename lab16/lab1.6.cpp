//Created by : Pranita Shrestha
//Created on : 9/13/2017

// This lab is about creating a struct for holding a stock portfolio.

#include <iostream>
using namespace std;

struct stock
{
	char company [50];
	int shares;
	float price;
	float value;
	
};

int main()
{

stock SizeOfArray;
float portfolio;

	cout<<"Enter the Company Name: ";
	cin>>SizeOfArray.company;
	cout<<"Enter the share price: ";
	cin>>SizeOfArray.price;
	cout<<"Enter the amount of shares: ";
	cin>>SizeOfArray.shares;
	cout<<endl;
	
	SizeOfArray.value = SizeOfArray.shares * SizeOfArray.price;
	cout << "The total value is" << SizeOfArray.value << endl; 
	
	
	
stock stocktwo;
cout<<"Enter the Company Name: ";
	cin>>stocktwo.company;
	cout<<"Enter the share price: ";
	cin>>stocktwo.price;
	cout<<"Enter the amount of shares: ";
	cin>>stocktwo.shares;
	cout<<endl;
	
	stocktwo.value = stocktwo.shares * stocktwo.price;
	cout << "The total value is" << stocktwo.value << endl;
	
	
stock stockthree;
	cout<<"Enter the Company Name: ";
	cin>>stockthree.company;
	cout<<"Enter the share price: ";
	cin>>stockthree.price;
	cout<<"Enter the amount of shares: ";
	cin>>stockthree.shares;
	cout<<endl;
	
	stockthree.value = stockthree.shares * stockthree.price;
	 cout << "The total value is" << stockthree.value << endl;
	
stock stockfour;	
	cout<<"Enter the Company Name: ";
	cin>>stockfour.company;
	cout<<"Enter the share price: ";
	cin>>stockfour.price;
	cout<<"Enter the amount of shares: ";
	cin>>stockfour.shares;
	cout<<endl;

	
	



stockfour.value = stockfour.shares * stockfour.price;
 cout << "The total value is" << stockfour.value << endl;
 
 portfolio = SizeOfArray.value + stocktwo.value + stockthree.value + stockfour.value;
  cout << "The total portfolio is" << portfolio << endl;
}

