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

template <class Type>

Stack<Type> :: Stack() : LinkedList<Type>()
{
	// Empty. no code needed right now.
}

template <class Type>
Stack<Type> :: ~Stack()
{
	while(this -> size > 0)
	{
		pop();
	}
}





#endif /* MODEL_STRUCTURES_LINEAR_STACK_HPP_ */
