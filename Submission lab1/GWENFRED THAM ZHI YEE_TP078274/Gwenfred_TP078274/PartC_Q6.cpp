#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, finalExam, avg;
    
    cout << "Enter Quiz score (%): ";
    cin >> quiz;
    cout << "Enter Mid-term score (%): ";
    cin >> midterm;
    cout << "Enter Final score (%): ";
    cin >> finalExam;

    avg = (quiz + midterm + finalExam) / 3;

    cout << "Grade: ";
    if (avg >= 90) cout << "A";
    else if (avg >= 70) cout << "B";
    else if (avg >= 50) cout << "C";
    else cout << "F";

    cout << endl;
    return 0;
}
