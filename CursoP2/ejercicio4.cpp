#include <iostream>
#include <cmath>
using namespace std;

void lab_1_3_19() {
    float pi = 3.14159265359;
    float x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    float x2 = x * x;
    float term1 = x2 / (pi * pi * (x2 + 0.5f));
    float term2 = x2 / (pi * pi * pow(x2 - 0.5f, 2));
    y = term1 * (1 + term2);

    cout << "y = " << y << endl;
}
