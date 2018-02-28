/*
 * TestingStacksAndQueues.hpp
 *
 *  Created on: Feb 26, 2018
 *      Author: Jeremy
 */

#ifndef TESTERS_TESTINGSTACKSANDQUEUES_HPP_
#define TESTERS_TESTINGSTACKSANDQUEUES_HPP_
#include <iostream>

#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/LinkedList.hpp"
#include "../Model/Structures/Linear/List.hpp"

class TestingStacksAndQueues
{
public:
	void stackVersusList();
	void stackVersusQueue();
	void queueVersusList();
};




#endif /* TESTERS_TESTINGSTACKSANDQUEUES_HPP_ */
