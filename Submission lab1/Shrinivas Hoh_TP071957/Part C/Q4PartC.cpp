#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask user for input
    cout << "Enter the number of rows for the diamond: ";
    cin >> rows;

    // Top half of the diamond (including middle row)
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = rows - 1; i >= 1; --i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
