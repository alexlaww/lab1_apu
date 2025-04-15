#include <iostream>
using namespace std;

int main() {
    float quiz, midterm, final_score, average;
    
    cout << "Enter 3 scores (quiz, mid-term, and final) separated by space: ";
    cin >> quiz >> midterm >> final_score;
    
    average = (quiz + midterm + final_score) / 3.0;
    
    if (average >= 90)
        cout << "Grade A" << endl;
    else if (average >= 70)
        cout << "Grade B" << endl;
    else if (average >= 50)
        cout << "Grade C" << endl;
    else
        cout << "Grade F" << endl;
    
    system("pause");
    return 0;
}
