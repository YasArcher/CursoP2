#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);

    Date current;
    current.year = tl.tm_year + 1900;
    current.month = tl.tm_mon + 1;
    current.day = tl.tm_mday;

    return current;
}

void lab_3_3_9() {
    Date t = today();
    cout << t.year << "-" << t.month << "-" << t.day << endl;
}
