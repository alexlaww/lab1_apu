#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, average;
    
    // Input scores
    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> quiz >> midterm >> finalExam;

    // Calculate average
    average = (quiz + midterm + finalExam) / 3;

    // Determine grade
    char grade;
    if (average >= 90)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    // Display result
    cout << "Grade: " << grade << endl;

    return 0;
}
