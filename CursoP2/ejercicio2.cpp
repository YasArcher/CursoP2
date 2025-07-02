#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void lab_1_2_5() {
    int secondsInThreeHours = 3 * 60 * 60;
    int secondsInThreeMinutes = 3 * 60;
    int secondsInFiveMinutes = 5 * 60;

    float pi = 3.141526;

    cout << "Segundos en 3 horas: " << secondsInThreeHours << endl;
    cout << "Segundos en 3 minutos: " << secondsInThreeMinutes << endl;
    cout << "Segundos en 5 minutos: " << secondsInFiveMinutes << endl;
    cout << "Valor de pi: " << fixed << setprecision(6) << pi << endl;
}
