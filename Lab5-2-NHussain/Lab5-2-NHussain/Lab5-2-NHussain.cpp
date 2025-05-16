/***************************************************************
* Name: Nicholas Hussain
* Course: Computer Science & Programming
* Class: CS04103 Section: 1
* Assignment Date: 10/12/20
* File Name: <Lsb5-2-NHussain.cpp>
*****************************************************************
* ID: Lab #5
* Purpose: Problem #1
		Write a function that accepts as arguments the number of shares, 
		the purchase price per share,
		the purchase commission paid,
		the sale price per share, and the sale commission paid. 
		The function should return the profit (or loss) 
		from the sale of stock.
*****************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;
float profitCalc(float, float, float, float, float);

/*I kept the same names for varibles so I didn't confuse myself*/
float profitCalc(float nS, float sP, float sC, float pP, float pC)
{
	float result;
	result = (((nS * sP) - sC) - ((nS * pP) + pC));
	return result;
}
int main()
{
	/*ns & nS is the number of shares,
	  sp & sP is the sale price per share,
	  sc & sC is the sale commission paid,
	  pp & pP is the purchase price per share,
	  pc & pC is the purchase commission paid.*/
	float ns, sp, sc, pp, pc,profit;
	cout << "Enter number of shares: ";
	cin >> ns;
	cout << "Enter sale price per share: ";
	cin >> sp;
	cout << "Enter the sale commission paid: ";
	cin >> sc;
	cout << "Enter the purchase price per share: ";
	cin >> pp;
	cout << "Enter the purchase commission paid: ";
	cin >> pc;
	profit = profitCalc(ns, sp, sc, pp, pc);
	//setprecision is used because of dollar amount
	cout << showpoint << fixed << setprecision(2) << "The profit from the sale of the stock is " << profit <<" dollars"<< endl;
	return 0;
}