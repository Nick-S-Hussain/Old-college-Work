/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 10/26/20
* File Name: Lab6-NHussain.cpp
*****************************************************************
* ID: Lab 6
* Purpose: Practice concepts for chapter 7 & 8.
*****************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include "mainMenu.h"
using namespace std;

//Function Prototypes
void enterInfo();
void adjustInfo();
void displayInfo();

/*don't have student id stored cause using for loops to hold value*/
struct Student
{
	string name;
	int classID;
	float grade;
};
const int CSIZE = 3;
Student rClass[CSIZE];

int main()
{
	int select;
	mainMenu menu;
	/*I have the !=4 and >=1 because if someone enters a 0 or less it will display invalid selection and will rerun loop*/
	do {
		/*I originally had menu return an int and I got from there but I got that compiler error so I was trying different things*/
		menu.menuDisplay();
		cin >> select;

		switch (select) {
		case 1:
			enterInfo();
			break;
		case 2:
			adjustInfo();
			break;
		case 3:
			displayInfo();
			break;
		default:
			if (select != 4) {
				cout << "INVALID SELECTION----Enter a number 1-4\n";
			}
		}
	} while (select != 4 && select >= 1);
	
	cout << "Thank you for using the grades recoreding system !!!";
	return 0;
}

void enterInfo() {
	/*for loops are at 0 cause array start at 0*/
	for (int i = 0;i < CSIZE;i++)
	{
		/*for student id i+1 becuase the id number starts at 1*/
		cout << "Student ID: " << i+1 << endl;
		cout << "Student Full Name: ";
		/*Had to use the cin.ignore() so the get line could read the string*/
		cin.ignore();
		getline(cin, rClass[i].name);
		cout << "Class ID: ";
		cin >> rClass[i].classID;
		cout << "Student Grade: ";
		cin >> rClass[i].grade;
		cout << "\n\n";
	}
}

void adjustInfo() {
	cout << "********************************************************\n";
	cout << "*\tGrades Adjustment Module\t*\n";
	cout << "********************************************************\n" << endl;

	int editChoice;
	cout << "Please Enter a Student ID: ";
	cin >> editChoice;
	//arrays are 1 less then id #
	editChoice--;
	cout << "\nPlease enter the new grade: ";
	cin >> rClass[editChoice].grade;
	cout << "\n\n";
}

void displayInfo() {
	cout << "***********************************************************\n";
	cout << "*\tReport of Students Grades\t*\n";
	cout << "***********************************************************\n" << endl;
	
	for (int i = 0;i < CSIZE;i++) {
		cout << "Student ID: " << i+1 << endl;
		cout << "Student Name" << rClass[i].name << endl;
		cout << "Class ID: " << rClass[i].classID << endl;
		cout << "Grade: " << rClass[i].grade << endl;
		cout << "\n\n";
	}
}


