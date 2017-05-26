/*
Matthew Serna
CSC340
mserna@mail.sfsu.edu
CodeBlocks
*/
#include <cstdlib>
#include <iostream>

using namespace std;

    int array1[10][10];
    int array2[10][10];
    int row1;
    int row2;
    int column1;
    int column2;

int multiply_matrices(int array1[][10], int array2[][10]){
    int resultarray[10][10];
    for(int i = 0; i < row1; ++i){
        for(int j = 0; j < column2; ++j){
            resultarray[i][j] = 0;
        }
    }

    for(int i = 0; i < row1; ++i){
        for(int j = 0; j < column2; ++j){
            for(int k = 0; k < column1; ++k){
                resultarray[i][j] += (array1[i][k]) * (array2[k][j]);
            }
        }
    }

    cout << endl << "Multiplied Result = " << endl;
    for(int i = 0; i < row1; ++i){
        for(int j = 0; j < column2; ++j){
            cout << " " << resultarray[i][j];
            if(j == (column2 - 1))
                cout << endl;
        }
    }

    return 0;
}

int main (){

    cout << "Please enter the number of rows and columns for first matrix: ";
    cin >> row1 >> column1;
    cout << "Please enter the number of rows and columns for second matrix: ";
    cin >> row2 >> column2;

    if(column1 != row2){

        cout << "Please make sure the number of columns in first matrix equal the number of rows in second matrix!" << endl;
    }

    cout << "Please enter elements in matrix 1." << endl;
    for (int i = 0; i < row1; ++i){
        for( int j = 0; j < column1; ++j){

            cout << "Enter an element in index " << i+1 << "," << j+1 << ": ";
            cin >> array1 [i][j];
        }
    }

    cout << "Please enter elements in matrix 2." << endl;
    for (int i = 0; i < row2; ++i){
        for( int j = 0; j < column2; ++j){

            cout << "Enter an element in index " << i+1 << "," << j+1 << ": ";
            cin >> array2 [i][j];
        }
    }

    multiply_matrices(array1, array2);


return 0;
}
