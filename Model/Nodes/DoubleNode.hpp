/*
 * DoubleNode.hpp
 *
 *  Created on: Feb 26, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_DOUBLENODE_HPP_
#define MODEL_NODES_DOUBLENODE_HPP_

#include "Node.hpp"

template <class Type>
class DoubleNode : public Node<Type>
{
public:
	DoubleNode();
	DoubleNode(Type data);
	DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);

	DoubleNode<Type> * getPrevious();
	DoubleNode<Type> * getNext();

	void setPrevious(DoubleNode<Type> * previous);
	void setNext(DoubleNode<Type> * next);
protected:
	DoubleNode<Type> * previous;
	DoubleNode<Type> * next;
};

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
	previous = nullptr;
	next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
	previous = nullptr;
	next = nullptr;
}




#endif /* MODEL_NODES_DOUBLENODE_HPP_ */
