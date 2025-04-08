#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rows = 4, cols = 5;
    int value = 1;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // Print left to right
            for (int j = 0; j < cols; j++) {
                cout << setw(4) << value++;
            }
        } else {
            // Print right to left
            int temp = value + cols - 1;
            for (int j = 0; j < cols; j++) {
                cout << setw(4) << temp--;
                value++;
            }
        }
        cout << endl;
    }

    return 0;
}
