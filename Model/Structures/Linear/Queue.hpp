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
};





#endif /* MODEL_STRUCTURES_LINEAR_QUEUE_HPP_ */
