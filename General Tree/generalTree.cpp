/*
matthew serna
910958209
mserna@mail.sfsu.edu
CodeBlocks
*/

#include <cstdlib>
#include <iostream>
#include "generalTree.h"

using namespace std;

GeneralTree :: GeneralTree() : start(NULL){
}

GeneralTree :: GeneralTree(const GeneralTree& other)[
]

GeneralTree :: ~GeneralTree(){
    clear();
}

GeneralTree& GeneralTree :: operator=(const GeneralTree& other){
    if (this != &other){
        clear();
        copyOther();
    }

    return *this;
}

void GeneralTree :: push(int value){

    Node* pushed = new Node();
    pushed->value = value;

    if (start == NULL){
        start = pushed;
    }else{
        Node* current = start;

        while(true){
            if(value < current->value){
                if(value->left == NULL){
                    current->left = pushed;
                }
            }else{
                current = current->left;
            } else {
                if(current->right == NULL){
                    current->right = pushed;
                    break;
                }else {
                    current = current->right;
                }
            }
        }
    }
}

Node* GeneralTree :: find(int value) const {

    return findFrom(value, start);
}

void GeneralTree :: print() const{

    printFrom(start, 0);
}

void GeneralTree :: copyOther(const Tree& other){

    copyFrom(other.start);
}

void GeneralTree :: clear(){
    clearFrom(start);
}

void GeneralTree :: printFrom(Node* start, int numSpaces) const
{
	if (start == NULL) {
		return;
	}

	for (int i = 0; i < numSpaces; i++) {
		cout << " ";
	}

	cout << start->value << endl;

	printFrom(start->left, numSpaces + 2);
	printFrom(start->right, numSpaces + 2);
}

// Recursively copy another tree's nodes. Use
// pre-order traversal.
void GeneralTree :: copyFrom(Node* start)
{
	if (start == NULL) {
		return;
	}

	push(start->value);
	copyFrom(start->left);
	copyFrom(start->right);
}

// clearFrom
//
// Recursively delete nodes. Use post-order traversal.
void GeneralTree :: clearFrom(Node* start)
{
	if (start == NULL) {
		return;
	}

	clearFrom(start->left);
	clearFrom(start->right);
	delete start;
}

int main(){
return 0;
}
