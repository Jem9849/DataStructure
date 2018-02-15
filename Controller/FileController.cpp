/*
 * FileController.cpp
 *
 *  Created on: Jan 31, 2018
 *      Author: Jeremy
 */

#include "FileController.hpp"

FileController :: FileController()
{

}

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
	std :: vector<CrimeData> crimeVector;
	string currentCSVLine;
	int rowCount = 0;

	ifstream dataFile(filename);

	// If the file exists at that path.
	if (dataFile.is_open())
	{
		// Keep reading until end of file/
		while (!dataFile.eof())
		{
			// Grab each line from CSV seperated by carriage return character.
			getline(dataFile, currentCSVLine, '\n');
			// Exclude header row
			if (rowCount != 0)
			{
				if(currentCSVLine.length() != 0)
				{
				// Create a CrimeData instance from the line.
				CrimeData row(currentCSVLine);
				crimeVector.push_back(row);
				}
			}
			rowCount++;
		}
		dataFile.close();
	}
	else
	{
		cerr << "NO FILE" << endl;
	}

	return crimeVector;
}

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



