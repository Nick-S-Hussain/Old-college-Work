//*****************************************************************************
// Nicholas Hussain                         CS04225-section 2
// 1/27/21
// Chapter 1 excersise 1
//*****************************************************************************
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
#include <cstdlib>     
#include <cassert>
using namespace std;
void partOne();
void partTwo();
int main()
{
    partOne();
    partTwo();
    return 0;
}

void partOne() {
    //all prime to 100

}
void partTwo() {
    //0-100 guessing game
    int number = rand() % 100;
    int guess;
    do {
        cout << "Guess a number between 0 and 100: ";
        cin >> guess;
        if (guess != number) {
            if (guess > number) {
                cout << "Number is too big\nTry Again" << endl;
            }
            else {
                cout << "Number is too small\nTry Again" << endl;
            }
        }
        else {
            cout << "You got the write answer!";
        }
    } while (guess != number);
    
}