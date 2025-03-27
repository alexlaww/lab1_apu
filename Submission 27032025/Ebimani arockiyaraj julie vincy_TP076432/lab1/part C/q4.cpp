//4
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;

    // top half
    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); ++star) { //to print an odd number of stars
            cout << "*";
        }
        cout << endl;
    }

    // bottom half
    for (int i = rows - 1; i >= 1; --i) {
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        for (int star = 1; star <= (2 * i - 1); ++star) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}