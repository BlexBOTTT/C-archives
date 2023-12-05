// NOV 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// insertion sort

#include <iostream>
using namespace std;

/*void insertion(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int m = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < m) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = m;
	}
}

void print(int arr[], int n) {
	for (int d = 0; d < n; d++) {
		cout << arr[d] << " ";
	}
	cout << endl;
}

int main() {
	int array[] = { 8, 3, 5, 9, 1, 2 };
	int length = sizeof(array) / sizeof(array[0]);

	insertion(array, length);

	cout << " ";
	print(array, length);

	return 0;
}
*/

void insertion(int array[], int length) {
	int ce, pe, i;

	for (i = 1; length > i; i++) {
		// cout << array[i]; 
		pe = i-1;
		ce = i;

		// std::cout << array[ce] << " and " << array[pe] << endl;
		while (ce > 0 && array[pe] < array[ce]) {
	
			cout << "Swapped elements are " << array[ce] << " " << array[pe] << endl;
			swap(array[pe], array[ce]);
			ce++;
			pe--;
			
			
			
		}
	}
}

void print(int array[], int length) {
	int d = 0;

	while (d < length) {
		cout << array[d] << " ";
		d++;
		// 1 2 3 5 8 9
	}
}

int main() { // driver function
	int array[] = {8, 3, 5, 9, 1, 2};
	int length = sizeof(array) / sizeof(array[0]);

	insertion(array, length);
	print(array, length);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>

using namespace std;

