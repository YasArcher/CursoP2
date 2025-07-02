#include <iostream>
#include <iomanip>
using namespace std;

void lab_2_9_2() {
    struct Time {
        int hour;
        int minute;
    };

    Time t;
    cin >> t.hour >> t.minute;

    if (t.hour < 0 || t.hour > 23 || t.minute < 0 || t.minute > 59) {
        cout << "Invalid input." << endl;
        return;
    }

    int duration;
    cin >> duration;

    int totalMinutes = t.hour * 60 + t.minute + duration;
    totalMinutes %= 1440;

    t.hour = totalMinutes / 60;
    t.minute = totalMinutes % 60;

    cout << setfill('0') << setw(2) << t.hour << ":"
        << setfill('0') << setw(2) << t.minute << endl;
}
