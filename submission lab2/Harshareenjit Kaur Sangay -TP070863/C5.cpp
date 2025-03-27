#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// Question 4:
void printDiamond() {
    int rows;
    cout << "Enter number of rows (for diamond (triangle) dimension): ";
    cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Question 5:
void printEvenNumbers() {
    cout << "\nEven numbers between 1 and 50:\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < 5; j++) {
            int num = 2 + j * 10 + (i - 1) * 2;
            if (num <= 50) {
                cout << setw(8) << num;
            }
        }
        cout << endl;
    }
}

// Question 6:
void calculateGrade() {
    double quiz, midterm, final;
    cout << "\nEnter 3 scores (quiz, mid-term, and final) vales separated by space:";
    cin >> quiz >> midterm >> final;
    
    double average = (quiz + midterm + final) / 3;
    char grade;
    
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
}

int main() {
    cout << "\n=== Question 4: Diamond Pattern ===\n";
    printDiamond();
    
    cout << "\n=== Question 5: Even Numbers ===\n";
    printEvenNumbers();
    
    cout << "\n=== Question 6: Grade Calculator ===\n";
    calculateGrade();
    
    return 0;
}