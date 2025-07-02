#include <iostream>
#include <string>
using namespace std;

void lab_4_4_9() {
    string sentence;
    getline(cin, sentence);

    string result;
    bool prev_space = false;

    for (char c : sentence) {
        if (isspace(c)) {
            if (!prev_space) {
                result += ' ';
                prev_space = true;
            }
        }
        else {
            result += c;
            prev_space = false;
        }
    }

    cout << result << endl;
}
