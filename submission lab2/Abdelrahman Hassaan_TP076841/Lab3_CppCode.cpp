
#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

// Function to check if a number is duplicate
bool isDuplicate(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

// Function for Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Found at index i
        }
    }
    return -1; // Not found
}

// Function for Binary Search
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid; // Found at mid
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Not found
}

// Function for Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function for Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Part 1: Reading 10 numbers and checking duplicates
    int arr[10];
    int size = 0;

    cout << "Enter 10 numbers: ";
    while (size < 10) {
        int num;
        cin >> num;
        if (!isDuplicate(arr, size, num)) {
            arr[size] = num;
            size++;
            cout << num << " ";
        }
    }
    cout << endl;

    // Part 2: Searching for a value in the array using Linear and Binary Search
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    clock_t start = clock();
    int index = linearSearch(arr, size, key);
    clock_t end = clock();
    double linearTime = double(end - start) / CLOCKS_PER_SEC;
    if (index != -1)
        cout << "Linear Search: Value found at index " << index << endl;
    else
        cout << "Linear Search: Value not found" << endl;

    cout << "Linear Search Execution Time: " << linearTime << " seconds" << endl;

    // Binary search requires sorting first
    bubbleSort(arr, size);
    start = clock();
    index = binarySearch(arr, size, key);
    end = clock();
    double binaryTime = double(end - start) / CLOCKS_PER_SEC;

    if (index != -1)
        cout << "Binary Search: Value found at index " << index << endl;
    else
        cout << "Binary Search: Value not found" << endl;

    cout << "Binary Search Execution Time: " << binaryTime << " seconds" << endl;

    // Part 3: Sorting array using Bubble and Insertion Sort
    int billy[] = {4, 2, 1, 3, 5};
    int billySize = sizeof(billy) / sizeof(billy[0]);

    cout << "Original array: ";
    displayArray(billy, billySize);

    // Bubble sort
    bubbleSort(billy, billySize);
    cout << "Bubble Sorted array: ";
    displayArray(billy, billySize);

    // Insertion sort
    int billyCopy[] = {4, 2, 1, 3, 5};  // Copy for insertion sort
    insertionSort(billyCopy, billySize);
    cout << "Insertion Sorted array: ";
    displayArray(billyCopy, billySize);

    return 0;
}
