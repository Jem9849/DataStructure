/*
 * LinkedList.hpp
 *
 *  Created on: Feb 14, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_LINKEDLIST_HPP_
#define MODEL_STRUCTURES_LINKEDLIST_HPP_
#include <iostream>
#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
public:
	// Constructors
	LinkedList();
	// Destructor
	virtual ~LinkedList(); // Can be overridden when virtual.
	// Helper Methods
	int getSize() const;
	LinearNode<Type> * getFront();
	LinearNode<Type> * getEnd();

	// Structure Methods
	void add(Type item);
	void addAtIndex(int index, Type item);
	Type getFromIndex(int index);
	Type remove(int index);
	// Type setAtIndex(int index, Type item);
	// bool contains(Type item);

	LinkedList<Type> :: LinkedList()
	{
		this -> front = nullptr;
		this -> end = nullptr;
		this -> size = 0;
	}
protected:
	LinearNode<Type> * front;
	LinearNode<Type> * end;
};


#endif /* MODEL_STRUCTURES_LINKEDLIST_HPP_ */
