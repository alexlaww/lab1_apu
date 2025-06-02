#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int numbers[10] = {5, 2, 6, 3, 8, 1, 7, 9, 10, 4}; // Unique values from Question 1
    int searchValue = 9;

    auto start = high_resolution_clock::now();
    int index = linearSearch(numbers, 10, searchValue);
    auto stop = high_resolution_clock::now();

    if (index != -1)
        cout << "Linear Search: Found " << searchValue << " at index " << index << endl;
    else
        cout << "Linear Search: Value not found" << endl;

    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time (linear): " << duration.count() << " ns" << endl;

    return 0;
}
