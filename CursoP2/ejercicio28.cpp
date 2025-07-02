#include <iostream>
using namespace std;

void lab_2_8_5() {
    int amount;
    cin >> amount;

    int notes[] = { 50, 20, 10, 5, 1 };

    for (int i = 0; i < 5; i++) {
        while (amount >= notes[i]) {
            cout << notes[i] << " ";
            amount -= notes[i];
        }
    }

    cout << endl;
}
