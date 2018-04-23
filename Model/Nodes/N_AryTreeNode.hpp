/*
 * N_AryTreeNode.hpp
 *
 *  Created on: Apr 23, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_NODES_N_ARYTREENODE_HPP_
#define MODEL_NODES_N_ARYTREENODE_HPP_

#include <vector>
#include "Node.hpp"
using namespace std;

template <class Type>
class N_AryTreeNode : public Node<Type>
{
private:
	vector<N_AryTreeNode<Type>*> nodes;
	N_AryTreeNode<Type> * root;
public:
	N_AryTreeNode<Type>();
	~N_AryTreeNode<Type>();
	N_AryTreeNode<Type>(Type data);

	vector<N_AryTreeNode<Type>*> getNodes();
	N_AryTreeNode<Type> * getRoot();
	int getChildCount();

	void setRoot(N_AryTreeNode<Type> * root);
	void addChild(Type data);
};

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode()
{
	// unused
}





#endif /* MODEL_NODES_N_ARYTREENODE_HPP_ */
