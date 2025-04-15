#include <iostream>
using namespace std;

// Function to display numbers in reverse order (no loop, recursive)
void reverseNumber(int start, int end, int current) {
    if (current > end)
        return;
    reverseNumber(start, end, current + 1);
    cout << current;
    if (current != start) cout << " + ";
}

// Function to calculate sum recursively
int reverseNumberAndSum(int start, int end) {
    if (start > end)
        return 0;
    return start + reverseNumberAndSum(start + 1, end);
}

int main() {
    int startvalue, endvalue;

    cout << "Enter a start value: ";
    cin >> startvalue;

    cout << "Enter an end value: ";
    cin >> endvalue;

    cout << endl;
    reverseNumber(startvalue, endvalue, startvalue);
    cout << " = ";

    // Calculate and display sum
    cout << reverseNumberAndSum(startvalue, endvalue) << endl;
    return 0;
}
