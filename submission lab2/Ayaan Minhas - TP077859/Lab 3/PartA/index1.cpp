#include <iostream>
#include <vector> // Use vector for dynamic size, easier than fixed array if needed
#include <iomanip> // For formatting output if desired

using namespace std;

// Function to check if a value exists in the first 'count' elements of an array/vector
bool isDuplicate(const vector<int>& arr, int count, int value) {
    for (int i = 0; i < count; ++i) {
        if (arr[i] == value) {
            return true; // Found a duplicate
        }
    }
    return false; // No duplicate found
}

int main() {
    const int SIZE = 10;
    vector<int> numbers(SIZE); // Creates a vector of size 10, initialized to 0
    int count = 0;             // Number of unique elements currently stored
    int currentValue;

    cout << "Enter " << SIZE << " unique integer values." << endl;

    while (count < SIZE) {
        cout << "Enter value " << (count + 1) << ": ";
        cin >> currentValue;

        // Check for duplicates among the 'count' numbers already entered
        if (isDuplicate(numbers, count, currentValue)) {
            cout << "Value already in the list! Please choose other value!" << endl;
            // No increment of count, loop continues asking for the same position
        } else {
            numbers[count] = currentValue; // Store the unique value
            count++;                      // Increment the count of unique numbers stored
        }
    }

    // Print the collected unique numbers
    cout << "\nYou entered the following unique numbers: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << numbers[i] << (i == SIZE - 1 ? "" : ", "); // Print with commas, no comma at end
    }
    cout << endl;

    return 0;
}