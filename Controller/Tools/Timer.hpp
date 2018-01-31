/*
 * Timer.hpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#ifndef CONTROLLER_TOOLS_TIMER_HPP_
#define CONTROLLER_TOOLS_TIMER_HPP_

#include <time.h>
#include <assert.h>
#include <iostream>

class Timer
{
private:
	clock_t executionTime;
public:
	Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayInformation();
	long getTimeInMicroseconds();
};




#endif /* CONTROLLER_TOOLS_TIMER_HPP_ */
