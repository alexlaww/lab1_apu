#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    bubbleSort(billy, size);
    auto stop = high_resolution_clock::now();

    cout << "Sorted using Bubble Sort: ";
    printArray(billy, size);

    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Execution time (Bubble Sort): " << duration.count() << " ns" << endl;

    return 0;
}
