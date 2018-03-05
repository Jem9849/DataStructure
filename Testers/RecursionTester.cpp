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
		return 1;
	}
	else
	{
		return fib (number - 1) + fib (number -2);
	}
}

string RecursionTester :: mystery(string word)
{
	return "";
}

void RecursionTester :: testRecursionNumbers()
{

}

void RecursionTester :: testRecursionString()
{

}
