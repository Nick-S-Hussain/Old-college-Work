/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 12/7/20
* File Name: Lab11-NHussain.cpp
*****************************************************************
* ID: Lab 11
* Purpose: Practice the uses of fstream functions from chapter 13
*****************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

int main()
{
    string word;
    int total;int lastOff = 10;int count = 0;
    int x = 2 - 2 * 4 + 2;
    if(x==0||x==-4)
        cout << x<<endl;
    /*Creating a writing file that I can enter the line number in*/
    ofstream writeFile;
    writeFile.open("Test.txt");
    /*the \n for line 1 was needed becuase the max stream looked for \n
    if I didn't include it the first line was counted in the 10 last values*/
    writeFile << "\nLine number 1,\nLine number 2,\nLine number 3,\nLine number 4,\nLine number 5,"
        << "\nLine number 6,\nLine number 7,\nLine number 8,\nLine number 9,\nLine number 10,"
        << "\nLine number 11,\nLine number 12,\nLine number 13,\nLine number 14,\nLine number 15";
    writeFile.close();

    /*This if statement is just counting the variables in the file
    The reason it's not skipping is because if it was a user entered file with 
    unknown length it would still work without the writeFile*/
    ifstream readFile("Test.txt");
    /*eof() is always false until end of file is reached*/
    if (!readFile.eof()) {
        /*if readFile>>word was used instead of the getline
          the spacing would have impact so every word would be added to count and not the lines only*/
        while (getline(readFile, word)) {
            count++;
        }
    }
    readFile.close();
    /*The count-1 is because of the blank line used to get the max stream to work*/
    cout << "The number of records in file are: " << count-1 << endl;

    total = count - lastOff;

    const auto MAX_STREAM_CHARS = numeric_limits<streamsize>::max();
    ifstream iFile("Test.txt");
    int skip = 0;
    cout << "\nThe last 10 records in file are " << endl;

    if (!iFile.eof()) 
    {
       while (getline(iFile, word))
       {
           /*using nested while because it would be easier to use for a different cut off point.
           I also had the total -1 because I was stating the skip at 0 so 0-5 is 6 lines skipped.*/
         while (skip < total-1) 
         {
            iFile.ignore(MAX_STREAM_CHARS, '\n');
            skip++;
         }
            cout << word << endl;
        }
    }
    iFile.close();

    return 0;
}

