#include <iostream>
#include <chrono>
#include <algorithm> // for copy function
using namespace std;
using namespace std::chrono;

// Function to perform bubble sort 
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int billy[] = {4, 2, 1, 3, 5};
    int n = sizeof(billy) / sizeof(billy[0]);
    
    // Create copies of the original array for each sorting algorithm
    int bubbleArray[n], insertionArray[n];
    copy(billy, billy + n, bubbleArray);
    copy(billy, billy + n, insertionArray);
    
    cout << "Original array: ";
    printArray(billy, n);
    
    // Bubble Sort with timing
    auto start = high_resolution_clock::now();
    bubbleSort(bubbleArray, n);
    auto stop = high_resolution_clock::now();
    auto duration_bubble = duration_cast<microseconds>(stop - start);
    
    cout << "Bubble Sorted array: ";
    printArray(bubbleArray, n);
    cout << "Bubble Sort execution time: " << duration_bubble.count() << " microseconds" << endl;
    
    // Insertion Sort with timing
    start = high_resolution_clock::now();
    insertionSort(insertionArray, n);
    stop = high_resolution_clock::now();
    auto duration_insertion = duration_cast<microseconds>(stop - start);
    
    cout << "Insertion Sorted array: ";
    printArray(insertionArray, n);
    cout << "Insertion Sort execution time: " << duration_insertion.count() << " microseconds" << endl;
    
    return 0;
}