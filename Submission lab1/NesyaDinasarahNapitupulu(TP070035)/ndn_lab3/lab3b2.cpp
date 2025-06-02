#include<iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int RANGE = 50;
const int GROUPS = 5;

void generateRandomNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % RANGE + 1;
    }
}

void printNumbers(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }
}

void analyzeAndDrawGraph(int arr[], int size, int freq[]) {
    for (int i = 0; i < size; ++i) {
        int group = (arr[i] - 1) / 10;  
        if (group < GROUPS) {          
            freq[group]++;
        }
    }

    cout << "\nThe analysis star design as below:\n";
    for (int i = 0; i < GROUPS; ++i) {
        int start = i * 10 + 1;
        int end = start + 9;
        cout << setw(2) << start << " - " << setw(2) << end << " | ";
        for (int j = 0; j < freq[i]; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void displayVerification(int arr[], int size) {
    cout << "\nTo verify the graph is correct: (display numbers of 41 - 50)\n";
    for (int i = 0, count = 0; i < size; ++i) {
        if (arr[i] >= 41 && arr[i] <= 50) {
            cout << setw(4) << arr[i];
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    cout << endl;
}

int main() {
    int count;
    cout << "Enter how many random numbers you want to do an analysis? ";
    cin >> count;

    if (count <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1; 
    }

    int* numbers = new int[count];  
    int frequency[GROUPS] = {0};    

    srand(static_cast<unsigned int>(time(0))); 
    generateRandomNumbers(numbers, count);

    cout << "\nThe random numbers (between 1 - " << RANGE << ") as below:\n";
    printNumbers(numbers, count);

    analyzeAndDrawGraph(numbers, count, frequency);

    displayVerification(numbers, count);

    delete[] numbers; 
}