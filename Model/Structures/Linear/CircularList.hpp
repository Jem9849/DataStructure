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


};




#endif /* MODEL_STRUCTURES_LINEAR_CIRCULARLIST_HPP_ */
