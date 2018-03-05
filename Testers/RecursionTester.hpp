/*
 * RecursionTester.hpp
 *
 *  Created on: Mar 5, 2018
 *      Author: Jeremy
 */

#ifndef TESTERS_RECURSIONTESTER_HPP_
#define TESTERS_RECURSIONTESTER_HPP_


#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
	int fib(int start);
	string mystery(string word);
public:
	void testRecursionNumbers();
	void testRecursionString();
};




#endif /* TESTERS_RECURSIONTESTER_HPP_ */
