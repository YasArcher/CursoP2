#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void lab_4_4_10() {
    string sentence;
    getline(cin, sentence);

    istringstream iss(sentence);
    string word, prev, result;
    bool first = true;

    while (iss >> word) {
        if (word == prev)
            continue;
        if (!first)
            result += " ";
        result += word;
        prev = word;
        first = false;
    }

    cout << result << "\n";
}
