/*
 * NonLinearGraph.hpp
 *
 *  Created on: Mar 19, 2018
 *      Author: Jeremy
 */

#ifndef MODEL_STRUCTURES_NONLINEAR_NONLINEARGRAPH_HPP_
#define MODEL_STRUCTURES_NONLINEAR_NONLINEARGRAPH_HPP_

#include <iostream>
#include <set>
#include <queue>
#include <assert.h>

using namespace std;

template<class Type>
class Graph
{
private:
	static const int MAXIMUM = 20;
	bool adjacencyMatrix [MAXIMUM][MAXIMUM];
	int weightCostMatrix [MAXIMUM][MAXIMUM];
	Type graphData[MAXIMUM];

	int vertexCount;

	void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markeVertices[]);
public:
	Graph();
	//Graph operations

	void addVertex(const Type& value);

	//Connect vertices
	void addEdge(int source, int target);
	void addEdgeUndirected(int source, int target);
	void addEdgeCost(int source, int target, int cost);

	//Disconnect vertices
	void removeEdge(int source, int target);
	void removeEdgeUndirected(int soruce, int target);
	void removeEdgeCost(int source, int target);

	//Accessors
	Type& operator [] (int vertex);
	Type operator [] (int vertex) const;
	int size() const;

	//Check connections
	bool hasUndirectedConnection(int source, int target) const;
	bool areConnected(int source, int target) const;
	std::set<int> neighbors(int vertex) const;

	//Traversals
	void depthFirstTraversal(Graph<Type> & graph, int vertex);
	void breadthFirstTraversal(Graph<Type> & graph, int vertex);
	int costTraversal(Graph<Type> & graph, int vertex);
};


template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph<Type> :: Graph()
{
	this -> vertexCount = 0;
}




#endif /* MODEL_STRUCTURES_NONLINEAR_NONLINEARGRAPH_HPP_ */
