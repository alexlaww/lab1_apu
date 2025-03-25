#include <iostream>
using namespace std;

int main() 
{
    float quiz, midTerm, finalScore;
    float average;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> midTerm >> finalScore;

    average = (quiz + midTerm + finalScore) / 3;

    if (average >= 90) 
    {
        cout << "Grade A" << endl;
    } 
    
    else if (average >= 70 && average < 90) 
    {
        cout << "Grade B" << endl;
    } 
    
    else if (average >= 50 && average < 70)
    {
        cout << "Grade C" << endl;
    } 
    
    else 
    {
        cout << "Grade F" << endl;
    }

    return 0;
}
