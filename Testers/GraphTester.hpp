/*
 * GraphTester.hpp
 *
 *  Created on: Mar 23, 2018
 *      Author: Jeremy
 */

#ifndef TESTERS_GRAPHTESTER_HPP_
#define TESTERS_GRAPHTESTER_HPP_

#include <iostream>
#include "../Model/Structures/NonLinear/NonLinearGraph.hpp"


class GraphTester
{
private:
	Graph<string> puzzle;
	void setup();
	void compareTraversal();
	void findCheapestTraversal();
public:
	void testGraphs();
};





#endif /* TESTERS_GRAPHTESTER_HPP_ */
