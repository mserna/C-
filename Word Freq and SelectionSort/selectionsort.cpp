#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
/*
Matthew Serna
910958209
mserna@mail.sfsu.edu
Code Blocks for compiling
*/
using namespace std;

string readData(string funny){
    return funny;
}

vector<int> selectionSort(string funny){
    vector<int> numbers;
    for(int i = 0; i < funny.size(); i++){
        numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    return numbers;
}

string printVector(string funny){
    return funny;
}

int main(){
    string input;
    cout << "Enter a list of integers: ";
    getline(cin, input);
    cout << "You typed: " << readData(input) << endl;
    selectionSort(input);
    cout << "After sorting, you're new vector is: " << printVector(input) << endl;

return 0;
}
