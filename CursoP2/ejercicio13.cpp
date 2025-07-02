#include <iostream>
using namespace std;

void lab_2_0_5() {
    int year, month, day;
    cin >> year >> month >> day;

    month -= 2;
    if (month <= 0) {
        month += 12;
        year -= 1;
    }

    int w = month * 83 / 32;
    w += day;
    w += year;
    w += year / 4;
    w -= year / 100;
    w += year / 400;
    w %= 7;

    cout << w << endl;
}
