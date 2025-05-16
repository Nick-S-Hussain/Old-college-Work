/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/21/20
* File Name: <Homework3-2NHussain.cpp>
*****************************************************************
* ID: Homework #3
* Purpose:
	Problem 2: Write a program that asks the user to enter a year. 
	            The program should then display the number
                of days in February that year.
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;


int main()
{
    int year;
    cout<<"Enter the year to see if it is a leap year: ";
    cin>>year;
    if(year%100 ==0 && year%400==0){
        cout<<"February has 29 days";
    }
    else if(year%100!=0 && year%4==0){
        cout<<"February has 29 days";
    }
    else{
        cout<<"February has 28 days";
    }
    return 0;
}

