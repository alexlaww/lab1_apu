#include <iostream>
using namespace std;

// Function to reverse print numbers (handles both start > end and start < end cases)
void reverseDisplay(int current, int end) {
    if (current == end) {           // Base case: stop when current reaches end
        cout << current;
        return;
    }
    // Recursive cases
    if (current > end) {
        cout << current << " + ";
        reverseDisplay(current - 1, end);
    } else {
        cout << current << " + ";
        reverseDisplay(current + 1, end);
    }
}

// Function to calculate sum (handles all cases recursively)
int calculateSum(int current, int end) {
    if (current == end) return end; // Base case
    if (current > end) {
        return current + calculateSum(current - 1, end);
    } else {
        return current + calculateSum(current + 1, end);
    }
}

int main() {
    int start, end;
    
    cout << "Enter start value: ";
    cin >> start;
    cout << "Enter end value: ";
    cin >> end;
    cout << "\nThe numbers are: ";
    
    reverseDisplay(start, end);
    
    int sum = calculateSum(start, end);
    cout << "\nThe sum is: " << sum << endl;
    
    return 0;
}