#include <iostream>
using namespace std;

void lab_2_2_12() {
    int h;
    cout << "Enter the pyramid height (3–8): ";
    cin >> h;

    if (h < 3 || h > 8) {
        cout << "Invalid height!" << endl;
        return;
    }

    const int pyramids = 3; // número de pirámides

    for (int row = 0; row < h; ++row) {
        for (int p = 0; p < pyramids; ++p) {
            for (int s = 0; s < h - row - 1; ++s) cout << ' ';
            for (int a = 0; a < 2 * row + 1; ++a) cout << '*';
            for (int s = 0; s < h - row; ++s) cout << ' ';
        }
        cout << endl;
    }

    // base de las pirámides
    for (int p = 0; p < pyramids; ++p) {
        for (int i = 0; i < 2 * h + 1; ++i) cout << '*';
    }
    cout << endl;
}
