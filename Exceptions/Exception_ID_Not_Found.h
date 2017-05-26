/*
Matthew Serna
910958209
Codeblocks
mserna@mail.sfsu.edu
Q1
*/


#ifndef H_Exception_ID_Not_Found
#define H_Exception_ID_Not_Found

#include <cstdlib>
#include <iostream>

using namespace std;

class Exception_ID_Not_Found{

    public:

        Exception_ID_Not_Found(){
            error = "error!";
        }

        Exception_ID_Not_Found(string str){
            error = str;
        }

        string display(){
            return "Error!";
        }

    private:

        string error;
};

#endif
