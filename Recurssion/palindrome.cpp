/*
Matthew Serna
mserna@mail.sfsu.edu
910958209
CodeBlocks
*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/* Problem 1*/

bool isPalindrome(const string& input,int first = 0,
    int last = string::npos) {
    if (last == string::npos){
        last = input.length() - 1;
    }
    if (input[first] == input[last]){
        if ((last - first) < 2){
            return true;
        }else
            return isPalindrome(input, first + 1, last - 1);
    }else
        return false;
}


/*Problem 2*/

int digitsSum(int input) {
    if(input / 10 == 0){
        return input;
    }else
    return digitsSum(input/10) + digitsSum(input % 10);
}

/* Problem 3*/

int waysToClimb(int numStairs) {
    static int ways;
    if(numStairs == 0)
    {
        return ways;
    }
    return ways + 1;
}

int main()
{

    string stringInput;
    cout << endl << "Problem 1:" << endl << "Please enter a word: ";
    cin >> stringInput;
    bool flag = isPalindrome(stringInput);
    if(flag == true)
        cout << endl << stringInput << " is a palindrome" << endl;
    else
        cout << endl << stringInput << " is not a palindrome" << endl;

    int number;
    cout << endl << "Problem2:" << endl << "Enter a number: ";
    cin >> number;
    int sum = digitsSum(number);
    cout << endl << "Sum of " << number << " is " << sum << endl;
    int stairs;
    cout << endl << "Problem 3:" << endl << "Enter the number of steps: ";
    cin >> stairs;
    int ways = waysToClimb(stairs);
    cout << endl << "Number of ways to climb " << stairs << " is " << ways << endl;

   return 0;
}
