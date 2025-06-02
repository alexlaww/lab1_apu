#include <iostream>
#include <chrono> // Include library for measuring execution time
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void linearSearch(int arr[], int size, int value);

int main() {
    int arr[] = {4, 2, 1, 3, 5}; // Array to be searched
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int value = 3; // Value to search for

    // Linear Search
    auto start = high_resolution_clock::now(); // Start time
    linearSearch(arr, size, value);
    auto stop = high_resolution_clock::now(); // Stop time
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration
    cout << "Linear Search Time: " << duration.count() << " microseconds" << endl;

    return 0;
}

void linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) { // Loop through the array
        if (arr[i] == value) { // If value is found
            cout << "Value " << value << " found at index " << i << endl;
            return;
        }
    }
    cout << "Value " << value << " not found" << endl;
}
