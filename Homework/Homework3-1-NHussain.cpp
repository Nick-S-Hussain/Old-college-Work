/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 09/21/20
* File Name: <Homework3-1NHussain.cpp>
*****************************************************************
* ID: Homework #3
* Purpose:
	Problem 1: Write a program that asks for the length and width of two rectangles. 
	           The program should then tell the user which rectangle
               has the greater area or if the areas are the same. 
*****************************************************************/

#include <iostream>
#include <string.h>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
    float length1,length2,width1,width2;
    cout<<"Enter length and width for first rectangle: ";
    cin>>length1>>width1;
    cout<<"Enter length and width for second rectangle: ";
    cin>>length2>>width2;
    if((length2*width2)>(length1*width1)){
        cout<<"The bigger area is " << length2<< " x " <<width2;
    }
    else if((length2*width2)<(length1*width1)){
        cout<<"The bigger area is " << length1 << " x " <<width1;
    }
    else
    {
        cout<<"They have the same area";
    }

    return 0;
}

