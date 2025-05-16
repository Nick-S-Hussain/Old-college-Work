/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/28/20
* File Name: <Lab33-1NHussain.cpp>
*****************************************************************
* ID: Lab #3
* Purpose:
	Problem 2: Write a program that displays a menu allowing the user to select air, water, or steel, and then
			   has the user enter the number of feet a sound wave will travel in the selected medium.
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	const float air = 1100, water = 4900, steel = 16400;
	//this is a simple menu for the table given 
	//cout << "Enter one of the following:" << endl;- changed this cause asked thed question later
	cout << "Medium \t Speed(feet per sec)"<<endl;
	cout << "1.) Air \t 1,100"<<endl;
	cout << "2.) Water \t 4,900" << endl;
	// using the \n so that it leaves a space for input lines
	cout << "3.) Steel \t 16,400\n" << endl;

	cout << "Select 1-3 for the medium and enter the feet traveled "<<endl;
	int medium;
	float travel,time;
	cin >> medium >> travel;

	//I'm trying switches here, If I get an error I'm gonna use if's
	switch (medium)
	{	
		//I figured out I only needed to use the int number I had medium == 1.
		case 1: time = travel / air;
			cout << showpoint << fixed << setprecision(4) << "The time taken was " << time << " seconds";
			//cout << setprecision(4) << "The time taken was " << time << " seconds"; - tested it and it didnt keep the decimals
			break;
		case 2: time = travel / water;
			cout << showpoint << fixed << setprecision(4) << "The time taken was " << time << " seconds";
			break;
		case 3: time = travel / steel;
			cout << showpoint << fixed << setprecision(4) << "The time taken was " << time << " seconds";
			break;
		default: cout << "Not a valid medium";
	}
	return 0;
}