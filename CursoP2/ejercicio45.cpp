#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Collection {
	int elno;
	int* elements;
};

void AddToCollection(Collection& col, int element) {
	if (col.elno == 0) {
		col.elements = new int[1];
		col.elements[0] = element;
		col.elno = 1;
	}
	else {
		int* newElements = new int[col.elno + 1];
		for (int i = 0; i < col.elno; i++) {
			newElements[i] = col.elements[i];
		}
		newElements[col.elno] = element;
		delete[] col.elements;
		col.elements = newElements;
		col.elno++;
	}
}

void PrintCollection(Collection col) {
	cout << "[ ";
	for (int i = 0; i < col.elno; i++)
		cout << col.elements[i] << " ";
	cout << "]" << endl;
}

void lab_3_9_6() {
	Collection collection = { 0, NULL };

	int elems;
	cout << "How many elements? ";
	cin >> elems;
	srand(time(NULL));
	for (int i = 0; i < elems; i++)
		AddToCollection(collection, rand() % 100 + 1);

	PrintCollection(collection);
	delete[] collection.elements;
}
