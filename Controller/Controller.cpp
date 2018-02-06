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
	//findMaxAndMinx();
	ArrayTester myTest;
	myTest.testArrayUse();
	myTest.testAdvancedArray();
	testArray();

//	Timer codeTimer;
//	codeTimer.startTimer();
//	cout << "Look" << endl;
//	codeTimer.stopTimer();
//	codeTimer.displayInformation();
//	codeTimer.resetTimer();
//	codeTimer.startTimer();
//	for (int index = 0; index < 500; index++)
//	{
//		cout << "Index is " << index << "\n";
//	}
//	codeTimer.stopTimer();
//	codeTimer.displayInformation();

//	vector<CrimeData> myData = FileController :: readCrimeDataToVector("C://Users//Jeremy//Documents//Eclipse Coding//DataStructure//Data//crime.csv");
//
//	for (int index = 200; index <= 215; index += 1)
//	{
//		cout << index << " is " << myData[index] << endl;
//	}
//
//	codeTimer.stopTimer();
//	codeTimer.displayInformation();
}

//void Controller :: findMaxAndMin()
//{
//
//}

void Controller :: testArray()
{
	Array<int> JemArray(45);

	cout << JemArray.getSize() << endl;

	JemArray[0] = 123;
	JemArray.setAtIndex(0, 321);

	cout << JemArray[0] << endl;
}



