#include <iostream>
using namespace std;

// Function to reverse display numbers and keep track of the current number
void reverseDisplayNumber(int number1, int number2, int current) {
    // Base case: if we've processed all numbers
    if (current < number1)
        return;
    
    // Print the current number
    cout << current;
    
    // Add a "+" sign if this is not the last number
    if (current > number1)
        cout << " + ";
    
    // Recursive call with the next smaller number
    reverseDisplayNumber(number1, number2, current - 1);
}

// Function to reverse display numbers and calculate their sum
int reverseDisplayNumberandSum(int number1, int number2) {
    // Base case: if number1 > number2, return 0
    if (number1 > number2)
        return 0;
    
    // Recursive case: add number2 to the sum of remaining numbers
    return number2 + reverseDisplayNumberandSum(number1, number2 - 1);
}

int main() {
    int startvalue, endvalue;
    
    // Get input from user
    cout << "Enter a start value: ";
    cin >> startvalue;
    
    cout << "Enter a end value: ";
    cin >> endvalue;
    
    cout << endl;
    
    // Display numbers in reverse order
    reverseDisplayNumber(startvalue, endvalue, endvalue);
    
    // Calculate and display sum
    cout << " = " << reverseDisplayNumberandSum(startvalue, endvalue) << endl;
    
    return 0;
}