#include <iostream>

using namespace std;

void lab_2_8_8() {
	double matrix[][4] = {
		{ 1, 2, 3, 4 },
		{ 2, 2, 3, 1 },
		{ 3, 3, 3, 2 },
		{ 4, 1, 2, 4 }
	};

	int side = sizeof(matrix[0]) / sizeof(matrix[0][0]);
	bool issymmetric = true;

	for (int i = 0; i < side && issymmetric; i++) {
		for (int j = 0; j < side; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				issymmetric = false;
				break;
			}
		}
	}

	if (issymmetric)
		cout << "The matrix is symmetric" << endl;
	else
		cout << "The matrix is not symmetric" << endl;
}
