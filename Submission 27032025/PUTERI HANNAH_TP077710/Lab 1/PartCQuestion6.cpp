#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, average;
    
    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> quiz >> midterm >> finalExam;

    // Calculate the average score
    average = (quiz + midterm + finalExam) / 3;

    // Determine the grade based on the given rules
    if (average >= 90)
        cout << "Grade A" << endl;
    else if (average >= 70)
        cout << "Grade B" << endl;
    else if (average >= 50)
        cout << "Grade C" << endl;
    else
        cout << "Grade F" << endl;

    return 0;
}
