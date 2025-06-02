#include <iostream> // Include the library for input and output
using namespace std; // Use the standard namespace

int main() {
    int numbers[10]; // Array to store 10 numbers
    int count = 0; // Counter for unique numbers

    while (count < 10) { // Loop until 10 unique numbers are entered
        int value; // Variable to store user input
        bool isDuplicate = false; // Flag to check for duplicates

        cout << "Enter value: "; // Prompt user for input
        cin >> value; // Read user input

        // Check if the value is a duplicate
        for (int i = 0; i < count; i++) {
            if (numbers[i] == value) { // If duplicate found
                isDuplicate = true; // Set flag to true
                break; // Exit the loop
            }
        }

        if (isDuplicate) { // If value is a duplicate
            cout << "Already in the List! Please choose another value!" << endl; // Inform user
        } else { // If value is not a duplicate
            numbers[count] = value; // Store value in array
            count++; // Increment counter
        }
    }

    // Print the unique values
    cout << "\nArray values are: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i]; // Print each value
        if (i < count - 1) {
            cout << ", "; // Print comma between values
        }
    }
    cout << endl; // New line after printing values

    return 0; // End of program
}
