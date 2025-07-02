#include <iostream>
#include <iomanip>
using namespace std;

void lab_3_1_3() {
    int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
    int n = sizeof(vector) / sizeof(vector[0]);

    int* ptr = vector;
    int* end = vector + n;

    int min = *ptr;
    while (ptr < end) {
        if (*ptr < min) {
            min = *ptr;
        }
        ptr++;
    }

    cout << "Minimum value: " << min << endl;
}
