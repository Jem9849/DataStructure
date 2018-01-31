/*
 * FileController.hpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
	FileController();
	static vector<CrimeData> readCrimeDataToVector(string filename);
};



#endif /* FileController_hpp */
