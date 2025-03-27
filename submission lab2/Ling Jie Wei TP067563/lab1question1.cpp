#include <iostream>
#include <iomanip>  // For table formatting
#include <limits>   // For input validation

using namespace std;

int main() {
    // Define student details
    string name;
    string gender;
    int age;
    string address;
    double ewallet;

    // Input Student Name
    cout << "Student Name: ";
    cin.ignore();  // Ignore any leftover input
    getline(cin, name);  // Allow full names with spaces

    // Validate Gender Input
    while (true) {
        cout << "Student Gender (Male/Female): ";
        cin >> gender;
        
        // Convert to lowercase for case-insensitive comparison (optional)
        if (gender == "Male" || gender == "Female") {
            break;  // Valid input
        } else {
            cout << "Invalid gender! Please enter 'Male' or 'Female'." << endl;
        }
    }

    // Validate Age Input
    while (true) {
        cout << "Student Age: ";
        cin >> age;

        if (cin.fail() || age <= 0 || age > 120) {
            cout << "Invalid age! Please enter a valid age between 1 and 120." << endl;
            cin.clear();  // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        } else {
            break;  // Valid input
        }
    }

    // Input Address
    cout << "Student Address: ";
    cin.ignore();  // Clear previous newline from buffer
    getline(cin, address);  // Allow spaces in address

    // Validate E-wallet Amount
    while (true) {
        cout << "Student E-Wallet Amount (RM): ";
        cin >> ewallet;

        if (cin.fail() || ewallet < 0 || ewallet > 5000) {
            cout << "Invalid E-wallet amount! Please enter a value between 0 and 5000." << endl;
            cin.clear();  // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        } else {
            break;  // Valid input
        }
    }

    // Display student details in list format
    cout << "\nStudent Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address : " << address << endl;
    cout << "E-wallet Amount    : RM " << fixed << setprecision(2) << ewallet << endl;

    // Display student details in tabular format
    cout << "\nStudent details as below:\n" << endl;
    cout << setw(15) << left << "| Name"
         << setw(6) << "| Age"
         << setw(10) << "| Gender"
         << setw(12) << "| Address"
         << setw(18) << "| E-wallet amount |" << endl;

    cout << "===================================================================" << endl;

    cout << setw(15) << left << "| " + name
         << setw(6) << "| " + to_string(age)
         << setw(10) << "| " + gender
         << setw(12) << "| " + address
         << setw(18) << "| RM " + to_string(ewallet) + "  |" << endl;

    cout << "===================================================================" << endl;

    return 0;
}
