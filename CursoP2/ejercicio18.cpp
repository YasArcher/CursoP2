#include <iostream>
using namespace std;

void lab_2_2_10() {
    unsigned int n;
    cout << "Enter exponent (0 or greater): ";
    cin >> n;

    double result = 1.0;

    for (unsigned int i = 0; i < n; ++i)
        result /= 2.0;

    cout.precision(20);
    cout << result << endl;
}
