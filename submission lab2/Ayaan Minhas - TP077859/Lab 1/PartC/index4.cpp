#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter number of rows (for diamond top half incl. center): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    // Print top half (including the middle row)
    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    // Print bottom half (excluding the middle row)
    for (int i = n - 1; i >= 1; --i) {
        // Print leading spaces
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}