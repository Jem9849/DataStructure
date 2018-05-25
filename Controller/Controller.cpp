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
//	ArrayTester myTest;
//	myTest.testArrayUse();
//	myTest.testAdvancedArray();
//	testArray();
//	testLinkedList();
//	LinkedListTester myTester;
//	myTester.testListWithData();
//	TestingStacksAndQueues myOtherTester;
//	myOtherTester.stackVersusList();
//	myOtherTester.stackVersusQueue();
//	myOtherTester.queueVersusList();
//	RecursionTester test;
//	test.testRecursionNumbers();
//	test.testRecursionString();
//	SortingTester test;
//	test.testSorts();
	GraphTester test;
	test.testGraphs();
	//BinaryTreeTester test;
	//test.doTreeStuff();

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

//void Controller :: testArray()
//{
//	Array<int> JemArray(45);
//
//	cout << JemArray.getSize() << endl;
//
//	JemArray[0] = 123;
//	JemArray.setAtIndex(0, 321);
//
//	cout << JemArray[0] << endl;
//}

//void Controller :: testLinkedList()
//{
//	LinkedList<int> numbers;
//	LinkedList<double> realNumbers;
//	LinkedList<string> names;
//	//LinkedList<CrimeData> crime;
//
//	//crime = FileController :: readDataToList("C://Users//Jeremy//Documents//Eclipse Coding//DataStructure//Data//crime.csv");
//
//	numbers.add(23);
//	numbers.add(64);
//	numbers.add(75);
//
//	realNumbers.add(23.5);
//	realNumbers.add(13.63);
//	realNumbers.add(3.144325235235);
//
//	names.add("Jeremy");
//	names.add("Whoviey");
//	names.add("Sister Rachel");
//	names.addAtIndex(1, "Rachid");
//
//
//	cout << numbers.getFront() -> getData() << ", is at the front." << endl;
//	cout << numbers.getEnd() -> getData() << ", is at the end." << endl;
//
//	cout << realNumbers.getFront() -> getData() << ", is at the front." << endl;
//	cout << realNumbers.getEnd() -> getData() << ", is at the end." << endl;
//
//	realNumbers.remove(0);
//
//	cout << realNumbers.getFront() -> getData() << ", is at the end." << endl;
//
//	cout << names.getFront() -> getData() << ", is at the front." << endl;
//	cout << names.getEnd() -> getData() << ", is at the end." << endl;
//
//	cout << names.getFromIndex(2) << ", is at index 2." << endl;
//
//	//cout << crime.getFront() -> getData() << ", is at the front." << endl;
//	//cout << crime.getEnd() -> getData() << ", is at the end." << endl;
//}


