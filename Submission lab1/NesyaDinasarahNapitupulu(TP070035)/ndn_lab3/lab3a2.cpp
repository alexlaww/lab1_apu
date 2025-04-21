#include<iostream>
#include <chrono>
#include <algorithm>
using namespace std;

bool binarysearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return true;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

bool linearSearch(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[10];
    int count = 0;
    int inum;

    cout << "Enter 10 numbers: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> inum;

        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (nums[j] == inum) {
                isDuplicate = true;
                break;
            }
        }
        
        if (!isDuplicate) {
            nums[count] = inum;
            count++;
            cout << "Unique number found: " << inum << endl;
        } else {
            cout << inum << " is a duplicate and won't be added" << endl;
        }
    }

    cout << "\nAll unique numbers entered:" << endl;
    for (int i = 0; i < count; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    sort(nums, nums + count);

    int searchValue;
    cout << "Enter a value to search: ";
    cin >> searchValue;

    auto start = chrono::high_resolution_clock::now();
    bool foundLinear = linearSearch(nums, count, searchValue);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> linearDuration = end - start;

    start = chrono::high_resolution_clock::now();
    bool foundBinary = binarysearch(nums, 0, count - 1, searchValue); 
    end = chrono::high_resolution_clock::now();
    chrono::duration<double, milli> binaryDuration = end - start;

    if (foundLinear) {
        cout << searchValue << " found using linear search." << endl;
    } else {
        cout << searchValue << " not found using linear search." << endl;
    }
    cout << "Linear search execution time: " << linearDuration.count() << " ms" << endl;

    if (foundBinary) {
        cout << searchValue << " found using binary search." << endl;
    } else {
        cout << searchValue << " not found using binary search." << endl;
    }
    cout << "Binary search execution time: " << binaryDuration.count() << " ms" << endl;

}