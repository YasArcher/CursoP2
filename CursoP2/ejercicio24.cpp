#include <iostream>
using namespace std;

void lab_2_3_6() {
    unsigned long value;
    cout << "Enter a number: ";
    cin >> value;

    int ones = 0;

    while (value != 0) {
        if (value & 1)
            ones++;
        value >>= 1; // Desplazar a la derecha para verificar el siguiente bit
    }

    cout << ones << endl;
}
