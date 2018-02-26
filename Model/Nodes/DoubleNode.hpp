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




#endif /* MODEL_NODES_DOUBLENODE_HPP_ */
