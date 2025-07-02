#include <iostream>
using namespace std;

void lab_2_2_13() {
    int n;
    cout << "Enter Fibonacci term index (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. n must be positive." << endl;
        return;
    }

    unsigned long long a = 1, b = 1, fib;

    if (n == 1 || n == 2) {
        cout << "1" << endl;
        return;
    }

    for (int i = 3; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << fib << endl;
}
