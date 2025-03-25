#include <iostream>
using namespace std;

int main() {
    double quiz, midterm, final, average;
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> final;
    average = (quiz + midterm + final) / 3;
    if (average >= 90) {
        cout << "Grade A";
    }
    else if (average >= 70 && average < 90) {
        cout << "Grade B";
    }
    else if (average >= 50 && average < 70) {
        cout << "Grade C";
    }
    else if (average < 50) {
        cout << "Grade F";
    }
}