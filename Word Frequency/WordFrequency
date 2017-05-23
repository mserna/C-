/*
Matthew Serna
910958209
mserna@mail.sfsu.edu
Code Blocks for compiling
*/

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

class WordFrequency
{
    using namespace std;

    //Struct created for multiple variable use
    struct WordStruct
    {
        int word;
        int count;
    };

    //converts string into char array for easy traversing and returns char vector
    vector<char> convert(const string &s)
    {
        return vector<char>(s.begin(), s.end());
    }

    //Returns back the least frequent character
    char getLeastFreqLetter(string input)
    {
        char least, temp;
        WordStruct w;
        int min = 0;
        for(char j = ' '; j <= '~'; j++){
            for(int k = 0; k<input.length(); k++)
            {
                if(input[k] == j)
                {
                    temp = input[k];
                    input[k] = least;
                    least = temp;
                }
            }
        }
        return least;
    }

    //Function calculates the most frequent letter
    char getMostFreqLetter(string input)
    {
        int max = 0;
        WordStruct word; //From struct
        char maxLetter;
        for(char q = ' '; q <= '~'; q++)
        {
            word.count = 0;
            for(int i = 0; i<input.length(); i++)
            {
                if(input[i] == q)
                    word.count++;
            }

            if(word.count > max)
            {
                max = word.count;
                maxLetter = q;
            }
        }

        return maxLetter;
    }

    //Taverses words and gets most frequent word
    void getWordFreq(string input)
    {

        cout << "Most frequent word used is: " << input.substr(0, input.find(' ')) << endl;

    }

    int main()
    {

        string result;

        //Prompts user to enter a paragraph and rereads it back to the user
        //The if statement also checks whether the user entered the correct input, else returns
        cout << "Please enter up to 100 characters: ";
        getline(cin, result);

        //Removes the punctuation from the string, and calls remove_copy_if algoritm
        string input; //For storing new result
        remove_copy_if(result.begin(), result.end(), back_inserter(input), ptr_fun<int, int>(&ispunct));
        //remove_copy_if(result.begin(), result.end(), back_inserter(input), ptr_fun<int, int>(&isspace));

        if(input.size() >= 100)
        {
            cout << "Over 100 characters!" << endl;
            return 0;
        }

        convert(input);

        //Returns the letter that is typed the least
        cout << "Least frequent letter is: " << getLeastFreqLetter(input) << endl;

        //Calls method and returns most frequent character
        cout << "Most frequent letter is: " << getMostFreqLetter(input) << endl;

        //Calculates the frequency of each word and returns back
        getWordFreq(input);

        return 0;
    }

}