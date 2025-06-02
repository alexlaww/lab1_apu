#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name, gender, address;
    int age;
    double eWallet;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Student Gender: ";
    cin >> gender;
    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter Student Home Address: ";
    getline(cin, address);
    cout << "Enter E-wallet Amount: RM ";
    cin >> eWallet;

    cout << "Student details as below:\n";
    cout << "================================================================\n";
    cout << "| " << setw(10) << left << "Name"
         << "| " << setw(3) << "Age"
         << " | " << setw(6) << "Gender"
         << " | " << setw(8) << "Address"
         << " | " << setw(14) << "E-wallet amount |" << endl;
    cout << "================================================================\n";

    cout << "| " << setw(10) << name
         << "| " << setw(3) << age
         << " | " << setw(6) << gender
         << " | " << setw(8) << address
         << " | RM" << eWallet << "         |" << endl;

    cout << "================================================================\n";

    return 0;
}
