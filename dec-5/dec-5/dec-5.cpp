// dec-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Add appropriate extensions
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void findMin(int set) {
    // Array of coin denominations
    int denomination[] = {1, 5, 10, 20, 50, 100, 200, 500, 1000 };
    // Calculate the number of elements in the array
    int len = sizeof(denomination) / sizeof(denomination[0]);
    // Sort the array of denominations in ascending order
    sort(denomination, denomination + len);
    // Vector to store the selected denominations for the minimal number of coins
    vector<int> ans;

    // Iterate through the sorted denominations in descending order
    for (int i = len - 1; i >= 0; i--) {
        // Greedily select the highest denomination that is less than or equal to V
        while (set >= denomination[i]) {
            // Subtract the selected denomination from the remaining value
            set -= denomination[i];
            // Add the selected denomination to the result vector
            ans.push_back(denomination[i]);
        }
    }

    // Print the minimal number of coins
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    // Initial value for which we want to find the minimal number of coins
    int set = 1898;

    // Display the input value
    cout << "Following is minimal number of coins for " << set << ": ";

    // Call the function to find the minimal number of coins and display the result
    findMin(set);

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
