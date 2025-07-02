#include <iostream>
using namespace std;

void lab_2_2_7() {
    long long c0;
    cout << "Enter a natural number: ";
    cin >> c0;

    if (c0 <= 0) {
        cout << "The number must be a natural number (greater than 0)." << endl;
        return;
    }

    int steps = 0;
    while (c0 != 1) {
        if (c0 % 2 == 0)
            c0 /= 2;
        else
            c0 = 3 * c0 + 1;

        cout << c0 << endl;
        steps++;
    }

    cout << "steps = " << steps << endl;
}
