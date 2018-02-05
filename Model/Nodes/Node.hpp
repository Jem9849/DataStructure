/*
 * Node.hpp
 *
 *  Created on: Feb 5, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODE_NODE_HPP_
#define MODEL_NODE_NODE_HPP_

template <class Type>
class Node {

public:
	Node();
	Node(Type data);
	void setData(Type data);
	Type getData();
protected:
	Type data;

};

template <class Type>
Node<Type> :: Node()
{
	// Needed for default constructor complilation,
	// Since when structure created it has no item.
}

template <class Type>
Node<Type> :: Node(Type data)
{
	this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
	this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
	return data;
}
#endif /* MODEL_NODE_NODE_HPP_ */
