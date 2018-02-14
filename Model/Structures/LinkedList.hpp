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


protected:
	LinearNode<Type> * front;
	LinearNode<Type> * end;
};

template <class Type>
LinkedList<Type> :: LinkedList()
	{
		this -> front = nullptr;
		this -> end = nullptr;
		this -> size = 0;
	}

template <class Type>
LinkedList<Type> :: ~LinkedList()
{
	LinearNode<Type> * destroyStructure = front;
	while (front != nullptr)
	{
		front = destroyStructure->getNextNode();
		delete destroyStructure;
		destroyStructure = front;
	}
}

template <class Type>
void LinkedList<Type> :: add(Type item)
{
	LinearNode<Type> * newData = new LinearNode<Type>(item);

	if(this -> size == 0)
	{
		this -> front = newData;
	}

	else
	{
		this -> end -> setNextNode(newData);
	}

	this -> end = newData;
	this -> size += 1;
}




#endif /* MODEL_STRUCTURES_LINKEDLIST_HPP_ */
