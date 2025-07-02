#include <iostream>
#include <iomanip>
using namespace std;

void lab_3_1_4() {
    int matrix[10][10] = {};

    int* ptr = &matrix[0][0];
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            *(ptr + (i - 1) * 10 + (j - 1)) = i * j;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
}
