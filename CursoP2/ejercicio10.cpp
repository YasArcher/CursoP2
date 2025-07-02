#include <iostream>
using namespace std;

void lab_2_0_2() {
    int year;
    cin >> year;

    if (year < 1582) {
        cout << "Warning: the year is not within the Gregorian calendar era" << endl;
    }
    else {
        if (year % 4 != 0) {
            cout << "Common year" << endl;
        }
        else if (year % 100 != 0) {
            cout << "Leap year" << endl;
        }
        else if (year % 400 != 0) {
            cout << "Common year" << endl;
        }
        else {
            cout << "Leap year" << endl;
        }
    }
}
