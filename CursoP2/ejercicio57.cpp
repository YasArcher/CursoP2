#include <iostream>
#include <string>
using namespace std;

void lab_4_4_15() {
    string sentence;
    getline(cin, sentence);

    string result;
    bool insideAsterisk = false;
    bool insideUnderscore = false;

    for (size_t i = 0; i < sentence.length(); ++i) {
        char c = sentence[i];

        if (c == '*' && !insideUnderscore) {
            insideAsterisk = !insideAsterisk;
        }
        else if (c == '_' && !insideAsterisk) {
            insideUnderscore = !insideUnderscore;
        }
        else {
            if (insideAsterisk && isalpha(c)) {
                result += toupper(c);
            }
            else if (insideUnderscore) {
                if (isalpha(c)) {
                    result += c;
                    result += ' ';
                }
                else {
                    result += c;
                }
            }
            else {
                result += c;
            }
        }
    }

    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result << "\n";
}
