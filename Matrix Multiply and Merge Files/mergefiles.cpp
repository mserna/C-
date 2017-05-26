/*
Matthew Serna
CSC340
mserna@mail.sfsu.edu
CodeBlocks
*/
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>

using namespace std;


int main(){

    int data1;
    int data2;
    ifstream file1("text1.txt");
    ifstream file2("text2.txt");
    ofstream fout("output.txt");

    //Makes sure files exist before proceeding to the merge operation
    if (file1.fail() || file2.fail() || fout.fail())
    {
        cout << "Error! Cannot open files!" << endl;
    }else{

        cout << "Files have been merged and sorted!" << endl;
    }

    file1 >> data1;
    file2 >> data2;

    while (!file1.fail() && !file2.fail())
    {
        if (data1 <= data2)
        {
            fout << data1 << endl;
            file1 >> data1;
        }
        else
        {
            fout << data2 << endl;
            file2 >> data2;
        }
    }

    //Loop declares if file1 exists then insert data to new output file
    while (!file1.fail())
    {
        fout << data1 << endl;
        file1 >> data1;
    }
    //Loop declares if file2 does exist then insert data into new output txt doc
    while (!file2.fail())
    {
        fout << data2 << endl;
        file2 >> data2;
    }

}
