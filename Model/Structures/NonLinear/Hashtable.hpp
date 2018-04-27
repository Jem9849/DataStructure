/*
 * Hashtable.hpp
 *
 *  Created on: Apr 27, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_NONLINEAR_HASHTABLE_HPP_
#define MODEL_STRUCTURES_NONLINEAR_HASHTABLE_HPP_

#include "../Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
	HashNode<Type> ** internalStorage;
	long size;
	long capacity;
	double loadFactor;

	long getNextPrime();
	bool isPrime(long current);
	void resize();
	long findPosition(HashNode<Type> * insertNode);
	long handleCollision(HashNode<Type> * insertedNode, long index);
public:
	Hashtable();
	~Hashtable();

	void insert(Type data);
	long getSize();
};

template <class Type>
Hashtable<Type> :: Hashtable()
{
	capacity = 101;
	internalStorage = new HashNode<Type> * [capacity];
	size = 0;
	loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable()
{

}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{

}



#endif /* MODEL_STRUCTURES_NONLINEAR_HASHTABLE_HPP_ */
