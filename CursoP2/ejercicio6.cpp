#include <iostream>
using namespace std;

void lab_1_5_12() {
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;

    answer =
        (value >= 0 && value < 10) ||
        (value * 2 < 20 && value - 2 > -2) ||
        (value - 1 > 1 && value / 2 < 10) ||
        (value == 111);

    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}
