#include <iostream>
using namespace std;

void lab_2_8_4() {
    int vector1[7] = { 4, 7, 2, 8, 1, 3, 0 };
    int vector2[7];

    int size = 7;
    vector2[0] = vector1[size - 1]; // último elemento va primero

    for (int i = 1; i < size; i++) {
        vector2[i] = vector1[i - 1];
    }

    for (int i = 0; i < size; i++)
        cout << vector2[i] << ' ';
    cout << endl;
}
