#include <iostream>
#include <string>
using namespace std;

void lab_2_0_6() {
    int year, a, b, c, d, e;
    cout << "Ingrese el año: ";
    cin >> year;

    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (19 * a + 24) % 30;
    e = (2 * b + 4 * c + 6 * d + 5) % 7;

    int total = d + e;
    if (total < 10)
        cout << "March " << (total + 22) << endl;
    else
        cout << "April " << (total - 9) << endl;
}
