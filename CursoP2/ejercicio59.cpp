#include <iostream>
#include <string>
#include <sstream>
#include <map>
using namespace std;

void lab_4_4_17() {
    string values;
    getline(cin, values);

    string tpl;
    getline(cin, tpl);

    map<string, string> dict;
    stringstream ss(values);
    string pair;

    while (getline(ss, pair, ',')) {
        size_t eq_pos = pair.find('=');
        if (eq_pos != string::npos) {
            string key = pair.substr(0, eq_pos);
            string val = pair.substr(eq_pos + 1);
            dict[key] = val;
        }
    }

    string result;
    for (size_t i = 0; i < tpl.size(); ++i) {
        if (tpl[i] == '[') {
            size_t end = tpl.find(']', i);
            if (end != string::npos) {
                string key = tpl.substr(i + 1, end - i - 1);
                if (dict.count(key)) {
                    result += dict[key];
                }
                else {
                    result += tpl.substr(i, end - i + 1);
                }
                i = end;
            }
            else {
                result += tpl[i];
            }
        }
        else {
            result += tpl[i];
        }
    }

    cout << result << "\n";
}
