/*
Matthew Serna
910958209
mserna@mail.sfsu.edu
CodeBlocks
*/

#ifndef MYPOLYNOMIAL_H
#define MYPOLYNOMIAL_H

#include <cstdlib>
#include <iostream>
#include <vector>
#include <exception>
#include <utility>
#include <string>

class myPolynomial{

    private:

        //Private members for use
        int power[10];
        char variable[10];
        int coefficient[10];

    public:

        //Default Constructor with no parameters
        myPolynomial();

        //Reads coeffcient input from user and throws exceptions if there are errors
        void readFromUser(int &terms);

        //Returns the degree of the polynomial
        int degree();

        //Returns the coefficient of the term
        int getCoefficient(int degree);

        //Replaces the coefficient of the term with newCoefficient
        void changeCoefficient(int newCoefficient, int power);

        //Multiplies the terms with an integer
        void multiplier(int integer, int terms);

        //Adds two polyomials
        void adder(int &terms);

        //Prints out the resultant polynomial
        void printOut(int printedPolynomials);

        //Negation operator, removes terms from existing polynmial
        myPolynomial operator-();

        //Addition operant overload
        myPolynomial operator+(int value);


}
;

#endif
