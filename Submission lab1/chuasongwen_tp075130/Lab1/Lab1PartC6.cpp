#include <iostream>
using namespace std;

double q, m, f, average;
char g;
void grade();

int main() {
    
    cout << "Enter Quiz, Mid-Term, and Final Exam Scores (separated by space): ";
    cin >> q >> m >> f;
    grade();
    cout << "Final Grade: " << g << endl;

    return 0;
}

void grade(){
    average = (q + m + f) / 3;
    if (average >= 90)
        g = 'A';
    else if (average >= 70)
        g = 'B';
    else if (average >= 50)
        g = 'C';
    else
        g = 'F';
}
