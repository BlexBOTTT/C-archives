// Nov_28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//////LINEAR SEARCH ALGORITHM
int search(int arr[], int n, int x, int y) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == x && arr[i] == y) {
			cout << arr[i] << " and " << x << " are equal" << endl;
			return 1;
		}
		else if (arr[i] == x || arr[i] == y) {

		}
		else {
			cout << arr[i] << " and " << x << " are not equal" << endl;
		}
	}
	return 0;
	
}

int main() {
	//// INITIALIZE AND DECLARE ARRAY AND IT'S LENGTH
	int array1[] = { 90, 76, 45, 34, 56, 22, 13, 9 };
	int length = sizeof(array1) / sizeof(array1[0]);

	// TAKE USER INPUT FOR x
	int x;
	cout << "Enter the value of x: ";
	cin >> x;

	// TAKE USER INPUT FOR y
	int y;
	cout << "Enter the value of y: ";
	cin >> y;

	//// CALL THE FUNCTION FOR SEARCHING
	int result = search(array1, length, x, y);

	cout << result << endl;

	if (result == 1) {
		cout << x << " is in the array" << endl;
	}
	else {
		cout << x << " is not in the array" << endl;
	}

	cout << "sep" << endl;
	cout << "sep" << endl;

	int result2 = search(array1, length, x, y);

	cout << result << endl;

	if (result == 1) {
		cout << x << " is in the array" << endl;
	}
	else {
		cout << x << " is not in the array" << endl;
	}

	return 0;
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
