/*
 * Controller.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */


#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
	Timer codeTimer;
	codeTimer.startTimer();
	cout << "Look" << endl;
	codeTimer.stopTimer();
	codeTimer.displayInformation();
	codeTimer.resetTimer();
	codeTimer.startTimer();
	for (int index = 0; index < 500; index++)
	{
		cout << "Index is " << index << "\n";
	}
	codeTimer.stopTimer();
	codeTimer.displayInformation();
}



