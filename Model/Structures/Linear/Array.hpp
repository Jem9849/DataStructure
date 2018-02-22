/*
 * Array.hpp
 *
 *  Created on: Feb 2, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_ARRAY_HPP_

#include <assert.h> // Used for validating user supplied data.
#include <iostream> // Used for tracing and debug statements.

using namespace std; // Keyword access.

#define MODEL_STRUCTURES_ARRAY_HPP_

template <class Type>
class Array
{
private:
	Type * internalArray;
	int size;

public:
	// Constructor.
	Array<Type>(int size);

	// Copy Constructor.
	Array<Type>(const Array<Type> & toCopy);

	// Destructor.
	~Array<Type>();

	// Operators.
	Array<Type> & operator = (const Array<Type> & toReplace);
	Type& operator [] (int index);
	Type operator [] (int index) const;

	// Methods.
	int getSize() const;
	Type getFromIndex(int index);
	void setAtIndex(int index, Type data);


};

template <class Type>
Array<Type> :: Array(int size)
	{
		assert(size > 0);
		this-> size = size;

		internalArray = new Type[size];
	}

template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
	this-> size = toCopy.getSize();

	// Build Data Structure
	internalArray = new Type[size];

	for(int index = 0; index < size; index++)
	{
		internalArray[index] = toCopy[index];
	}
}


template <class Type>
Array<Type> :: ~Array()
{
	delete [] internalArray;
}

template <class Type>
Array<Type> & Array<Type> :: operator = (const Array<Type> & toAssign)
{
	if (&toAssign != this)
	{
		if (size != toAssign.getSize())
		{
			delete [] internalArray;
			size = toAssign.getSize();
			internalArray = new Type [size];
		}


		for (int index = 0; index < size; index++)
		{
			internalArray[index] = toAssign[index];
		}
	}

	return *this;
}

template <class Type> // Left hand of = sign. Assigns to reference.
Type & Array<Type> :: operator [] (int index)
{
	assert(index >= 0 && index < size);
	return internalArray[index];
}

template <class Type> // Right hand of = sign. Copy.
Type Array<Type> :: operator [] (int index) const
{
	assert(index >= 0 && index < size);
	return internalArray[index];
}

//Basic
template <class Type>
int Array<Type> :: getSize() const
{
	return size;
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
	assert(index >=0 && index < size);

	Type value = internalArray[index];

	return value;
}

template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
	assert(pos >= 0 && pos < size);
	internalArray[pos] = item;
}

#endif /* MODEL_STRUCTURES_ARRAY_HPP_ */
