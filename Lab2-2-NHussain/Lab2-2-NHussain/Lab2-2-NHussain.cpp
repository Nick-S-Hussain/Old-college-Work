/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/21/20
* File Name: <Lab2-2-NHussain.cpp>
*****************************************************************
* ID: Lab2
* Purpose:
	Problem 2: Write a program to generate the annual property tax of a senior homeowner
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	const float rebate = 5000.00;// since this is a fixed value I decided to make it a constant 
	float taxRate, value, propertyTax, payTax;
	cout << "Enter your homes assessed value: $";
	cin >> value;
	cout << "Enter your tax rate for each $100 of assessed value: $";
	cin >> taxRate;
	payTax = value - rebate;
	propertyTax = (payTax / 100) * taxRate;
	float quarterly = propertyTax / 4;//made this in the bottom so I didnt have a long cout statement
	cout << showpoint << fixed << setprecision(2) << "The quarterly tax bill is $" << quarterly << endl;
	cout<< showpoint << fixed << setprecision(2) << "The annual tax bill is $" << propertyTax << endl;

	return 0;
}

