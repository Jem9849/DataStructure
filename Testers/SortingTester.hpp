/*
 * SortingTester.hpp
 *
 *  Created on: Mar 15, 2018
 *      Author: Jeremy
 */

#ifndef TESTERS_SORTINGTESTER_HPP_
#define TESTERS_SORTINGTESTER_HPP_

#include <iostream>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester
{
private:
	int swapCount;
	void quickSort(vector<CrimeData> & data, int low, int high);
	int partition(vector<CrimeData> & data, int low, int high);
	void swap(vector<CrimeData> & info, int small, int large);
public:
	void testSorts();

};





#endif /* TESTERS_SORTINGTESTER_HPP_ */
