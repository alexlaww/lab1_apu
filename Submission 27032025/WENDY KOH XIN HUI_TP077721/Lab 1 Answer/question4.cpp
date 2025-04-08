#include <iostream>
using namespace std;

void printDiamond(int n) {
    int space = n - 1;

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print stars
        for (int j = 0; j <= i; j++)
            cout << "* ";

        cout << endl;
        space--;
    }

    // Lower half of the diamond
    space = 1; // Start with 1 space (since the middle line is already printed)

    for (int i = n - 1; i > 0; i--) {  // Start from n-1 to avoid repeating the middle line
        // Print leading spaces
        for (int j = 0; j < space; j++)
            cout << " ";

        // Print stars
        for (int j = 0; j < i; j++)
            cout << "* ";

        cout << endl;
        space++;
    }
}

int main() {
    int rows;
    cout<< "Please enter number of rows (for diamond (triangle) dimension): ";
    cin>>rows;

    printDiamond(rows);
    return 0;
}