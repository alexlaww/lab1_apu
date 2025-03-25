#include <iostream>

using namespace std;

int main()
{
    int quiz, midTerm, final;
    double average;
    char key;

    cout << "Enter 3 scores (quiz, mid-term, and final) values separated by space:";
    cin >> quiz >> midTerm >> final;
    cin.ignore();

    average = (quiz + midTerm + final) / 3;

    if (average >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (average >= 70 && average < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (average >= 50 && average < 70)
    {
        cout << "Grade: C" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

    cout << "Press any key to continue . . .";
    cin >> key;

    return 0;
}
