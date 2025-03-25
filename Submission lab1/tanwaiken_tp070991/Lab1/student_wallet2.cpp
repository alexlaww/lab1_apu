#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

// Exactly 43 dashes between '+'
void printLine() {
    cout << "+-------------------------------------------+" << endl;
}

int main() {
    struct {
        string name, gender, address;
        double amount;
        int age;
    } student;

    // Input student details
    cout << "Student Name          : ";
    getline(cin, student.name);

    cout << "Student Gender        : ";
    getline(cin, student.gender);

    cout << "Student Age           : ";
    cin >> student.age;
    cin.ignore();  // Clear newline from input buffer

    cout << "Student Home Address  : ";
    getline(cin, student.address);

    cout << "E-wallet Amount       : ";
    cin >> student.amount;

    cout << "Press Enter to continue...\n";
    cin.ignore();  // Wait for Enter
    cin.get();

    // Display
    printLine();
    cout << "| Student Details as below:                |" << endl;
    printLine();

    cout << "| Name     : " << setw(29) << right << student.name    << " |" << endl;
    cout << "| Age      : " << setw(29) << right << student.age     << " |" << endl;
    cout << "| Gender   : " << setw(29) << right << student.gender  << " |" << endl;
    cout << "| Address  : " << setw(29) << right << student.address << " |" << endl;
    cout << "| E-Wallet : RM " << setw(26) << right << student.amount << " |" << endl;

    printLine();

    return 0;
}
