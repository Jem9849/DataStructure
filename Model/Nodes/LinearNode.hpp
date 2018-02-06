/*
 * LinearNode.hpp
 *
 *  Created on: Feb 6, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_LINEARNODE_HPP_
#define MODEL_NODES_LINEARNODE_HPP_

#include "Node.hpp"

template <class Type>
class LinearNode : public Node<Type>
{
public:
	// Constructors
	LinearNode();
	LinearNode(Type data);
	LinearNode(Type data, LinearNode<Type> * next);
	// Methods
	void setNextNode(LinearNode<Type> * next);
	LinearNode<Type> * getNextNode();
	// This section is available to subclasses of LinearNode.
protected:
	LinearNode<Type> * next;
};

//Constructors

/**
 * This constructor is used for building the raw structure
 * before the values are known.
 */
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
	this->next =  nullptr;
}


#endif /* MODEL_NODES_LINEARNODE_HPP_ */
