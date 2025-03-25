#include <iostream>
#include <iomanip>  // For setw() formatting
#include <string>
using namespace std;

void validateIntegerInput(int &userInput) {
    char c;
    while (true) {
        cin >> userInput;
        
        if (cin.fail() || (cin.get(c) && c != '\n')) {
            cin.clear(); // Clear error flags
            while (cin.get() != '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid integer: ";
        } else {
            break;
        }
    }
}

int main() {
    // Variables to store user input
    string name, gender, address;
    int age;
    double eWallet;

    // Taking user input
    cout << "Student Name        : ";
    getline(cin, name);
    cout << "Student Gender      : ";
    getline(cin, gender);
    cout << "Student Age         : ";
    validateIntegerInput(age);
    cout << "Student Home Address: ";
    getline(cin, address);
    cout << "E-wallet Amount     : RM ";
    cin >> eWallet;
    
    // Separator for table format
    cout << "\nStudent details as below:\n";
    cout << string(64, '-') << endl;
    
    // Table Header
    cout << "| " << setw(12) << left << "Name" 
         << "| " << setw(5) << "Age" 
         << "| " << setw(8) << "Gender" 
         << "| " << setw(12) << "Address" 
         << "| " << setw(15) << "E-wallet amount" << " |" << endl;
    
    cout << string(64, '-') << endl;
    
    // Table Data
    cout << "| " << setw(12) << left << name
         << "| " << setw(5) << age
         << "| " << setw(8) << gender
         << "| " << setw(12) << address
         << "| RM" << setw(13) << fixed << setprecision(2) << eWallet << " |" << endl;
    
    cout << string(64, '-') << endl;

    return 0;
}
