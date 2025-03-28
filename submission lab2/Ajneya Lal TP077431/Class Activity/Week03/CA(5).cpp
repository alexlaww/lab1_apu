#include <iostream>
using namespace std;

void displayMarks(int marks[], int n) {
    cout << "\nDisplaying marks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
    }
}

int main() {
    const int MAX = 10;
    int marks[MAX], n;

    cout << "Enter number of students (max 10): ";
    cin >> n;

    if (n > MAX || n <= 0) {
        cout << "Invalid number of students!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    displayMarks(marks, n);

    return 0;
}
