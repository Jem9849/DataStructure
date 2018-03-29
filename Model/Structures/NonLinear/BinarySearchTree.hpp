/*
 * BinarySearchTree.hpp
 *
 *  Created on: Mar 29, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_NONLINEAR_BINARYSEARCHTREE_HPP_
#define MODEL_STRUCTURES_NONLINEAR_BINARYSEARCHTREE_HPP_

#include "Tree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
	int calculateSize(BinaryTreeNode<Type> * startNode);
	int calculateHeight(BinaryTreeNode<Type> * startNode);
	bool isBalanced(BinaryTreeNode<Type> * startNode);
	bool isComplete(BinaryTreeNode<Type> * startNode);

	void inOrderTraversal(BinaryTreeNode<Type> * inStart);
	void preOrderTraversal(BinaryTreeNode<Type> * preStart);
	void postOrderTraversal(BinaryTreeNode<Type> * postStart);

	BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
	BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);

	void removeNode(BinaryTreeNode<Type> * removeMe);

public:
	BinarySearchTree();
	~BinarySearchTree();

	BinaryTreeNode<Type> * getRoot();
	void setRoot(BinaryTreeNode<Type> * root);

	void inOrderTraversal();
	void preOrderTraversal();
	void postOrderTraversal();
	void demoTraversalSteps(BinaryTreeNode<Type> * node);

	int getSize();
	int getHeight();
	bool isComplete();
	bool isBalanced();

	bool contains(Type value);
	void insert(Type itemToInsert);
	void remove(Type value);

	Type findMinimum();
	Type findMaximum();
};

template<class Type>
int calculateSize(BinaryTreeNode<Type> * startNode)
{

}

template<class Type>
int calculateHeight(BinaryTreeNode<Type> * startNode)
{

}

template<class Type>
bool isBalanced(BinaryTreeNode<Type> * startNode)
{

}

template<class Type>
bool isComplete(BinaryTreeNode<Type> * startNode)
{

}

template<class Type>
void inOrderTraversal(BinaryTreeNode<Type> * inStart)
{

}

template<class Type>
void preOrderTraversal(BinaryTreeNode<Type> * preStart)
{

}

template<class Type>
void postOrderTraversal(BinaryTreeNode<Type> * postStart)
{

}


template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightMostChild(BinaryTreeNode<Type> * current)
{

}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftMostChild(BinaryTreeNode<Type> * current)
{

}


template<class Type>
void removeNode(BinaryTreeNode<Type> * removeMe)
{

}


template<class Type>
int getSize()
{

}

template<class Type>
int getHeight()
{

}

template<class Type>
bool isComplete()
{

}

template<class Type>
bool isBalanced()
{

}

template<class Type>
bool contains(Type value)
{

}

template<class Type>
void insert(Type itemToInsert)
{

}

template<class Type>
void remove(Type value)
{

}


template<class Type>
Type findMinimum()
{

}

template<class Type>
Type findMaximum()
{

}






#endif /* MODEL_STRUCTURES_NONLINEAR_BINARYSEARCHTREE_HPP_ */
