#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX = 1000;

void generateRandomNumbers(int arr[], int size);
void displayRandomNumbers(int arr[], int size);
void displayHistogram(int arr[], int size);
void displayGroup(int arr[], int size, int low, int high);

int main() {
    int numbers[MAX];
    int count;

    cout << "Enter how many random numbers you want to do an analysis: ";
    cin >> count;

    srand(time(0)); // Seed random number generator

    generateRandomNumbers(numbers, count);
    displayRandomNumbers(numbers, count);
    displayHistogram(numbers, count);

    cout << "\nTo verify the graph is correct: (display numbers of 41 - 50)\n";
    displayGroup(numbers, count, 41, 50);

    return 0;
}

// Generates random numbers between 1 and 50
void generateRandomNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 + 1;
    }
}

// Displays numbers in rows of 10
void displayRandomNumbers(int arr[], int size) {
    cout << "\nThe random numbers (between 1 - 50) as below:\n";
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
}

// Displays histogram for ranges 1-10, 11-20, ..., 41-50
void displayHistogram(int arr[], int size) {
    int rangeCount[5] = {0};

    for (int i = 0; i < size; i++) {
        int index = (arr[i] - 1) / 10;
        rangeCount[index]++;
    }

    cout << "\n\nThe analysis star design as below:\n";
    for (int i = 0; i < 5; i++) {
        cout << setw(2) << (i * 10 + 1) << " - " << setw(2) << (i + 1) * 10 << " | ";
        for (int j = 0; j < rangeCount[i]; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Displays all numbers within a specified range (for verification)
void displayGroup(int arr[], int size, int low, int high) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= low && arr[i] <= high) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
