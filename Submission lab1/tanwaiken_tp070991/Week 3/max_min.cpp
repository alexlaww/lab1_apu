#include <iostream>
#include <vector>  // Using vector for dynamic arrays
using namespace std;

int findMax(const vector<int>& numbers) {
    int max = numbers[0];  // Initialize with the first element

    for (int i = 1; i < numbers.size(); i++) {  // Start from index 1
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int findMin(const vector<int>& numbers) {

    int min = numbers[0];  // Initialize with the first element

    for (int i = 1; i < numbers.size(); i++) {  // Start from index 1
        if (numbers[i] < min) {  // Fix: Use < instead of >
            min = numbers[i];
        }
    }

    return min;
}

int main() {
    int size = 0;

    // Get the size of the array
    while (true) {
        cout << "Give me the size: ";
        cin >> size;

        if (cin.fail() || size <= 0) {
            cin.clear();  // Reset cin state
            cin.ignore(1000, '\n');  // Ignore invalid input
            cout << "Please enter a valid positive number.\n";
        } else {
            break;
        }
    }

    vector<int> numbers(size);  // Dynamic array

    // Get the numbers from the user
    for (int i = 0; i < size; i++) {
        cout << "Give me the number: ";
        cin >> numbers[i];

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Enter an integer.\n";
            i--;  // Retry this index
        }
    }

    // Print max and min values
    cout << "Max: " << findMax(numbers) << "\n";
    cout << "Min: " << findMin(numbers) << "\n";

    return 0;
}