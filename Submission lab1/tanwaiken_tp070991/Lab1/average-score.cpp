#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, average;

    // Ask user for 3 scores
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> finalExam;

    // Calculate average
    average = (quiz + midterm + finalExam) / 3;

    // Determine and display grade
    if (average >= 90) {
        cout << "Grade A" << endl;
    } else if (average >= 70) {
        cout << "Grade B" << endl;
    } else if (average >= 50) {
        cout << "Grade C" << endl;
    } else {
        cout << "Grade F" << endl;
    }

    return 0;
}
