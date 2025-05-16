// Lab 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/14/20
* File Name: <Lab01-1NHussain.cpp>
*****************************************************************
* ID: Lab #1-part 1 & part 2
* Purpose:
	Part 1: Calculate gross pay for each pay period if he was paid
			24(twice a month) and 26(biweekly) times per year

*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Part 1- Pay Period Gross Pay
	double annual = 39000, two_month, biweekly;
	two_month = annual / 24;
	biweekly = annual / 26;
	cout << "The gross pay for each pay period of twice of month pay is $ " << two_month << endl;
	cout << "The gross pay for each pay period of biweekly pay is $ " << biweekly << endl;

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
