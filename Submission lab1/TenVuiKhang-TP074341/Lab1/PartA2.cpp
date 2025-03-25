#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    double ewalletAmount;

    cout << "Enter Student Name: ";
    getline(cin, name);
    
    cout << "Enter Student Gender: ";
    getline(cin, gender);
    
    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Student Home Address: ";
    getline(cin, address);

    cout << "Enter E-wallet Amount: RM ";
    cin >> ewalletAmount;

    cout << "\nStudent Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount    : RM " << fixed << setprecision(2) << ewalletAmount << endl;

    cout << "\nPress any key to continue . . .\n";
    cin.ignore();
    cin.get();

    cout << "\nStudent Details as below:\n";
    cout << "=====================================\n";
    cout << "| Name     : " << setw(10) << left << name << " |\n";
    cout << "| Age      : " << setw(10) << left << age << " |\n";
    cout << "| Gender   : " << setw(10) << left << gender << " |\n";
    cout << "| Address  : " << setw(10) << left << address << " |\n";
    cout << "| E-Wallet : RM " << setw(8) << fixed << setprecision(2) << ewalletAmount << " |\n";
    cout << "=====================================\n";

}