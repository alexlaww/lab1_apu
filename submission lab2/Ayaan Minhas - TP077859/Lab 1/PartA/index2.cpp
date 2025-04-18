#include <iostream>
#include <string>
#include <iomanip> // Include iomanip for formatting

using namespace std;

int main() {
    string name, gender, address;
    int age;
    float amount;

    // --- Input Section (Same as before) ---
    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student Gender: ";
    getline(cin, gender);

    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore(); // Consume the newline character left by cin

    cout << "Enter Student Home Address: ";
    getline(cin, address);

    cout << "Enter Student E-Wallet Amount: RM ";
    cin >> amount;
    cin.ignore(); // Consume the newline character left by cin

    // --- Output Section (Formatted with right-aligned values) ---
    cout << endl; // Add a newline for spacing
    cout << "| Student Details as below:       |" << endl;
    cout << "-----------------------------------" << endl; // Optional separator

    // Print label (left-aligned by default), then use 'right' and 'setw' for the value
    cout << "| Name      : " << right << setw(19) << name << " |" << endl;
    cout << "| Age       : " << right << setw(19) << age << " |" << endl;
    cout << "| Gender    : " << right << setw(19) << gender << " |" << endl;
    cout << "| Address   : " << right << setw(19) << address << " |" << endl;

    // For E-Wallet, apply formatting (fixed, setprecision) then right alignment
    // The width (16) accounts for the space after "RM "
    cout << "| E-Wallet  : RM " << right << fixed << setprecision(2) << setw(16) << amount << " |" << endl;

    cout << "-----------------------------------" << endl; // Optional separator

    // Keep console window open (optional, useful in some IDEs)
    // cout << "Press any key to continue . . .";
    // cin.get();

    return 0;
}