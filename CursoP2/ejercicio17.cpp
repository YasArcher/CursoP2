#include <iostream>
using namespace std;

void lab_2_2_9() {
    unsigned int n;
    cout << "Enter exponent (0–63): ";
    cin >> n;

    if (n > 63) {
        cout << "Value too large! Must be between 0 and 63." << endl;
        return;
    }

    unsigned long long result = 1;
    for (unsigned int i = 0; i < n; ++i)
        result *= 2;

    cout << result << endl;
}
