// MT AAC Lecture Quirante2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int sorting_array(int array[], int length) {

    bool swapped;

    for (int i = 0; i < length - 1; i++) {
        swapped = false;

        for (int j = 0; j < length - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    return 0;
}

void print_array(int array[], int N) {
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    
} 


int main() {
    int array[] = { 9, 5, 1, 6, 7, 2 };
    int length = sizeof(array) / sizeof(array[0]);

    
    sorting_array(array, length);

    print_array(array, length);
    /*
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    */

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
