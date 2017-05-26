/*
Matthew Serna
mserna@mail.sfsu.edu
910958209
CodeBlocks
*/

#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>
#include <cstdlib>

using namespace std;

class Dijkstra {
private:
    int adjacentMatrix[25][25];
    int predecessor[15], distance[15];
    bool mark[15];
    int source;
    int numberOfVertices;
public:
    void readMatrix();
    int getUnmarkedNode();
    void init();
    void calculateDistance();
    void outputMatrix();
    void printPath(int);
};

#endif
