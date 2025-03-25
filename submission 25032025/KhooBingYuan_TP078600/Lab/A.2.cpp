#include <iostream>
#include <iomanip>  // For formatting
#include <string>

using namespace std;

int main() {
    string name, gender, address;
    int age;
    double amount;

    // Input
    cout << "Student Name           : ";
    getline(cin, name);

    cout << "Student Gender         : ";
    getline(cin, gender);

    cout << "Student Age            : ";
    cin >> age;
    cin.ignore();  // Ignore leftover newline

    cout << "Student Home Address   : ";
    getline(cin, address);

    cout << "E-wallet Amount        : RM ";
    cin >> amount;

    // Pause before displaying details
    cout << "Press any key to continue . . . ";
    cin.ignore();
    cin.get();

    // Output formatted as in the image
    cout << string(46, '=') << endl;
    cout << "| Student Details as below:                  |" << endl;
    cout << string(46, '=') << endl;
    cout << "| Name      : " << setw(30) << right << name << " |" << endl;
    cout << "| Age       : " << setw(30) << right << age << " |" << endl;
    cout << "| Gender    : " << setw(30) << right << gender << " |" << endl;
    cout << "| Address   : " << setw(30) << right << address << " |" << endl;
    cout << "| E-Wallet  : RM " << setw(27) << fixed << setprecision(2) << amount << " |" << endl;
    cout << string(46, '=') << endl;

    return 0;
}
