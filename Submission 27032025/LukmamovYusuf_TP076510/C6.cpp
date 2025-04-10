#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, average;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> finalExam;
    average = (quiz + midterm + finalExam) / 3;
    cout << "Grade ";
    if (average >= 90)
        cout << "A" << endl;
    else if (average >= 70)
        cout << "B" << endl;
    else if (average >= 50)
        cout << "C" << endl;
    else
        cout << "F" << endl;

    return 0;
}
