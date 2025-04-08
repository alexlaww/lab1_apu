#include<iostream> //
using namespace std; // so that no need put std::
#include <iomanip>

int main() {
    string name;
    string gender;
    string address;
    int age;
    double amount;

    
    cout << "Enter Student Name: ";
    getline(cin, name); // get line for string
    
    cout << "Enter Student Gender: ";
    getline(cin, gender);
    
    cout << "Enter Student Age: ";
    cin >> age; // no get line bcuz is int
    cin.ignore();
    
    cout << "Enter Student Home Address: ";
    getline(cin, address);
    
    cout << "Enter E-wallet Amount (RM): ";
    cin >> amount;
    cin.ignore();

    // Display output
    cout << "\nMicrosoft Visual Studio Debug Console\n\n";
    cout << "Student Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount    : RM " << amount << endl;
    
    cout << "\nStudent details as below:\n\n";
    cout << "=====================================================================\n";
    cout << "| Name            | Age | Gender   | Address          | E-wallet amount |\n";
    cout << "=====================================================================\n";
    cout << "| " << name << "  | " << age << "  | " << gender << "  | " << address << "  | RM " << amount << "  |\n";
    cout << "=====================================================================\n";

    return 0;
}
