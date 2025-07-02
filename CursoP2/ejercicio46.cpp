#include <iostream>
#include <iomanip>
using namespace std;

void lab_4_0_3() {
    int courses;
    cin >> courses;

    int** grades = new int* [courses];
    int* counts = new int[courses];

    for (int i = 0; i < courses; ++i) {
        int n;
        cin >> n;
        counts[i] = n;
        grades[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            cin >> grades[i][j];
        }
    }

    double total = 0;

    for (int i = 0; i < courses; ++i) {
        double sum = 0;
        for (int j = 0; j < counts[i]; ++j) {
            sum += grades[i][j];
        }
        double avg = sum / counts[i];
        total += avg;

        cout << fixed << setprecision(2);
        cout << "Course " << i + 1 << ": final " << avg << ", grades:";
        for (int j = 0; j < counts[i]; ++j) {
            cout << " " << grades[i][j];
        }
        cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << "Overall final " << total / courses << endl;

    for (int i = 0; i < courses; ++i) {
        delete[] grades[i];
    }
    delete[] grades;
    delete[] counts;
}
