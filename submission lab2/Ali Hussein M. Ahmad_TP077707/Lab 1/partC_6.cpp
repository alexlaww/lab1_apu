#include <iostream>
using namespace std;

int main() {
    double quiz, midterm, final;
    char grade;
    
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midterm >> final;
    
    double average = (quiz + midterm + final) / 3;
    
    if (average >= 90) {
        grade = 'A';
    }
    else if (average >= 70) {
        grade = 'B';
    }
    else if (average >= 50) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }
    
    cout << "Grade " << grade << endl;
    cout << "Press any key to continue . . .";
    cin.ignore();
    cin.get();
    
    return 0;
}