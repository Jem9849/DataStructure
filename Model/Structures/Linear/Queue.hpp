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
#endif /* MODEL_STRUCTURES_LINEAR_QUEUE_HPP_ */