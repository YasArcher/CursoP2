#include <iostream>
using namespace std;

void lab_2_2_8() {
    double pi4 = 0.0;
    long n;

    cout << "Number of iterations? ";
    cin >> n;

    for (long i = 0; i < n; ++i) {
        if (i % 2 == 0)
            pi4 += 1.0 / (2 * i + 1);
        else
            pi4 -= 1.0 / (2 * i + 1);
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.0) << endl;
}
