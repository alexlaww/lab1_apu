#include<iostream>
#include<chrono>
#include<iomanip>
using namespace std;

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int billy[] = {4, 2, 1, 3, 5};
    int size = sizeof(billy) / sizeof(billy[0]); 

    int bubbleArray[size]; 
    int insertionArray[size];

    copyArray(billy, bubbleArray, size);
    copyArray(billy, insertionArray, size);

    cout << "Original Array: ";
    printArray(billy, size);

    cout << "\n a) Bubble Sort:" << endl;
    auto start_bubble = chrono::high_resolution_clock::now();

    bubblesort(bubbleArray, size);

    auto end_bubble = chrono::high_resolution_clock::now();
    chrono::duration<double, nano> bubble_time = end_bubble - start_bubble;

    cout << "Sorted Array: ";
    printArray(bubbleArray, size);
    cout << "Execution time: " << fixed << setprecision(2) 
    << bubble_time.count() << " nanoseconds" << endl;

    cout << "\n b) Insertion Sort:" << endl;
    auto start_insertion = chrono::high_resolution_clock::now();

    insertionsort(insertionArray, size);

    auto end_insertion = chrono::high_resolution_clock::now();
    chrono::duration<double, nano> insertion_time = end_insertion - start_insertion;

    cout << "Sorted Array: ";
    printArray(insertionArray, size);
    cout << "Execution time: " << fixed << setprecision(2) 
    << insertion_time.count() << " nanoseconds" << endl;

}