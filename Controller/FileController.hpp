/*
 * FileController.hpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimeData.hpp" // ../ means to go up a folder.
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream> // Treats strings as a stream.
#include "../Model/Structures/Linear/LinkedList.hpp"

using namespace std;

class FileController
{
public:
	FileController();
	static vector<CrimeData> readCrimeDataToVector(string filename);
	static LinkedList<CrimeData> readDataToList(string fileName);
};

#endif /* FileController_hpp */
