#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

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

int dayOfYear(Date date) {
    int totalDays = 0;
    for (int m = 1; m < date.month; m++) {
        totalDays += monthLength(date.year, m);
    }
    totalDays += date.day;
    return totalDays;
}

void lab_3_3_7() {
    Date d;
    cin >> d.year >> d.month >> d.day;
    cout << dayOfYear(d) << endl;
}
