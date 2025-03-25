#include <iostream>
using namespace std;

int main() {
    double quiz, midterm, finalExam, average;
    
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> finalExam;
    
    average = (quiz + midterm + finalExam) / 3.0;
    
    char grade;
    if (average >= 90)
        grade = 'A';
    else if (average >= 70)
        grade = 'B';
    else if (average >= 50)
        grade = 'C';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;

    return 0;
}
