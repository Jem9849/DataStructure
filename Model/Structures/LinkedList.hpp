/*
 * LinkedList.hpp
 *
 *  Created on: Feb 14, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_LINKEDLIST_HPP_
#define MODEL_STRUCTURES_LINKEDLIST_HPP_
#include <iostream>
#include "List.hpp"

using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
	LinearNode<Type> * front;
	LinearNode<Type> * end;
};



#endif /* MODEL_STRUCTURES_LINKEDLIST_HPP_ */
