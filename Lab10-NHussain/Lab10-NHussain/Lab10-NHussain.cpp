/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/23/20
* File Name: Lab10-NHussain.cpp
*****************************************************************
* ID: Lab 10
* Purpose: Practice C-String and String classes from chapter 12
*****************************************************************/
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <cctype>
using namespace std;

int main()
{
    /*fName-First Name   mName-middle name  lName-last name  
      hName-Husband name   newName-married name
      The reason its set to 80 is becuase it is an random value that I knew
      was going to be long enough to not cause any overflow of the char
      and it wouldnt let me have the cin set its value
      */

    char fName[80], mName[80], lName[80], hName[80], newName[80];

    cout << "*****************************************" << endl;
    cout << "Welcome to the Wedding Information System" << endl;
    cout << "*****************************************" << endl;

    cout << "\nPlease Enter your first name: ";
    cin>>fName;
    /*Tried to use cin.get and .ignore but did not work because its char array
        and not strings*/
    cout << "Please Enter your middle name: ";
    cin>>mName;
    cout << "Please Enter your last name: ";
    cin>>lName;
    /*the last name is kinda useless becuase it doesnt even get used
        with it not being stated in problem to combine it with old stuff
        so it a waste of memory allocation
    */
    cout << "Please enter your husband's last name: ";
    cin >> hName;

    /*visual studio would not let me use cat or cpy with out the _s*/
    strcat_s(fName," ");
    strcat_s(fName, mName);
    /*Used strcat because new name would  uses first and middle 
        so its simplier to cat these to form 1 char array*/
    strcpy_s(newName, hName);
    /*copying the husbands name to new name and adding the comma to it.
    reason for copy is because the last name of husband shouldnt 
    be over written or catted with new name
    */
    strcat_s(newName, ", ");

    strcat_s(newName, fName);
    /*catting the new name becuase the whole name should be one long name
    now with all the different elements*/

    cout << "\n\nYour married name is: " << newName << endl;
    return 0;
}
