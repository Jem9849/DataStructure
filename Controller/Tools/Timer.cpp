/*
 * Timer.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#include "Timer.hpp"

using namespace std;

Timer :: Timer()
{
	executionTime = 0;
}

void Timer :: resetTimer()
{
	executionTime = 0;
}

void Timer :: startTimer()
{
	executionTime = clock();
}

void Timer :: stopTimer()
{
	assert(executionTime != 0);
	executionTime = clock() - executionTime;
}

void Timer :: displayInformation()
{
	cout << "Execution time: " << executionTime << "." << endl;
	cout << "In normal time: " << double (executionTime)/CLOCKS_PER_SEC << " seconds." << endl;
}

long Timer :: getTimeInMicroseconds()
{
	return executionTime;
}
