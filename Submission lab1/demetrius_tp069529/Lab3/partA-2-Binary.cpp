#include <iostream>
#include <chrono> // Include library for measuring execution time
using namespace std;
using namespace std::chrono; // Use the chrono namespace

void binarySearch(int arr[], int size, int value);

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Array to be searched (must be sorted for binary search)
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int value = 3; // Value to search for

    // Binary Search
    auto start = high_resolution_clock::now(); // Start time
    binarySearch(arr, size, value);
    auto stop = high_resolution_clock::now(); // Stop time
    auto duration = duration_cast<microseconds>(stop - start); // Calculate duration
    cout << "Binary Search Time: " << duration.count() << " microseconds" << endl;

    return 0;
}

void binarySearch(int arr[], int size, int value) {
    int left = 0, right = size - 1; // Initialize left and right pointers
    while (left <= right) { // Loop until pointers meet
        int mid = left + (right - left) / 2; // Calculate mid index
        if (arr[mid] == value) { // If value is found
            cout << "Value " << value << " found at index " << mid << endl;
            return;
        }
        if (arr[mid] < value) // If value is greater, ignore left half
            left = mid + 1;
        else // If value is smaller, ignore right half
            right = mid - 1;
    }
    cout << "Value " << value << " not found" << endl;
}
