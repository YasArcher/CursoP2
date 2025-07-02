#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string check_ip(const string& ip) {
    int parts = 0;
    string part;
    for (char c : ip) {
        if (!isdigit(c) && c != '.')
            return "Only digits and dots allowed";
    }

    size_t start = 0, end;
    while ((end = ip.find('.', start)) != string::npos) {
        part = ip.substr(start, end - start);
        if (part.length() > 3)
            return "Too many characters in a part";
        if (part.empty())
            return "Incorrect parts count";
        int num = stoi(part);
        if (num > 255)
            return "Too big a value of a part";
        parts++;
        start = end + 1;
    }

    part = ip.substr(start);
    if (part.length() > 3)
        return "Too many characters in a part";
    if (part.empty())
        return "Incorrect parts count";
    int num = stoi(part);
    if (num > 255)
        return "Too big a value of a part";
    parts++;

    if (parts < 4)
        return "Incorrect parts count";
    if (parts > 4)
        return "Too many parts";

    return "Correct IP";
}

void lab_4_4_8() {
    string ip;
    while (getline(cin, ip)) {
        cout << check_ip(ip) << endl;
    }
}
