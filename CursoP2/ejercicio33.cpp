#include <iostream>
#include <iomanip>
using namespace std;

void lab_2_9_3() {
    struct Time {
        int hour;
        int minute;
    };

    Time start, end;
    cin >> start.hour >> start.minute;
    cin >> end.hour >> end.minute;

    int startTotal = start.hour * 60 + start.minute;
    int endTotal = end.hour * 60 + end.minute;

    int duration = endTotal - startTotal;
    int durHour = duration / 60;
    int durMin = duration % 60;

    cout << durHour << ":" << durMin << endl;
}
