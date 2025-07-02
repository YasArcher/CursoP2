#include <iostream>
#include <cmath>

using namespace std;

void lab_2_8_7() {
    double vector[] = { 1., 2., 3., 4., 5. };
    int n = sizeof(vector) / sizeof(vector[0]);
    double ArithmeticMean = 0;
    double HarmonicMean = 0;
    double GeometricMean = 1;
    double RootMeanSquare = 0;

    for (int i = 0; i < n; i++) {
        ArithmeticMean += vector[i];
        HarmonicMean += 1.0 / vector[i];
        GeometricMean *= vector[i];
        RootMeanSquare += vector[i] * vector[i];
    }

    ArithmeticMean /= n;
    HarmonicMean = n / HarmonicMean;
    GeometricMean = pow(GeometricMean, 1.0 / n);
    RootMeanSquare = sqrt(RootMeanSquare / n);

    cout << "Arithmetic Mean = " << ArithmeticMean << endl;
    cout << "Harmonic Mean   = " << HarmonicMean << endl;
    cout << "Geometric Mean  = " << GeometricMean << endl;
    cout << "RootMean Square = " << RootMeanSquare << endl;
    cout << endl;
}
