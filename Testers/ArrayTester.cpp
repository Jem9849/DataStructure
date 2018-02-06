/*
 * ArrayTester.cpp
 *
 *  Created on: Feb 6, 2018
 *      Author: Jeremy
 */

#include "ArrayTester.hpp"


void ArrayTester :: testArrayUse()
{
	Array<int> firstArray(10);

	for (int index = 0; index < 10; index++)
	{
		firstArray.setAtIndex(index, index);
	}

	for (int index = 0; index < firstArray.getSize(); index++)
	{
		cout << firstArray[index] << endl;
	}

	Array<int> secondArray(400);

	cout << secondArray.getSize() << endl;
	cout << firstArray.getSize() << endl;

	Array<int> thirdArray(secondArray);

	cout << thirdArray.getSize() << endl;
	firstArray = thirdArray;
	cout << firstArray[4] << endl;

	thirdArray[5] = 123;
	cout << thirdArray[5] << endl;
	secondArray.setAtIndex(4, 5);
	cout << secondArray.getFromIndex(4);
}

void ArrayTester :: testAdvancedArray()
{
	vector<CrimeData> test = FileController :: readCrimeDataToVector("C://Users//Jeremy//Documents//Eclipse Coding//DataStructure//Data//crime.csv");
	int arraySize = test.size();

	Array<CrimeData> data(arraySize);
	for (int index = 0; index < arraySize; index++)
	{
		data[index] = test[index];
	}

	Timer vectorTimer;
	Timer arrayTimer;

	vectorTimer.startTimer();
	cout << test[3425] << endl;
	vectorTimer.stopTimer();
	vectorTimer.displayInformation();

	arrayTimer.startTimer();
	cout << data[3425] << endl;
	arrayTimer.stopTimer();
	arrayTimer.displayInformation();
}



