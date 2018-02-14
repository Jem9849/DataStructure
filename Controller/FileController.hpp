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
#include "../../Structures/LinkedList.hpp"

using namespace std;

class FileController
{
public:
	FileController();
	static vector<CrimeData> readCrimeDataToVector(string filename);
	static LinkedList<CrimeData> readDataToList(string fileName);
};

LinkedList<CrimeData> FileController :: readDataToList(string fileName)
{
	LinkedList<CrimeData> crimes;

	string currentCSVLine;
	int rowCount = 0;

	ifstream dataFile(fileName);

	// If the file exists at path.
	if (dataFile.is_open())
	{
		// Read till at end.
		while (!dataFile.eof())
		{
			// Grab each line separated by carriage return.
			getline(dataFile, currentCSVLine, '\r');
			// Exclude header row.
			if (rowCount != 0)
			{
				// Create CrimeData instance. Exclude blank line.
				if (currentCSVLine.length() != 0)
				{
					CrimeData row(currentCSVLine);
					crimes.add(row);
				}
			}
			rowCount++;
		}
		dataFile.close();
	}
	else
	{
		cerr << "No File." << endl;
	}

	return crimes;
}


#endif /* FileController_hpp */
