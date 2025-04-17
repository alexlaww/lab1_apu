#include <iostream>

using namespace std;

int main() {
    double score1, score2, score3, average;
    char grade;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> score1 >> score2 >> score3;

    // Calculate the average
    average = (score1 + score2 + score3) / 3.0;

    // Determine the grade based on the rules
    if (average >= 90.0) {
        grade = 'A';
    } else if (average >= 70.0) { // Implicitly < 90 due to previous if
        grade = 'B';
    } else if (average >= 50.0) { // Implicitly < 70
        grade = 'C';
    } else { // Implicitly < 50
        grade = 'F';
    }

    // Output the grade
    cout << "Grade " << grade << endl;

     // Keep console window open (optional)
    cout << "Press any key to continue . . .";
    cin.ignore(); // Consume the newline left by cin
    cin.get();

    return 0;
}