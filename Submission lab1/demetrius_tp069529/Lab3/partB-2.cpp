#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// Function to generate random numbers and store them in an array
void generateRandomNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 50 + 1; // Random numbers between 1 and 50
    }
}

// Function to count numbers in specific ranges
void analyzeNumbers(int numbers[], int size, int ranges[]) {
    for (int i = 0; i < size; i++) {
        if (numbers[i] >= 1 && numbers[i] <= 10) {
            ranges[0]++;
        } else if (numbers[i] >= 11 && numbers[i] <= 20) {
            ranges[1]++;
        } else if (numbers[i] >= 21 && numbers[i] <= 30) {
            ranges[2]++;
        } else if (numbers[i] >= 31 && numbers[i] <= 50) {
            ranges[3]++;
        }
    }
}

// Function to display the graph
void drawGraph(int ranges[]) {
    cout << "The analysis star design as below:" << endl;
    cout << "----------------------------------------" << endl;

    const string labels[] = {"1 - 10   |", "11 - 20  |", "21 - 30  |", "31 - 50  |"};
    for (int i = 0; i < 4; i++) {
        cout << labels[i] << " ";
        for (int j = 0; j < ranges[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0)); // Seed for random number generation

    int size;
    cout << "Enter how many random numbers you want to do an analysis? ";
    cin >> size;

    int numbers[size];
    int ranges[4] = {0, 0, 0, 0}; // Counters for ranges [1-10, 11-20, 21-30, 31-50]

    // Generate random numbers
    generateRandomNumbers(numbers, size);

    // Display the generated numbers
    cout << "\nThe random numbers (between 1 - 50) as below:" << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(4) << numbers[i];
        if ((i + 1) % 10 == 0) { // Print 10 numbers per row
            cout << endl;
        }
    }

    // Analyze the numbers
    analyzeNumbers(numbers, size, ranges);

    // Draw the graph
    drawGraph(ranges);

    return 0;
}