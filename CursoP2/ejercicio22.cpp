#include <iostream>
using namespace std;

void lab_2_2_14() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    unsigned long long factorial = 1;

    for (int i = 2; i <= n; ++i)
        factorial *= i;

    cout << factorial << endl;
}
