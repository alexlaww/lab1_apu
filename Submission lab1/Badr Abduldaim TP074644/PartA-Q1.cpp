#include <iostream>
#include <iomanip> // For formatting output
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

    // Display details
    cout << "\nStudent details as below:\n";
    cout << "===========================================================\n";
    cout << setw(10) << left << "Name" << " | "
         << setw(5) << "Age" << " | "
         << setw(8) << "Gender" << " | "
         << setw(10) << "Address" << " | "
         << setw(12) << "E-wallet amount" << " |\n";
    cout << "-----------------------------------------------------------\n";
    cout << setw(10) << left << name << " | "
         << setw(5) << age << " | "
         << setw(8) << gender << " | "
         << setw(10) << address << " | RM"
         << fixed << setprecision(2) << ewallet << " |\n";
    cout << "===========================================================\n";

    return 0;
}
