#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void lab_4_4_13() {
    string word1, word2;
    cin >> word1 >> word2;

    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    if (word1 == word2)
        cout << "anagrams\n";
    else
        cout << "not anagrams\n";
}
