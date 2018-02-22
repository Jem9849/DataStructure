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
};





#endif /* MODEL_STRUCTURES_LINEAR_STACK_HPP_ */
