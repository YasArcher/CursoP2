#include <iostream>
#include <iomanip>
using namespace std;

void increment(int& x) {
    x += 1;
}

void increment(int& x, int y) {
    x += y;
}

void lab_3_5_4() {
    int var = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2)
            increment(var);
        else
            increment(var, i);
    }
    cout << var << endl;
}
