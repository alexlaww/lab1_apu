#include <iostream>
#include <vector>
#include <chrono>    // For time measurement
#include <iomanip>   // For output formatting
#include <algorithm> // For std::copy

using namespace std;

// Bubble Sort Function (Sorts in place)
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped) break;
    }
}

// Insertion Sort Function (Sorts in place)
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Helper function to print vector elements
void printVector(const string& label, const vector<int>& arr) {
    cout << label;
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << endl;
}

int main() {
    vector<int> billy = {4, 2, 1, 3, 5};

    cout << "Original array (billy): ";
    printVector("", billy);
    cout << endl;

    // --- Bubble Sort ---
    vector<int> billy_bubble = billy; // Create a copy for bubble sort
    cout << "--- Bubble Sort ---" << endl;

    auto start_bubble = chrono::high_resolution_clock::now();
    bubbleSort(billy_bubble);
    auto end_bubble = chrono::high_resolution_clock::now();
    auto duration_bubble = chrono::duration_cast<chrono::nanoseconds>(end_bubble - start_bubble);

    printVector("Sorted array: ", billy_bubble);
    cout << "Bubble sort execution time: " << duration_bubble.count() << " nanoseconds." << endl;
    cout << endl;

    // --- Insertion Sort ---
    vector<int> billy_insertion = billy; // Create a copy for insertion sort
    cout << "--- Insertion Sort ---" << endl;

    auto start_insertion = chrono::high_resolution_clock::now();
    insertionSort(billy_insertion);
    auto end_insertion = chrono::high_resolution_clock::now();
    auto duration_insertion = chrono::duration_cast<chrono::nanoseconds>(end_insertion - start_insertion);

    printVector("Sorted array: ", billy_insertion);
    cout << "Insertion sort execution time: " << duration_insertion.count() << " nanoseconds." << endl;

    return 0;
}