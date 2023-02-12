#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;



class SuffixTree {
private:


public:
    


    char** makeSuffixes(string word){
        int wordLength = word.length();
        char** suffixes = new char*[wordLength];

        for (int i = 0; i < wordLength; i++) {
            suffixes[i] = new char[i+1];
        }

        for (int i = wordLength - 1; i >= 0; i--) {
            for (int j = i; j < wordLength; j++) {
                suffixes[i][j] = word[j];
            }
               
        }
        return suffixes;
    }
};







int main()
{


    string word;
    cin >> word;
    SuffixTree t;

    char** suffixes = new char* [word.length()];


    for (int i = 0; i <= word.length(); i++) {
        suffixes[i] = new char[i];
    }

    suffixes = t.makeSuffixes(word);
    
    for (int i = word.length() - 1; i >= 0; i--) {
        for (int j = i; j < word.length(); j++) {
            cout << suffixes[i][j];
        }
        cout << "\n";

    }



    return 0;
}