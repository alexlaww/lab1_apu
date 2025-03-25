#include <iostream>
using namespace std;

int main() {
    float quiz, midTerm, finalExam, average;
    char grade;

    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> quiz >> midTerm >> finalExam;

    average = (quiz + midTerm + finalExam) / 3;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;

    return 0;
}