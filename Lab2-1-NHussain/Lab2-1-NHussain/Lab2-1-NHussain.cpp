/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/21/20
* File Name: <Lab2-1-NHussain.ccp>
*****************************************************************
* ID: Lab 2 
* Purpose:
	Problem 1: Seating profit for a stadium
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;



int main()
{
	//testing the decimals ingore
	/*oat total = 122.2;
	cout << showpoint << fixed << setprecision(2) << "the total is $" << total;*/

	float seatA = 15, seatB = 12, seatC = 9, numA, numB ,numC;
	cout << "Enter how many seats for section A, B, and C were sold ";
	cin >> numA >> numB >> numC;
	float totA, totB, totC, total;
	totA = seatA * numA;
	totB = seatB * numB;
	totC = seatC * numC;
	//I could have put this all on 1 line in () but I thought you wanted each class total
	total = totA + totB + totC;
	
	cout << showpoint << fixed << setprecision(2) << "The total amount of income generated is $" << total;

}

