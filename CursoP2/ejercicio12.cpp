#include <iostream>
#include <iomanip>
using namespace std;

void lab_2_0_4() {
    int sys;
    float m, ft, in;

    cin >> sys;

    if (sys == 0) {
        cin >> m;
        if (m < 0) {
            cout << "Invalid input" << endl;
            return;
        }
        ft = static_cast<int>(m / 0.3048);
        in = (m - ft * 0.3048) / 0.0254;
        cout << fixed << setprecision(5);
        cout << ft << "'" << in << "\"" << endl;
    }
    else if (sys == 1) {
        cin >> ft >> in;
        if (ft < 0 || in < 0) {
            cout << "Invalid input" << endl;
            return;
        }
        m = (ft * 0.3048) + (in * 0.0254);
        cout << fixed << setprecision(5);
        cout << m << "m" << endl;
    }
    else {
        cout << "Invalid system" << endl;
    }
}
