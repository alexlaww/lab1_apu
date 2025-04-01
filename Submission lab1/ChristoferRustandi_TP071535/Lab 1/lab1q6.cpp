#include <iostream>
using namespace std;

int main(){
    int quiz, mid, final, average;
    char grade;

    cout << "Please enter your (QUIZ MID FINAL) score using this format 10 9 8: ";
    cin >> quiz >> mid >> final;

    average = (quiz + mid + final) / 3;

    if (average >= 90) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    
    cout << "Grade " << grade << endl;

    return 0;
}