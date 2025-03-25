#include <iostream>
#include <string> // Required for using string
#include <iomanip>

using namespace std;

int main() {
    string Name, Gender, Address;
    int Age;
    double EWallet;

    cout << "Student Name              : ";
    getline(cin, Name);

    cout << "Student Gender            : ";
    getline(cin, Gender);

    cout << "Student Age               : ";
    cin >> Age;
    cin.ignore(); // Ignore leftover newline before using getline()

    cout << "Student Home Address      : ";
    getline(cin, Address);

    cout << "E-wallet Amount           : RM ";
    cin >> EWallet;

    int tableWidth = 75; // Total table width (adjust as needed)

    // Display Student Details Table
    cout << "\nStudent details as below:\n";    
    // Print auto-generated separator line
    cout << string(tableWidth, '=') << endl;
    cout << "| " << setw(14) << left << "Name"
         << "| " << setw(8)  << "Age"
         << "| " << setw(8)  << "Gender"
         << "| " << setw(18) << "Address"
         << "| " << setw(14) << "E-wallet amount |" << endl;
    // Print auto-generated separator line
    cout << string(tableWidth, '=') << endl;
    // Table Row (User data)
    cout << "| " << setw(14) << left << Name
         << "| " << setw(8)  << Age
         << "| " << setw(8)  << Gender
         << "| " << setw(18) << Address
         << "| RM " << setw(12) << left << fixed << setprecision(2) << EWallet << " |" << endl;
     // Print auto-generated separator line
     cout << string(tableWidth, '=') << endl;

    return 0;
}
