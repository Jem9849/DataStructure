/*
 * Tree.hpp
 *
 *  Created on: Mar 27, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_NONLINEAR_TREE_HPP_
#define MODEL_STRUCTURES_NONLINEAR_TREE_HPP_

#include "../../Model/Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
	protected:
	BinaryTreeNode<Type> * root;

public:
	//Informational Methods
	virtual int getSize() = 0;
	virtual int getHeight() = 0;
	virtual bool isComplete() = 0;
	virtual bool isBalanced() = 0;

	//Data Methods
	virtual void insert(Type data) = 0;
	virtual bool contains(Type data) = 0;
	virtual void remove(Type data) = 0;

	//Traversals
	virtual void inOrderTraversal() = 0;
	virtual void preOrderTraversal() = 0;
	virtual void postOrderTraversal() = 0;
};





#endif /* MODEL_STRUCTURES_NONLINEAR_TREE_HPP_ */
