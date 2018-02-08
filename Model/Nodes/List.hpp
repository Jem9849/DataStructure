/*
 * List.hpp
 *
 *  Created on: Feb 8, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_LIST_HPP_
#define MODEL_NODES_LIST_HPP_

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

template <class Type>
class List
{
public:
	// Structure
	virtual void add(Type item) = 0;
	virtual void addAtIndex(int index, Type item);
	virtual Type remove(int index) = 0;
	virtual Type getFromIndex(int index) = 0;
	// Helper
	virtual int getSize() const = 0;
	virtual LinearNode<Type> * getFront() = 0;
	virtual LinearNode<Type> * getEnd() = 0;
protected:
	int size;
};



#endif /* MODEL_NODES_LIST_HPP_ */
