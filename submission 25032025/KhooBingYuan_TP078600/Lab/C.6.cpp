#include <iostream>
using namespace std;

int main(){
    int grade1, grade2, grade3;
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> grade1 >> grade2 >> grade3;
    double avg_score = (grade1 + grade2 + grade3) / 3.0;
    if(avg_score >= 90){
        cout << "Grade A" << endl;
    }
    else if (avg_score >=70 && avg_score < 90){
        cout << "Grade B" << endl;
    }
    else if (avg_score >= 50 && avg_score < 70){
        cout << "Grade C" << endl;
    }
    else {
        cout << "Grade F" << endl;
    }
}