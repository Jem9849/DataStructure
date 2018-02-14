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


#endif /* TESTERS_LINKEDLISTTESTER_HPP_ */
