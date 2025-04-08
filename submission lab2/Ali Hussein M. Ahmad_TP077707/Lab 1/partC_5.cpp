#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int numbers_per_row = 5;
    int count = 0;

    cout << "Even numbers between 1 and 50:\n";
    cout << "|";

    for (int i = 2; i <= 50; i += 2) {
        cout << setw(4) << i << "  |";
        count++;
        
        if (count % numbers_per_row == 0) {
            cout << "\n|";
        }
    }

    while (count % numbers_per_row != 0) {
        cout << setw(4) << " " << "  |";
        count++;
    }

    return 0;
}