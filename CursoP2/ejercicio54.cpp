#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;

void lab_4_4_12() {
    string stop_words_line;
    getline(cin, stop_words_line);

    set<string> stop_words;
    stringstream ss(stop_words_line);
    string word;
    while (getline(ss, word, ',')) {
        stop_words.insert(word);
    }

    string sentence;
    getline(cin, sentence);

    stringstream input(sentence);
    string result;
    bool first = true;

    while (input >> word) {
        string lower_word = word;
        transform(lower_word.begin(), lower_word.end(), lower_word.begin(), ::tolower);
        if (stop_words.find(lower_word) == stop_words.end()) {
            if (!first) result += " ";
            result += word;
            first = false;
        }
    }

    cout << result << "\n";
}
