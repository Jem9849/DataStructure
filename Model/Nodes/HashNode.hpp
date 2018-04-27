/*
 * HashNode.hpp
 *
 *  Created on: Apr 27, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_HASHNODE_HPP_
#define MODEL_NODES_HASHNODE_HPP_

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
	long key;
public:
	HashNode();
	HashNode(Type data);

	long getKy() const;
};

template <class Type>
HashNode<Type> :: HashNode()
{
	this -> key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
	this -> key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
	return this -> key;
}

#endif /* MODEL_NODES_HASHNODE_HPP_ */
