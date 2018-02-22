/*
 * Stack.hpp
 *
 *  Created on: Feb 22, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_LINEAR_STACK_HPP_
#define MODEL_STRUCTURES_LINEAR_STACK_HPP_

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
	Stack();
	~Stack();

	// Stack specific methods
	void push(Type data);
	Type pop();
	Type peek();

	// LinkedList overrided methods.
	void add(Type data);
	void addAtIndex(int index, Type data);
	Type getFromIndex(int index);
	Type remove(int index);
};





#endif /* MODEL_STRUCTURES_LINEAR_STACK_HPP_ */
