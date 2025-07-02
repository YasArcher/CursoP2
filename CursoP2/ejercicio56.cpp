#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool match(const string& pattern, const string& text) {
    for (size_t i = 0; i < pattern.size(); ++i) {
        char p = pattern[i];
        char t = text[i];

        if (p == 'D') {
            if (!isdigit(t)) return false;
        }
        else if (p == 'A') {
            if (!isalpha(t)) return false;
        }
        else if (p == '?') {
            continue;
        }
        else if (islower(p)) {
            if (tolower(t) != p) return false;
        }
        else {
            if (p != t) return false;
        }
    }
    return true;
}

void lab_4_4_14() {
    string pattern, sentence;
    getline(cin, pattern);
    getline(cin, sentence);

    size_t len = pattern.length();
    for (size_t i = 0; i + len <= sentence.length(); ++i) {
        string fragment = sentence.substr(i, len);
        if (match(pattern, fragment)) {
            cout << fragment << endl;
        }
    }
}
