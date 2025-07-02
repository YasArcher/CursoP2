#include <iostream>
using namespace std;

void lab_2_2_15() {
    unsigned int n;
    cout << "Enter an odd number: ";
    cin >> n;

    if (n % 2 == 0 || n == 0) {
        cout << "Input must be a positive odd number." << endl;
        return;
    }

    // El valor en la esquina inferior derecha de una espiral de tamaño n es siempre n^2 - (n - 1)
    unsigned long long result = static_cast<unsigned long long>(n) * n - (n - 1);
    cout << result << endl;
}
