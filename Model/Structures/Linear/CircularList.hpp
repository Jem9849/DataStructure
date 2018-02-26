/*
 * CircularList.hpp
 *
 *  Created on: Feb 26, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_LINEAR_CIRCULARLIST_HPP_
#define MODEL_STRUCTURES_LINEAR_CIRCULARLIST_HPP_

#include "List.hpp"
#include "../../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public List<Type>
{
private:
	DoubleNode<Type> * front;
	DoubleNode<Type> * end;

	DoubleNode<Type> * findNode(int index);
public:
	CircularList();
	~CircularList();

	void add(Type item);
	void addAtIndex(int index, Type item);
	Type remove(int index);
	Type getFromIndex(int index);
	int getSize() const;

};

template <class Type>
CircularList<Type> :: CircularList()
{
	front -> setPrevious(end);
	front -> setNext(end);

	end -> setPrevious(front);
	end -> setNext(front);
}

template <class Type>
CircularList<Type> :: ~CircularList()
{
	DoubleNode<Type> * current = front;
	while (this -> front != nullptr)
	{
		front = front -> getNext();
		delete current;
		current = front;
	}
}




#endif /* MODEL_STRUCTURES_LINEAR_CIRCULARLIST_HPP_ */
