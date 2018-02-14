/*
 * LinkedListTester.hpp
 *
 *  Created on: Feb 14, 2018
 *      Author: Jeremy
 */

#ifndef TESTERS_LINKEDLISTTESTER_HPP_
#define TESTERS_LINKEDLISTTESTER_HPP_

#include "../Model/Structures/LinkedList.hpp"
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"
#include "../Data/CrimeData.hpp"
#include <iostream>

class LinkedListTester
{
public:
	void testListBasics();
	void testListWithData();
};

void LinkedListTester :: testListBasics()
{
	LinkedList<int> numbers;
	numbers.add(9);
	cout << numbers.getFront() -> getData() << " Is at the front of the list and should"
			"be 9" << endl;
	cout << numbers.getEnd() -> getData() << " Is at the end of the list and should be 9"
			<< endl;

	numbers.add(0);
	cout << numbers.getFront() -> getData() << " Is at the front of list and should be 9" << endl;
	cout << numbers.getEnd() -> getData() << " Is at the end of the list and should be 0" << endl;

	numbers.addAtIndex(1,2);
	numbers.add(324);

	cout << numbers.getFront() -> getData() << " Is at the front of the list and should be 9" << endl;
	cout << numbers.getEnd() -> getData() << " Is at the end of the list and should be 324" << endl;

	cout << "This loop should print 4 lines" << endl;
	for (int index = 0; index < numbers.getSize(); index++)
	{
		cout << numbers.getFromIndex(index) << endl;
	}

	numbers.remove(0);
	numbers.add(32567);
	numbers.addAtIndex(0, 2312);

	cout << numbers.getFront() -> getData() << " Is at the front of the list and should be 2312" << endl;
	cout << numbers.getEnd() -> getData() << " Is at the end of the list and should be 32567" << endl;
}


#endif /* TESTERS_LINKEDLISTTESTER_HPP_ */
