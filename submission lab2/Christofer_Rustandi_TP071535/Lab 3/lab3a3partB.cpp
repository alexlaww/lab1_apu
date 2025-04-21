#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int billy[] = {4, 2, 1, 3, 5};
    int size = sizeof(billy) / sizeof(billy[0]);

    auto start = high_resolution_clock::now();
    insertionSort(billy, size);
    auto stop = high_resolution_clock::now();

    cout << "Sorted using Insertion Sort: ";
    printArray(billy, size);

    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time (Insertion Sort): " << duration.count() << " ns" << endl;

    return 0;
}
