#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;

    if (rows < 1) {
        cout << "Number of rows must be at least 1!" << endl;
        return 1;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}