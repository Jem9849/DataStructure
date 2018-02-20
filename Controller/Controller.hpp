/*
 * Controller.hpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#ifndef CONTROLLER_CONTROLLER_HPP_
#define CONTROLLER_CONTROLLER_HPP_

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"
#include "../Testers/ArrayTester.hpp"
#include "../Testers/LinkedListTester.hpp"

class Controller
{
private:
	void testLinkedList();
	void testArray();
	//void findMaxAndMin();
public:
	void start();
};




#endif /* CONTROLLER_CONTROLLER_HPP_ */
