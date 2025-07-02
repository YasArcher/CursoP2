#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool alreadyDrawn(int* drawn, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (drawn[i] == value)
            return true;
    }
    return false;
}

void lab_3_9_5() {
    int maxball;
    int ballsno;

    cout << "Max ball number? ";
    cin >> maxball;
    cout << "How many balls? ";
    cin >> ballsno;

    if (ballsno > maxball) {
        cout << "You can't draw more balls than exist!" << endl;
        return;
    }

    srand(time(NULL));
    int* drawn = new int[ballsno];
    int count = 0;

    while (count < ballsno) {
        int rnd = rand() % maxball + 1;
        if (!alreadyDrawn(drawn, count, rnd)) {
            drawn[count++] = rnd;
        }
    }

    cout << "Drawn numbers: ";
    for (int i = 0; i < ballsno; ++i) {
        cout << drawn[i] << " ";
    }
    cout << endl;

    delete[] drawn;
}
