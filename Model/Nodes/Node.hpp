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




#endif /* MODEL_NODE_NODE_HPP_ */
