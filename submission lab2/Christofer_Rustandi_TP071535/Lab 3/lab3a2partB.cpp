#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int numbers[10] = {5, 2, 6, 3, 8, 1, 7, 9, 10, 4}; // Same values
    sort(numbers, numbers + 10); // Sorting for binary search
    int searchValue = 9;

    auto start = high_resolution_clock::now();
    int index = binarySearch(numbers, 10, searchValue);
    auto stop = high_resolution_clock::now();

    if (index != -1)
        cout << "Binary Search: Found " << searchValue << " at index " << index << " (sorted array)" << endl;
    else
        cout << "Binary Search: Value not found" << endl;

    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time (binary): " << duration.count() << " ns" << endl;

    return 0;
}
