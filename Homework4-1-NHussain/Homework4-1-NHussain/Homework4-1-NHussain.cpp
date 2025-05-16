/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 10/1/20
* File Name: <Homework4-1NHussain.cpp>
*****************************************************************
* ID: Homework #4
* Purpose:
	Problem 1: Write a program that uses a loop to display the characters for each ASCII code 32 through 127.
			   Display 16 characters on each line with one space between characters.
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
	int linecount = 0;
	int value = 32;
	while (value <= 127) {
		if (linecount != 15) {
			cout << char(value) << " ";
			linecount++;
			value++;
		}
		else {
			//I have a cout statement here so that I could not be skipping the 
			//variable at the 15
			cout << char(value) << "\n";
			linecount = 0;
			value++;
		}
	}
	//did originally in for loops and it worked but you wanted to use while loops
	/*int linecount=0;//count for items per line
	cout << "The characters for ascii code 32-127 is : \n";
	//started at 32 because the question asked for it and had <= so it goes to 127
	//could have used i<128
	for (int i = 32;i <= 127;i++) {
		//the if/else is to keep the 16 items in each line
		if (linecount != 15) {
			cout << char(i) << " ";
			linecount++;
		}
		else {
			//I have a cout statement here so that I could not be skipping the 
			//variable at the 15
			cout << char(i)<<"\n";
			linecount = 0;
		}
	}*/
	return 0;
}

