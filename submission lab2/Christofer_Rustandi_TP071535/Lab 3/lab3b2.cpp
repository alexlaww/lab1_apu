#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
using namespace std;

// Function to generate random numbers
void generateNumbers(int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        numbers[i] = rand() % 50 + 1; // random number between 1 and 50
    }
}

// Function to display numbers (10 per line)
void displayNumbers(int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << "\t";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
}

// Function to draw graph based on ranges
void drawGraph(int numbers[], int count) {
    int range1 = 0, range2 = 0, range3 = 0, range4 = 0, range5 = 0;

    // Count how many numbers fall into each range
    for (int i = 0; i < count; i++) {
        if (numbers[i] >= 1 && numbers[i] <= 10)
            range1++;
        else if (numbers[i] <= 20)
            range2++;
        else if (numbers[i] <= 30)
            range3++;
        else if (numbers[i] <= 40)
            range4++;
        else
            range5++;
    }

    // Print stars for each range
    cout << "----------------------------------------------------------" << endl;
    cout << " 1 - 10 | ";
    for (int i = 0; i < range1; i++) cout << "* ";
    cout << endl;

    cout << "11 - 20 | ";
    for (int i = 0; i < range2; i++) cout << "* ";
    cout << endl;

    cout << "21 - 30 | ";
    for (int i = 0; i < range3; i++) cout << "* ";
    cout << endl;

    cout << "31 - 40 | ";
    for (int i = 0; i < range4; i++) cout << "* ";
    cout << endl;

    cout << "41 - 50 | ";
    for (int i = 0; i < range5; i++) cout << "* ";
    cout << endl;
    cout << "----------------------------------------------------------" << endl;
}

// Function to display only numbers between 41-50
void display41to50(int numbers[], int count) {
    for (int i = 0; i < count; i++) {
        if (numbers[i] >= 41 && numbers[i] <= 50)
            cout << numbers[i] << "\t";
    }
    cout << endl;
}

int main() {
    int count;

    // Ask user how many numbers to generate
    cout << "Enter how many random numbers you want to do an analysis? ";
    cin >> count;

    int numbers[count]; // Array to store random numbers

    srand(time(0)); // Seed random generator

    generateNumbers(numbers, count);

    cout << "\nThe random numbers (between 1 - 50) as below:\n";
    displayNumbers(numbers, count);

    cout << "\n\nThe analysis star design as below:\n";
    drawGraph(numbers, count);

    cout << "\nTo verify the graph is correct (numbers from 41 - 50):\n";
    display41to50(numbers, count);

    return 0;
}
