#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void increment(int& x) {
    x += 1;
}

void increment(int& x, int y) {
    x += y;
}

void increment(float& x) {
    x += 1.0f;
}

void increment(float& x, float y) {
    x += y;
}

void lab_3_7_8() {
    int intvar = 0;
    float floatvar = 1.5;

    for (int i = 0; i < 10; i++) {
        if (i % 2) {
            increment(intvar);
            increment(floatvar, sqrt(intvar));
        }
        else {
            increment(intvar, i);
            increment(floatvar);
        }
    }

    cout << intvar * floatvar << endl;
}
