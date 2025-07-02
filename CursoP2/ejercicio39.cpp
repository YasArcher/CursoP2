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

int daysInYear(int year) {
    return isLeap(year) ? 366 : 365;
}

int daysBetween(Date d1, Date d2) {
    // Verificar si la segunda fecha es anterior
    if (d2.year < d1.year ||
        (d2.year == d1.year && d2.month < d1.month) ||
        (d2.year == d1.year && d2.month == d1.month && d2.day < d1.day))
        return -1;

    if (d1.year == d2.year) {
        return dayOfYear(d2) - dayOfYear(d1);
    }

    int days = daysInYear(d1.year) - dayOfYear(d1);

    for (int y = d1.year + 1; y < d2.year; y++) {
        days += daysInYear(y);
    }

    days += dayOfYear(d2);
    return days;
}

void lab_3_3_8() {
    Date since, to;
    cin >> since.year >> since.month >> since.day;
    cin >> to.year >> to.month >> to.day;
    cout << daysBetween(since, to) << endl;
}
