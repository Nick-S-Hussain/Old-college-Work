/***************************************************************
* Name: Nicholas
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/9/20
* File Name: Lab8-NHussain.cpp
*****************************************************************
* ID: Lab 8 
* Purpose: Write a C++ program that allocates an array
           in dynamic memory that holds a user-provided
           number of highway speeds.
*****************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;

//function prototypes
void mainMenu();
void outSpeed(int*,int);
void sortOut(int*, int);
void selectionSort(int*, int);
void swap(int *a, int *b);

int main()
{
    mainMenu();
    int arraySize;
    cout << "\nPlease enter number of speeds to store: ";
    cin >> arraySize;
    cout << "\n";
    /*creation of array in dynamic memory with the size being a varible of entered value*/
    int *speedArray= new int[arraySize];
    /*only used 1 function so it makes main look clean*/
    outSpeed(speedArray,arraySize);
    return 0;
}

void mainMenu()
{
    cout << "**********************************************************\n";
    cout << "*             NJ Motor Division Commission               *\n";
    cout << "*                                                        *\n";
    cout << "*              SPEED REGISTRATION SYSTEM                 *\n";
    cout << "**********************************************************\n";
}

void outSpeed(int *speeds,int size)
{

    int sel;
    /*Test to see if value entered is negative or not*/
    for (int i = 0;i < size;i++) {
        cout << "Speed " << (i + 1) << ": ";
        cin >> sel;
        if (sel > 0) {
            *(speeds + i) = sel;
        }
        else
        {
            /*This will make sure that the value is going to be stored in the same spot at error*/
            cout << "Re-enter a non negative speed: ";
            cin >> sel;
            *(speeds + i) = sel;
        }
        
   }
    selectionSort(speeds, size);
}

void selectionSort(int *array, int size)
{
    int minIndex, minValue;
    /*With the sorting method the array[num] has to be changed to *(array+num) for every instance*/
    for (int start = 0; start < (size - 1);start++)
    {
        minIndex = start;
        minValue = *(array + start);
        for (int index = start + 1;index < size;index++)
        {
            /*I kept having array +start by accident*/
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
        }
        swap(*(array + minIndex), *(array + start));
    }
    /*Originally had in outSpeed funtion but messed up parts of sorting and put it in here*/
    sortOut(array, size);
}

void swap(int *a, int *b) 
{
    /*copied from lecture slides not lab pdf*/
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortOut(int* array, int size)
{
    /*Have a float for sum because int/int = int so it wasnt gonna be casted right*/
    float sum=0;
    cout << "\nSorted speeds are: " << endl;
    /*adds the value before outputting value of array incase of error*/
    for (int i = 0;i < size;i++)
    {
        sum += *(array + i);
        cout << *(array + i) << " ";
    }
    float average = sum / size;
    cout << "\n\nAverage of " << size << " speeds is: " << average;
}
