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
	delete [] internalStorage;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
	return false;
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
	return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollision(long currentPosition)
{
    long shift = 17;
    
    for (long position = currentPosition + shift; position != currentPosition; position += shift)
    {
        if (position >= capacity)
        {
            position = position % capacity;
        }
        
        if (internalStorage[position] == nullptr)
        {
            return position;
        }
    }
    
    return -1;
}

template <class Type>
long Hashtable<Type> :: getSize()
{

}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{

}

template <class Type>
void Hashtable<Type> :: resize()
{
    long updatedCapacity = getNextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    
    std :: fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this -> capacity;
    this -> capacity = updatedCapacity;
    
    for (long index = 0; index < oldCapacity; index++)
    {
        if (internalStorage[index] != nullptr)
        {
            HashNode<Type> * temp = internalStorage[index];
            
            long position = findPosition(temp);
            if (tempStorage[position] == nullptr)
            {
                tempStorage[position] = temp;
            }
            else
            {
                long updatedPosition = handleCollision(position);
                if (updatedPosition != -1)
                {
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    internalStorage = tempStorage;
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    this -> size++;
    if (((this -> size * 1.000) / this -> capacity) > this -> loadFactor)
    {
        resize();
    }
    
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    
    if (internalStorage[index] == nullptr)
    {
        internalStorage[index] = temp;
    }
    
    else
    {
        long updatedPosition = handleCollision(index);
        if (updatedPosition != -1)
        {
            internalStorage[updatedPosition] = temp;
        }
    }
}
#endif /* MODEL_STRUCTURES_NONLINEAR_HASHTABLE_HPP_ */
