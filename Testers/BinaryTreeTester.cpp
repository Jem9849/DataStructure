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


	cout << endl;
	cout << testTree.getHeight() << endl;
	cout << testTree.isBalanced() << endl;
	cout << testTree.isComplete() << endl;
	cout << endl;

	cout << endl;
	cout << wordTree.getHeight() << endl;
	cout << wordTree.isBalanced() << endl;
	cout << wordTree.isComplete() << endl;
	cout << endl;

	//testTree.demo();
	testTree.inOrderTraversal();
	cout << endl;
	testTree.preOrderTraversal();
	cout << endl;
	testTree.postOrderTraversal();
	cout << endl;

	//wordTree.demo();
	wordTree.inOrderTraversal();
	cout << endl;
	wordTree.preOrderTraversal();
	cout << endl;
	wordTree.postOrderTraversal();
	cout << endl;

}






