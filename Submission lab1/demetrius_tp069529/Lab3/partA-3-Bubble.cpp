#include <iostream>
#include <chrono> // Include library for measuring execution time
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void bubbleSort(int arr[], int size);

int main() {
    int arr[] = {4, 2, 1, 3, 5}; // Array to be sorted
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Bubble Sort
    auto start = high_resolution_clock::now(); // Start time
    bubbleSort(arr, size);
    auto stop = high_resolution_clock::now(); // Stop time
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration
    cout << "Bubble Sort Time: " << duration.count() << " microseconds" << endl;

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) { // Loop through the array
        for (int j = 0; j < size - i - 1; j++) { // Loop through the array
            if (arr[j] > arr[j + 1]) { // If the current element is greater than the next
                swap(arr[j], arr[j + 1]); // Swap the elements
            }
        }
    }
}
