/*
matthew serna
910958209
mserna@mail.sfsu.edu
CodeBlocks
*/

#ifndef GENERAL_TREE_H
#define GENERAL_TREE_H

#include <cstdlib>

struct Node{
    int value;
    Node() : left(NULL), right(NULL){};
    Node* left;
    Node* right;

};

class GeneralTree{
public:
    // A default constructor. This should explicitly set
    // the start node to be NULL.
    GeneralTree();

    // A copy constructor. This should also explicitly
    // set the start node to be NULL, and then it should
    // copy the contents of other into the current tree.
    GeneralTree(const GeneralTree& other);
    ~GeneralTree(); //Destructor

    //If other is not same as current tree, copy content
    //to current tree and remove from previous tree
    GeneralTree& operator=(const GeneralTree& other);

    //If the parent given is not NULL, make a new node with
    //the given value and add it to the parent node’s children.
    //Return the node you just inserted. Exceptions will be created.
    Node* insert(char value, Node* parent);

    void push(int value);
    Node* find(int value) const;
    void print() const;

protected:
    Node* start; //This Node needs to be accessed by sub classes, therefore protected

    //Makes a copy of the cf the current Tree
    void copyOther(const GeneralTree& other);
    void clear();

    // Recursivley print a subtree whose root is the given start node.
    // Use the notation described above for print().
    void printFrom(Node* start, int numSpaces) const;

    //Recursively copy all node from current Tree
    void copyFrom(Node* start);

    //Recursively delete all nodes in the tree
    void clearFrom(Node* start);
};

#endif
