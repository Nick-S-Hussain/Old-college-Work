// Lab1-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/14/20
* File Name: <Lab01-2-NHussain.cpp>
*****************************************************************
* ID: Lab #1-part 2
* Purpose:
	1.)Find customers who purchase one or more energy drinks per week
	2.) Find customers who purchase citrus flavor energt drinks
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int one_more, citrus;//I'm using int's because you cant have *.somenthing people
	double one_per = 0.15, citrus_per = 0.52, survey = 16500;
	one_more = survey * one_per;
	citrus = survey * citrus_per;
	cout << "The number of customers who bought one or more energy drinks per week is " << one_more << endl;
	cout << "The number of customers who bought citrus flavored energy drinks is " << citrus << endl;
	


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
