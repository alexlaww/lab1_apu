#include <iostream>
#include <vector>
#include <algorithm> // Needed for std::sort
#include <chrono>    // Needed for time measurement
#include <iomanip>   // For output formatting

using namespace std;

// Function to check if a value exists (from Q1)
bool isDuplicate(const vector<int>& arr, int count, int value) {
    for (int i = 0; i < count; ++i) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

// Linear Search Function
// Returns index if found, -1 otherwise
int linearSearch(const vector<int>& arr, int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i; // Return index where value is found
        }
    }
    return -1; // Value not found
}

// Binary Search Function (Requires a SORTED array)
// Returns index if found, -1 otherwise
int binarySearch(const vector<int>& arr, int size, int value) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoid potential overflow

        if (arr[mid] == value) {
            return mid; // Value found at mid index
        } else if (arr[mid] < value) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Value not found
}

int main() {
    const int SIZE = 10;
    vector<int> numbers(SIZE);
    int count = 0;
    int currentValue;
    int searchValue;

    // --- Fill the array with unique numbers (same logic as Q1) ---
    cout << "Enter " << SIZE << " unique integer values." << endl;
    while (count < SIZE) {
        cout << "Enter value " << (count + 1) << ": ";
        cin >> currentValue;
        if (isDuplicate(numbers, count, currentValue)) {
            cout << "Value already in the list! Please choose other value!" << endl;
        } else {
            numbers[count] = currentValue;
            count++;
        }
    }
    cout << "\nArray filled: ";
    for (int i = 0; i < SIZE; ++i) cout << numbers[i] << " ";
    cout << endl << endl;

    // --- Get value to search for ---
    cout << "Enter the value to search for: ";
    cin >> searchValue;
    cout << endl;

    // --- Linear Search ---
    cout << "--- Linear Search ---" << endl;
    auto start_linear = chrono::high_resolution_clock::now();
    int linear_index = linearSearch(numbers, SIZE, searchValue);
    auto end_linear = chrono::high_resolution_clock::now();
    auto duration_linear = chrono::duration_cast<chrono::nanoseconds>(end_linear - start_linear);

    if (linear_index != -1) {
        cout << "Value " << searchValue << " found at index " << linear_index << "." << endl;
    } else {
        cout << "Value " << searchValue << " not found." << endl;
    }
    cout << "Linear search execution time: " << duration_linear.count() << " nanoseconds." << endl;
    cout << endl;

    // --- Binary Search ---
    cout << "--- Binary Search ---" << endl;
    // 1. Create a copy and sort it (or sort the original if modification is okay)
    vector<int> sorted_numbers = numbers; // Make a copy
    sort(sorted_numbers.begin(), sorted_numbers.end()); // Sort the copy

    cout << "Sorted array for binary search: ";
    for (int i = 0; i < SIZE; ++i) cout << sorted_numbers[i] << " ";
    cout << endl;

    // 2. Perform binary search on the sorted copy
    auto start_binary = chrono::high_resolution_clock::now();
    int binary_index = binarySearch(sorted_numbers, SIZE, searchValue);
    auto end_binary = chrono::high_resolution_clock::now();
    auto duration_binary = chrono::duration_cast<chrono::nanoseconds>(end_binary - start_binary);

    if (binary_index != -1) {
        // Note: The index is for the SORTED array
        cout << "Value " << searchValue << " found at index " << binary_index << " in the sorted array." << endl;
    } else {
        cout << "Value " << searchValue << " not found." << endl;
    }
    cout << "Binary search execution time: " << duration_binary.count() << " nanoseconds." << endl;

    return 0;
}