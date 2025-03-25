//Activity 5
#include <iostream>
#include <string>

using namespace std;
// Constant for maximum number of students
const int MAX_STUDENTS = 10;

// Function to display student names and their marks
void displayStudents(const string names[], const int marks[], int numStudents) {
    cout << "\nStudent Information:\n";
    cout << "---------------------\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "Name: " << names[i] << "\tMark: " << marks[i] << endl;
    }
}

int main() {
    int numStudents;

    // Prompt user for the number of students
    do {
        cout << "Enter the number of students (1 to " << MAX_STUDENTS << "): ";
        cin >> numStudents;
        if (numStudents < 1 || numStudents > MAX_STUDENTS) {
            cout << "Invalid number of students. Please enter a number between 1 and " << MAX_STUDENTS << ".\n";
        }
    } while (numStudents < 1 || numStudents > MAX_STUDENTS);

    // Arrays to store student names and marks
    string names[MAX_STUDENTS];
    int marks[MAX_STUDENTS];

    // Input student names and marks
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> ws; // To consume any leading whitespace
        getline(cin, names[i]);
        cout << "Mark: ";
        cin >> marks[i];

        // Validate mark input
        while (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid mark. Please enter a mark between 0 and 100: ";
            cin >> marks[i];
        }
    }

    // Display student information
    displayStudents(names, marks, numStudents);

    return 0;
}
