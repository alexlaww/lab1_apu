#include <iostream>
#include <chrono> // Include library for measuring execution time
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void insertionSort(int arr[], int size);

int main() {
    int arr[] = {4, 2, 1, 3, 5}; // Array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Insertion Sort
    auto start = high_resolution_clock::now(); // Start time
    insertionSort(arr, size); // Corrected function name
    auto stop = high_resolution_clock::now(); // Stop time
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration
    cout << "Insertion Sort Time: " << duration.count() << " microseconds" << endl;

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) { // Loop through the array
        int key = arr[i]; // Store the current element
        int j = i - 1;
        while (j >= 0 && arr[j] > key) { // Move elements of arr[0..i-1] that are greater than key
            arr[j + 1] = arr[j]; // Move element one position ahead
            j = j - 1;
        }
        arr[j + 1] = key; // Place the key at the correct position
    }
}
