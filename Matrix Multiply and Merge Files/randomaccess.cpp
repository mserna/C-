/*
Matthew Serna
mserna@mail.sfsu.edu
CSC340
CodeBlocks
*/

#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

const int NUMSTOSKIP = 6000; //Constant number 6000, which indicates the line number we need to be at
const int NUMSFORKB = 5; //Characters per line
const int NUMSTODEST = NUMSTOSKIP  * NUMSFORKB; //This is where the cursor will land on the file at line 6001

int main(){

    vector <int> numbers(3999);
    fstream is;
    is.open("file1.txt");
    int index = 0;

    //Goes to the line to insert new numbers
    is.seekg(NUMSTODEST);
    while(true){
        int next;
        is >> next;
        if(is.fail()){
            break;
        } numbers.push_back(index++); //Reads the numbers into the new numbers vector
    }

    is.clear(); //Clears the cursor location to begin back at line 1
    is.seekp(NUMSTODEST); //Goes back to line 6001

    //Writes new numbers starting at position 6001
    for(int i = 7777; i <= 7781; i++){

        is << i << endl;
        cout << is << endl; //Prints out the numbers that were written @ 6001
    }

    cout << "Numbers 7777-7781 have been added @ position 6000" << endl;

    //Writes numbers in vector starting at position 6006
    for(int i = 0; i <= 3999; i++){
        is << numbers[i] << endl;
    }

    cout << "Remaining numbers have been added!" << endl;

return 0;
}
