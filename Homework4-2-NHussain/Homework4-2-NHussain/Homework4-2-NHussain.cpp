/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 10/1/20
* File Name: <Homework4-2NHussain.cpp>
*****************************************************************
* ID: Homework #4
* Purpose:
	Problem 2: Write a Program to calculate the distance traveled by a vehicle
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
	//using floats so it can accept decimal for hours and get distance in decimals
	float time, distance, speed;
	int count=1;
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	cout << "How many hours has it traveled? ";
	cin >> time;
	cout << "Hour(s) \t Miles Traveled\n";
	cout << "-------------------------------\n";
	while (count <= time) {
		distance = speed * count;
		cout << count << " \t \t " << distance << endl;
		count++;
	}

	//You wanted the answers using while loops but tested and works with for loops
	//starting at 1 because 0 hour is 0 miles traveled for any speed.
	/*
	for (int i = 1;i <= time;i++) {
		//reinitalizing the distance to hold the new values for each i;
		distance = speed * i;
		// the 2 \t is for formatting to make the output look nice
		cout << i << " \t \t  " << distance<<endl;
	}*/
	return 0;
}

