/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 10/12/20
* File Name: <Lsb5-1-NHussain.cpp>
*****************************************************************
* ID: Lab #5
* Purpose: Problem #1
		Write a program that inputs the airplane make,
		model, and the number of gallons of fuel used by 
		each airplane.
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <stdlib.h>

using namespace std;
float calcMPG(int, float);
float bestMPG(float, float, float);


float calcMPG(int dis, float gal) {
	float mpg = dis/gal;
	return mpg;
}
/*I created this so I didnt have to have these if statments in the main*/
float bestMPG(float m1, float m2, float m3) {
	if (m1 >= m2) {
		if (m1 >= m3) {
			return m1;
		}
		//m1<m3
		else {
			return m3;
		}
	}
	else if (m2 > m1) {
		if (m2 >= m3) {
			return m2;
		}
		//m2<m3
		else {
			return m3;
		}
	}
}
int main()
{
	system("cls");
	//route is constant because each plane travels 1k miles
	const int route = 1000;
	/*I forgot how to ignore spaces so make and model gets different lines*/
	string name1, name2, name3, model1,model2,model3;
	float gallon1, gallon2, gallon3;
	cout << "Enter the make of plane 1: ";
	cin >> name1;
	cout << "Enter the model of plane 1: ";
	cin >> model1;
	cout << "Enter the gallons used on the trip: ";
	cin >> gallon1;
	cout << "Enter the make and model of plane 2: ";
	cin >> name2;
	cout << "Enter the model of plane 2: ";
	cin >> model2;
	cout << "Enter the gallons used on the trip: ";
	cin >> gallon2;
	cout << "Enter the make and model of plane 3: ";
	cin >> name3;
	cout << "Enter the model of plane 3: ";
	cin >> model3;
	cout << "Enter the gallons used on the trip: ";
	cin >> gallon3;
	//forgot to add before so have it after everything
	float mpg1, mpg2, mpg3;
	mpg1 = calcMPG(route, gallon1);
	mpg2 = calcMPG(route, gallon2);
	mpg3 = calcMPG(route, gallon3);
	//finds the best value out of the 3
	float best = bestMPG(mpg1, mpg2, mpg3);
	/*Probably could have created another function to do this but decided not to*/
	if (best == mpg1) {
		/*Used setpre so it wasn;t long decimals*/
		cout << showpoint << fixed << setprecision(2) << name1 << " " << model1 << " gets " << mpg1 << " miles per gallon";
	}
	else if (best == mpg2) {
		cout << showpoint << fixed << setprecision(2) << name2 << " " << model2 << " gets " << mpg2 << " miles per gallon";
	}
	else {
		cout << showpoint << fixed << setprecision(2) << name3 << " " << model3 << " gets " << mpg3 << " miles per gallon";
	}
	/* i had an error doing this
	switch (best)
	{
	case mpg1:
		cout  << showpoint << fixed << setprecision(2) << name1 << " " << model1 << " gets " << mpg1 << " miles per gallon";
		break;
	case mpg2:
		cout  << showpoint << fixed << setprecision(2) << name2 << " " << model2 << " gets " <<mpg2  << " miles per gallon";
		break;
	case mpg3:
		cout << showpoint << fixed << setprecision(2) << name3 << " " << model3 << " gets " << mpg3 << " miles per gallon";
		break;
	default:
		cout << "Error in the best calculation";

	}
	 With this I misread question and thought it needed all 3 mpg displayed not the best one
	cout << "\n"<<showpoint << fixed << setprecision(2)<< name1 <<" "<<model1<< " gets " << calcMPG(route, gallon1) << " miles per gallon";
	cout << "\n"<<showpoint << fixed << setprecision(2)<< name2 <<" "<<model2<< " gets " << calcMPG(route, gallon2) << " miles per gallon";
	cout << "\n"<<showpoint << fixed << setprecision(2)<< name3 <<" "<<model3<<" gets " << calcMPG(route, gallon3) << " miles per gallon";*/
	return 0;
}
