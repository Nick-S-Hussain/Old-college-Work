/***************************************************************
* Name: Nicholas
* Course: Computer Science & Programming
* Class: CS04103 Section: 2
* Assignment Date: 11/16/20
* File Name: Lab9-NHussain.cpp
*****************************************************************
* ID: Lab 9
* Purpose: Complete the code below to produce the output for
*		   the tic-tac-toe game
*****************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void display(char[3][3]);
void move(char[3][3], char);
bool checkEnd();
/*Added 2 more functions to fill the array with space char
and to check to see if there is a space or value in the position*/
char checkValue(char[3][3],int,int);
void fillBoard(char[3][3]);

int main()
{
	char board[3][3];
	//only added this because checkValue wasnt working
	fillBoard(board);
	display(board);
	do
	{
		move(board,'o');
		if (checkEnd())
			break;
		move(board,'x');

	} while (!checkEnd());
	return 0;
}

/*basic array to fill the 2x2 with ' '*/
void fillBoard(char board[3][3])
{
	for (int r = 0; r < 3;r++)
	{
		for (int c = 0;c < 3;c++)
		{
			board[r][c] = ' ';
		}
	}
}

void display(char board[3][3])
{
	system("CLS");
	cout << "\**********************************************************************"<<endl;
	cout << "*\tWelcome to Tic-Tac-Toe\t*"<<endl;
	cout << "**********************************************************************" << endl;
	cout << "\n\nRows\\Columns\t0\t1\t2\n" << endl;
	for (int  r= 0;r < 3;r++)
	{
		cout << r<<"\t\t";
		for (int c = 0; c < 3;c++)
		{
			/*This is checking and returning value stored in that spot in the array*/
			cout <<"   " <<checkValue(board,r,c)<<"|\t";
		}
		cout << "\n\t       ------------------------"<<endl;
	}
}

void move(char board[3][3],char letter)
{
	
	int r, c;
	cout << "\n\nTime to play for: " << letter << endl;
	cout << "What row do you want to play: ";
	cin >> r;
	cout << "What column do you want to play: ";
	cin >> c;
	board[r][c] = letter;
	/*Clearing and redisplay the board after each move
	so players know what and where everything on the board is*/
	display(board);
}

bool checkEnd()
{
	char play;
	cout << "\nDo you want to continue (Y/N): ";
	cin >> play;
	/*Its returning false if the player selects a y/Y because if its true
	the looping ends based off the main given to us*/
	if (play == 'y' || play == 'Y')
	{
		return false;
	}
	else
	{
		return true;
	}
}

char checkValue(char board[3][3],int r,int c)
{
	/*Had to use lowercase because was getting an error with X
	it works with lowercase so I'm keeping lowercase*/
	if (board[r][c] == 'x' || board[r][c]=='o')
	{
		return board[r][c];
	}
	else
	{
		return ' ';
	}
}