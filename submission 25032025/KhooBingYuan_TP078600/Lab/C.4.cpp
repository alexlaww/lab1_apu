#include <iostream>

using namespace std;

int main() {
    int rows;

    // Get user input for the number of rows
    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;
    int i;
    // Upper half of the diamond
    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2*i -1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2*i -1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
