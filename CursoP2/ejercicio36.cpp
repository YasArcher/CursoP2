#include <iostream>
#include <iomanip>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void lab_3_3_5() {
    for (int yr = 1995; yr < 2017; yr++)
        cout << yr << " -> " << isLeap(yr) << endl;
}
