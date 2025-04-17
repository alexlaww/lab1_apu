#include <iostream>
#include <iomanip> // For setw

using namespace std;

int main() {
    int count = 0; // Counter for numbers printed on the current line

    cout << "Even numbers between 1 and 50:" << endl;

    for (int i = 2; i <= 50; i += 2) {
        cout << setw(4) << i; // Print number with some width for alignment
        count++;
        
        // If 5 numbers are printed on the line, start a new line
        if (count == 5) {
            cout << endl;
            count = 0; // Reset counter for the new line
        }
    }

    // Add a final newline if the last line wasn't full (optional but good practice)
    if (count != 0) {
        cout << endl;
    }

    return 0;
}