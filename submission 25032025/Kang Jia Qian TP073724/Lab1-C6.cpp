# include <iostream>

using namespace std;

int main(){
    int quiz, mid, final, avg;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> mid >> final;

    avg = (quiz + mid + final) / 3;

    if (avg >= 90){
        cout << "Grade A";
    } else if (avg >= 70 && avg < 90){
        cout << "Grade B";
    } else if (avg >= 50 && avg < 70){
        cout << "Grade C";
    } else if (avg < 50){
        cout << "Grade F";
    }
}