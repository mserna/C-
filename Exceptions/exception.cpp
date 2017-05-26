/*
Matthew Serna
910958209
Codeblocks
mserna@mail.sfsu.edu
Q1
*/



#include <cstdlib>
#include <iostream>
#include <exception>
#include "Exception_ID_Not_Found.h"

using namespace std;

int getProductID(int ids[], string names[], int numProducts, string target)

{
        for (int i=0; i < numProducts; i++)

        {

            if (names[i] == target){

                return ids[i];
            }
        } throw Exception_ID_Not_Found().display(); //Gets error method from the Exception.h file


}


int main() // Sample code to test the getProductID function

{

  int productIds[]= {4, 5, 8, 10, 13};

  string products[] = { "computer", "flash drive", "mouse", "printer", "camera" };



  cout << getProductID(productIds, products, 5, "mouse") << endl;

  cout << getProductID(productIds, products, 5, "camera") << endl;

  try{

    //Sends product info to function
    cout << getProductID(productIds, products, 5, "laptop") << endl;

  }catch (string& s){ // Pass by reference

        cout << s << " NO such product found!" << endl; //Exception output statement
    }

  return 0;

}

