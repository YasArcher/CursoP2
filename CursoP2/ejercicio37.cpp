#include <iostream>
#include <iomanip>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int monthLength(int year, int month) {
    if (year < 1 || month < 1 || month > 12)
        return 0;

    int daysInMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    if (month == 2 && isLeap(year))
        return 29;
    else
        return daysInMonth[month - 1];
}

void lab_3_3_6() {
    for (int yr = 2000; yr < 2002; yr++) {
        for (int mo = 1; mo <= 12; mo++)
            cout << monthLength(yr, mo) << " ";
        cout << endl;
    }
}
