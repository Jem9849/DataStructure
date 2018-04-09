/*
 * BinaryTreeNode.hpp
 *
 *  Created on: Mar 27, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_BINARYTREENODE_HPP_
#define MODEL_NODES_BINARYTREENODE_HPP_

#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
	BinaryTreeNode<Type> * root;
	BinaryTreeNode<Type> * right;
	BinaryTreeNode<Type> * left;
public:
	BinaryTreeNode();
	BinaryTreeNode(Type data);

	BinaryTreeNode<Type> * getRootNode();
	BinaryTreeNode<Type> * getRightNode();
	BinaryTreeNode<Type> * getLeftNode();

	void setRootNode(BinaryTreeNode<Type> * root);
	void setLeftNode(BinaryTreeNode<Type> * right);
	void setRightNode(BinaryTreeNode<Type> * left);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
	root = nullptr;
	left = nullptr;
	right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
	root = nullptr;
	left = nullptr;
	right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootNode()
{
	return this -> root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightNode()
{
	return this -> right;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftNode()
{
	return this -> left;
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
	root = newRoot;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightNode(BinaryTreeNode<Type> * right)
{
	this -> right = right;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftNode(BinaryTreeNode<Type> * left)
{
	this -> left = left;
}




#endif /* MODEL_NODES_BINARYTREENODE_HPP_ */
