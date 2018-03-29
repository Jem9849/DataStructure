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
	BinaryTreeNode<Type> * getLeftMostChild(binaryTreeNode<Type> * current);

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



#endif /* MODEL_STRUCTURES_NONLINEAR_BINARYSEARCHTREE_HPP_ */
