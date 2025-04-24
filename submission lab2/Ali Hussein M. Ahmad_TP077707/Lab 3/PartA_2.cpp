#include <iostream>
#include <chrono>
#include <algorithm> // for sort() function
using namespace std;
using namespace std::chrono;

// Function to perform binary search on a sorted array
bool binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return true;
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    // target not found 
    return false;
}

// Function to perform linear search
bool linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

// Function to insert value at the correct position in a sorted array 
void insertSorted(int arr[], int &count, int value) {
    // find the position where the new element should be inserted
    int i;
    for (i = count - 1; (i >= 0 && arr[i] > value); i--) {
        arr[i + 1] = arr[i]; // shift elements to the right
    }

    arr[i + 1] = value; // Insert the value at the correct position
    count++; // increment count of elements
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int count = 0;
    
    // Read 10 unique numbers
    while (count < SIZE) {
        cout << "Enter value " << (count + 1) << ": ";
        int value;
        cin >> value;
        
        bool isDuplicate = false;
        for (int i = 0; i < count; i++) {
            if (numbers[i] == value) {
                isDuplicate = true;
                break;
            }
        }
        
        if (isDuplicate) {
            cout << "Value already in the list! Please choose other value!" << endl;
        } else {
            numbers[count] = value;
            count++;
        }
    }
    
    // Print all unique values
    cout << "\nUnique numbers entered: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    // Create a sorted copy of the array for binary search
    int sortedNumbers[SIZE];
    copy(numbers, numbers + SIZE, sortedNumbers);
    sort(sortedNumbers, sortedNumbers + SIZE);
    
    // Search for a value
    int target;
    cout << "\nEnter a value to search: ";
    cin >> target;
    
    // Linear search on original array
    auto start = high_resolution_clock::now();
    bool foundLinear = linearSearch(numbers, SIZE, target);
    auto stop = high_resolution_clock::now();
    auto durationLinear = duration_cast<nanoseconds>(stop - start);
    
    cout << "Linear search: ";
    cout << (foundLinear ? "Found" : "Not found");
    cout << " (Time: " << durationLinear.count() << " nanoseconds)" << endl;
    
    // Binary search on sorted array
    start = high_resolution_clock::now();
    bool foundBinary = binarySearch(sortedNumbers, 0, SIZE - 1, target);
    stop = high_resolution_clock::now();
    auto durationBinary = duration_cast<nanoseconds>(stop - start);
    
    cout << "Binary search: ";
    cout << (foundBinary ? "Found" : "Not found");
    cout << " (Time: " << durationBinary.count() << " nanoseconds)" << endl;
    
    return 0;
}