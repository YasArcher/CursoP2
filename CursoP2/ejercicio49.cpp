#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void lab_4_3_8() {
    string input;
    getline(cin, input);

    int freq[26] = { 0 };

    for (char c : input) {
        if (isalpha(c)) {
            freq[tolower(c) - 'a']++;
        }
    }

    bool isPangram = true;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] == 0) {
            isPangram = false;
            break;
        }
    }

    if (isPangram)
        cout << "Pangram" << endl;
    else
        cout << "Not a pangram" << endl;

    for (int i = 0; i < 26; ++i) {
        cout << char('a' + i) << "-" << freq[i] << endl;
    }
}
