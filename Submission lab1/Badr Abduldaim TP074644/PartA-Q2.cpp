#include <iostream>
#include <iomanip> // For formatting
using namespace std;

int main() {
    // Declare variables
    string name, gender, address;
    int age;
    double ewallet;

    // Get user input
    cout << "Student Name    : ";
    getline(cin, name);
    cout << "Student Gender  : ";
    getline(cin, gender);
    cout << "Student Age     : ";
    cin >> age;
    cin.ignore(); // Ignore newline left in buffer
    cout << "Student Home Address : ";
    getline(cin, address);
    cout << "E-wallet Amount : RM ";
    cin >> ewallet;

    // Display details in modified format
    cout << "\n======================================\n";
    cout << " Student Details as below:\n";
    cout << "======================================\n";
    cout << " Name      : " << name << endl;
    cout << " Age       : " << age << endl;
    cout << " Gender    : " << gender << endl;
    cout << " Address   : " << address << endl;
    cout << " E-Wallet  : RM " << fixed << setprecision(2) << ewallet << endl;
    cout << "======================================\n";

    return 0;
}
