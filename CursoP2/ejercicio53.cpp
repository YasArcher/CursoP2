#include <iostream>
#include <string>
using namespace std;

void lab_4_4_11() {
    string from;
    getline(cin, from);

    string to;
    getline(cin, to);

    string sentence;
    getline(cin, sentence);

    size_t pos = 0;
    while ((pos = sentence.find(from, pos)) != string::npos) {
        sentence.replace(pos, from.length(), to);
        pos += to.length(); // evitar reemplazo infinito en casos similares
    }

    cout << sentence << "\n";
}
