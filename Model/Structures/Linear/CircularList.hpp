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

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
	assert (index >= 0 && index < this -> size);
	DoubleNode<Type> * nodeToFind;

	if (index < this -> size / 2)
	{
		nodeToFind = this -> front;
		for (int pos = 0; pos < index; pos++)
		{
			nodeToFind = nodeToFind -> getNext();
		}
	}
	else
	{
		nodeToFind = this -> end;
		for (int pos = this -> size - 1; pos > index; pos--)
		{
			nodeToFind = nodeToFind -> getPrevious();
		}
	}

	return nodeToFind;
}

template <class Type>
void CircularList<Type> :: add(Type item)
{
	DoubleNode<Type> * addedNode;
	if (this -> size == 0)
	{
		addedNode = new DoubleNode<Type>(item);
		this -> front = addedNode;
	}

	else
	{
		addedNode = new DoubleNode<Type>(item, this -> end, this -> front);
		this -> end -> setNext(addedNode);
	}

	this -> end = addedNode;
	this -> size++;
}




#endif /* MODEL_STRUCTURES_LINEAR_CIRCULARLIST_HPP_ */
