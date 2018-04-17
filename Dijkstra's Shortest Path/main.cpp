/*
Matthew Serna
mserna@mail.sfsu.edu
910958209
CodeBlocks
*/
#include <iostream>
#include "graph.h"
#define INFINITE 9999

using namespace std;

void Dijkstra :: readMatrix(){
    cout << "Please enter the amount of vertices of the graph: ";
    cin >> numberOfVertices;
    while(numberOfVertices <= 0){
        cout << "Please enter the amount of vertices of the graph: ";
        cin >> numberOfVertices;
    }
    cout << "Please enter the adjacent matrix for the graph: ";
    cout << "To enter infinity, please enter: " << INFINITE << endl;
    for(int row = 0; row < numberOfVertices; row++) {
        cout << "Please enter postive weights for the row: " << row << endl;
        for(int column = 0; column < numberOfVertices; column++) {
            cin >> adjacentMatrix[row][column];
                //Error throw, wieghts should be positive
                while(adjacentMatrix[row][column] < 0) {
                    cout << "Error! Weights should be positive, please enter again... ";
                    cin >> adjacentMatrix[row][column];
                }
        }
    }

    cout << "Enter the source vertex" << endl;
    cin >> source;
    while((source < 0) && (source > numberOfVertices - 1)) {
        cout << "Source vertex should be between 0 and " << numberOfVertices - 1 << endl;
        cout << "Enter the source vertex again" << endl;
        cin >> source;
    }
}

void Dijkstra :: init(){
    for(int value = 0; value < numberOfVertices; value++) {
        mark[value] = false;
        predecessor[value] = -1;
        distance[value] = INFINITE;
    }
    distance[source]= 0;
}


int Dijkstra :: getUnmarkedNode(){
    int minDistance = INFINITE;
    int closestUnmarkedNode;
    for(int value = 0;value < numberOfVertices; value++) {
        if((!mark[value]) && ( minDistance >= distance[value])) {
        minDistance = distance[value];
        closestUnmarkedNode = value;
        }
    }
return closestUnmarkedNode;
}


void Dijkstra :: calculateDistance(){
    init();
    int minDistance = INFINITE;
    int closestUnmarkedNode;
    int count = 0;
    while(count < numberOfVertices) {
        closestUnmarkedNode = getUnmarkedNode();
        mark[closestUnmarkedNode] = true;
        for(int i = 0; i < numberOfVertices; i++) {
            if((!mark[i]) && (adjacentMatrix[closestUnmarkedNode][i] > 0) ) {
                if(distance[i] > distance[closestUnmarkedNode] + adjacentMatrix[closestUnmarkedNode][i]) {
                    distance[i] = distance[closestUnmarkedNode] + adjacentMatrix[closestUnmarkedNode][i];
                    predecessor[i] = closestUnmarkedNode;
                }
            }
        }
        count++;
    }
}


void Dijkstra :: printPath(int node){
    if(node == source){
        cout << (char)(node + 97) << "..";
    }else if(predecessor[node] == -1){
        cout << "No path from " << source << "to " << (char)(node + 97) << endl;
    }else {
        printPath(predecessor[node]);
        cout << (char) (node + 97) << "..";
    }
}


void Dijkstra :: outputMatrix(){
    for(int i = 0; i < numberOfVertices; i++) {
        if(i == source)
            cout << (char)(source + 97) << ".." << source;
        else
            printPath(i);
            cout<< " -> " << distance[i] << endl;
    }
}


int main(){
    Dijkstra graph;
    graph.readMatrix();
    graph.calculateDistance();
    graph.outputMatrix();
return 0;
}
