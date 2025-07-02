#include <iostream>
using namespace std;

void lab_2_3_7() {
	unsigned short int val;
	bool ispalindrome = false;

	cout << "value = ";
	cin >> val;

	unsigned short int reversed = 0;
	unsigned short int original = val;

	for (int i = 0; i < 16; i++) {
		reversed <<= 1;
		reversed |= (val & 1);
		val >>= 1;
	}

	if (reversed == original)
		ispalindrome = true;

	if (ispalindrome)
		cout << original << " is a bitwise palindrome" << endl;
	else
		cout << original << " is not a bitwise palindrome" << endl;
}
