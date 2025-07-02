#include <iostream>
#include <cmath>
using namespace std;

void lab_1_6_5() {
    int x, y;
    const float epsilon = 0.000001f;

    cin >> x >> y;

    float inv_x = 1.0f / x;
    float inv_y = 1.0f / y;

    if (fabs(inv_x - inv_y) < epsilon)
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    else
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
}
