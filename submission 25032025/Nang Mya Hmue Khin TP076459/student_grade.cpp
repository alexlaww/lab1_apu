#include <iostream>
using namespace std;

int main() 
{
    int quiz, mid_term, final;
    double average_score;
    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin >> quiz >> mid_term >> final;

    average_score = (quiz + mid_term + final)/100;

    if (average_score == 90)
    {
        cout << "Grade A";
    }
    else if(average_score >= 70 && average_score < 90)
    {
        cout << "Grade B";
    }
    else if (average_score >= 50 && average_score < 70)
    {
        cout << "Grade C";
    }
    else
    {
        cout << "Grade F";
    }

    
}