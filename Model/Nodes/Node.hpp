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
	void getData(Type data);
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




#endif /* MODEL_NODE_NODE_HPP_ */
