#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int max = 50;
    const int cols = 5;
    int numbers[25];
    int index = 0;

    // Step 1: Store even numbers from 2 to 50
    for (int i = 2; i <= max; i += 2) {
        numbers[index++] = i;
    }

    // Step 2: Print column-wise layout with 5 numbers per row
    for (int row = 0; row < 5; ++row) {
        for (int col = 0; col < 5; ++col) {
            int idx = col * 5 + row;
            if (idx < 25) {
                cout << setw(4) << numbers[idx];
            }
        }
        cout << endl;
    }

    return 0;
}
