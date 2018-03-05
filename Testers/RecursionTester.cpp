/*
 * RecursionTester.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: Jeremy
 */

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
	if (number == 0 || number == 1)
	{
		cout << "Reached a base case" << endl;
		return 1;
	}
	else
	{
		cout << "Reached a recursive case with: " << number -1 << " and " << number - 2 << endl;
		return fib (number - 1) + fib (number -2);
	}
}

string RecursionTester :: mystery(string word)
{
	return "";
}

void RecursionTester :: testRecursionNumbers()
{
	Timer recursionTimer;
	cout << "Testing fibonacci with 10" << endl;
	recursionTimer.startTimer();
	cout << fib(10) << endl;
	recursionTimer.stopTimer();
	recursionTimer.displayInformation();
}

void RecursionTester :: testRecursionString()
{

}
