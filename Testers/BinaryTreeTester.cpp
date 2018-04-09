/*
 * BinaryTreeTester.cpp
 *
 *  Created on: Mar 27, 2018
 *      Author: Jeremy
 */

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
	testTree.insert(3);
	testTree.insert(5);
	testTree.insert(86);
	testTree.insert(-6);
	testTree.insert(89);
	testTree.insert(100);
	testTree.insert(6);
	testTree.insert(15);
	testTree.insert(54);
	testTree.insert(13);
	testTree.insert(17);

	wordTree.insert("ra");
	wordTree.insert("ara");
	wordTree.insert("lara");
	wordTree.insert("aslara");
	wordTree.insert("muraslara");

	testTree.demo();
	testTree.inOrderTraversal();
	testTree.preOrderTraversal();
	testTree.postOrderTraversal();

	wordTree.demo();
	wordTree.inOrderTraversal();
}






