#include <iostream>
using namespace std;


int sorting_array(int array[], int N) {
	bool swapped;
	for (i = 0; 1 < N - 1) {
		swapped = false;

		for int(j = 0; j < N-1; j++) {

			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				swapped = true;
			}
		}

		if (swapped = false) {
			break;
		}
	}
	return 0;
}

int main() {
	int array[] = { 9, 5, 1, 6, 7, 2 };
	int length = sizeof(array) / sizeof(array[0]);
	sorting_array(array, length);
	
}
		