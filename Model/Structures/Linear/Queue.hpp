/*
 * Queue.hpp
 *
 *  Created on: Feb 22, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_LINEAR_QUEUE_HPP_
#define MODEL_STRUCTURES_LINEAR_QUEUE_HPP_

#include "LinkedList.hpp"
#include <iostream>;
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
public:
	Queue();
	~Queue();

	// Queue methods
	void enqueue(Type data);
	Type dequeue();
	Type peek();
	void clear();

	// Overridden methods of LinkedList
	void add(Type data);
	void getAtIndex(int index, Type data);
	Type getFromIndex(int index);
	Type remove(int index);
};

template <class Type>
Queue<Type> :: Queue() : LinkedList<Type>()
{
	//Empty; Handled by parent class constructor.
}

template <class Type>
Queue<Type> :: ~Queue()
{
	for(LinearNode<Type> * removed = this -> front; removed != nullptr; removed = this -> front)
	{
		this -> front = removed -> getNextNode();
		delete removed;
	}
}

template <class Type>
void Queue<Type> :: enqueue(Type item)
{
	LinearNode<Type> * added = new LinearNode<Type>(item);

	if (this -> size == 0)
	{
		this -> front = added;
	}
	else
	{
		this -> end -> setNextNode(added);
	}
	this -> end = added;
	this -> size++;
}

template <class Type>
void Queue<Type> :: addAtIndex(int index, Type item)
{
	assert(index == this -> size -1);
	enqueue(item);
}

template <class Type>
void Queue<Type> :: add(Type item)
{
	enqueue(item);
}
#endif /* MODEL_STRUCTURES_LINEAR_QUEUE_HPP_ */
