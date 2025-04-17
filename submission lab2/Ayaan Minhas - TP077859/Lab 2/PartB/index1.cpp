#include <iostream>

using namespace std;

// Function Prototypes
// Prints numbers recursively from end down to start
void reverseDisplayNumber(int current_end, int start_val);
// Calculates sum recursively from end down to start
int reverseDisplayNumberandSum(int current_end, int start_val);

int main() {
    int startvalue, endvalue;

    cout << "Enter a start value: ";
    cin >> startvalue;
    cout << "Enter an end value: ";
    cin >> endvalue;
    cout << endl;

    // Ensure start is less than or equal to end for sensible output
    if (startvalue > endvalue) {
        cout << "Warning: Start value is greater than end value. Swapping them." << endl;
        int temp = startvalue;
        startvalue = endvalue;
        endvalue = temp;
    }

    // Display the reversed sequence using recursion
    reverseDisplayNumber(endvalue, startvalue);

    // Calculate the sum using recursion
    int totalSum = reverseDisplayNumberandSum(endvalue, startvalue);

    // Display the sum
    cout << "= " << totalSum << endl;

    return 0;
}

// --- Function Definitions ---

// Prints numbers recursively from current_end down to start_val
void reverseDisplayNumber(int current_end, int start_val) {
    // Base case: stop when current value goes below start value
    if (current_end < start_val) {
        return;
    }

    // Print the current number
    cout << current_end;

    // Print "+" if it's not the last number (start_val)
    if (current_end > start_val) {
        cout << " + ";
    }

    // Recursive call for the next number down
    reverseDisplayNumber(current_end - 1, start_val);
}

// Calculates sum recursively from current_end down to start_val
int reverseDisplayNumberandSum(int current_end, int start_val) {
    // Base case: stop when current value goes below start value
    if (current_end < start_val) {
        return 0; // Sum contribution is 0
    }

    // Recursive step: current number + sum of the rest
    return current_end + reverseDisplayNumberandSum(current_end - 1, start_val);
}