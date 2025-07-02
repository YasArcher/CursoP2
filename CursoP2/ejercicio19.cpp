#include <iostream>
using namespace std;

void lab_2_2_11() {
    int n;
    const int maxSize = 50;

    cout << "Enter the side size: ";
    cin >> n;

    if (n <= 1) {
        cout << "The side size must be greater than 1" << endl;
        return;
    }

    if (n > maxSize) {
        cout << "Sorry, the side size is too big" << endl;
        return;
    }

    // Top edge
    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;

    // Middle part
    for (int i = 0; i < n - 2; i++) {
        cout << '|';
        for (int j = 0; j < n - 2; j++)
            cout << ' ';
        cout << '|' << endl;
    }

    // Bottom edge
    cout << '+';
    for (int i = 0; i < n - 2; i++)
        cout << '-';
    cout << '+' << endl;
}
