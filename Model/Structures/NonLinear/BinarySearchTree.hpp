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
	void demo();

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

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
	this -> root = nullptr;
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{

}

template<class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * startNode)
{
	return -1;
}

template<class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * startNode)
{
	return -1;
}

template<class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * startNode)
{
	return false;
}

template<class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode)
{
	return false;
}

template<class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRoot()
{

}

template<class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * root)
{

}

template<class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * inStart)
{
	if (inStart != nullptr)
	{
		inOrderTraversal(inStart -> getLeftNode());
		cout << inStart -> getData() << endl;
		inOrderTraversal(inStart -> getRightNode());
	}
}

template<class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * preStart)
{

}

template<class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * postStart)
{

}


template<class Type>
void  BinarySearchTree<Type> :: inOrderTraversal()
{
	inOrderTraversal(this -> root);
}

template<class Type>
void  BinarySearchTree<Type> :: preOrderTraversal()
{
	preOrderTraversal(this -> root);
}

template<class Type>
void  BinarySearchTree<Type> :: postOrderTraversal()
{
	postOrderTraversal(this -> root);
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
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{

}


template<class Type>
int BinarySearchTree<Type> :: getSize()
{
	return -1;
}

template<class Type>
int BinarySearchTree<Type> :: getHeight()
{
	return -1;
}

template<class Type>
bool BinarySearchTree<Type> :: isComplete()
{
	return false;
}

template<class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
	return false;
}

template<class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
	return false;
}

template<class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
	BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
	BinaryTreeNode<Type> * previous = nullptr;
	BinaryTreeNode<Type> * current = this -> root;

	if (current == nullptr)
	{
		this -> root = insertMe;
	}

	else
	{
		while(current != nullptr)
		{
			previous = current;
			if (itemToInsert < current -> getData())
			{
				current = current -> getLeftNode();
			}

			else if (itemToInsert > current -> getData())
			{
				current = current -> getRightNode();
			}

			else // Remove cerr after verification of understanding
			{
				cerr << "Item exists already - Exiting insert" << endl;
				delete insertMe;
				return; // Okay becuase it is returning nothing.
			}
		}

		if (previous -> getData() > itemToInsert)
		{
			previous -> setLeftNode(insertMe);
		}

		else
		{
			previous -> setRightNode(insertMe);
		}

		insertMe -> setRootNode(previous);
	}
}

template<class Type>
void BinarySearchTree<Type> :: remove(Type value)
{

}


template<class Type>
Type BinarySearchTree<Type> :: findMinimum()
{

}

template<class Type>
Type BinarySearchTree<Type> :: findMaximum()
{

}

template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinaryTreeNode<Type> * node)
{
	if (start != nullstr)
	{
		cout << "check if left is here" << endl;
		demoTraversalSteps(start -> getLeftNode());
		cout << "at root" << endl;
		cout << "check if right is here" << endl;
		demoTraversalSteps(start -> getRightNode());
	}

	else
	{
		cout << "reached nullptr - if on right its back up the recursive call stack left is go to root" << endl;
	}
}

template <class Type>
void BinaryTreeNode<Type> :: demo()
{
	demoTraversalSteps(this -> root);
}


#endif /* MODEL_STRUCTURES_NONLINEAR_BINARYSEARCHTREE_HPP_ */
