#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    float ewallet;

    cout << "Student Name          : ";
    getline(cin, name);

    cout << "Student Gender        : ";
    getline(cin, gender);

    cout << "Student Age           : ";
    cin >> age;
    cin.ignore(); 

    cout << "Student Home Address  : ";
    getline(cin, address);

    cout << "E-wallet Amount       : RM ";
    cin >> ewallet;

    cout << "\nStudent details as below:\n";
    cout << "===============================================================\n";
    cout << "| Name      | Age | Gender | Address   | E-wallet amount      |\n";
    cout << "===============================================================\n";
    cout << "| " << left << setw(10) << name
         << "| " << setw(4) << age
         << "| " << setw(7) << gender
         << "| " << setw(10) << address
         << "| RM" << fixed << setprecision(2) << setw(18) << ewallet << "|\n";
    cout << "===============================================================\n";

    return 0;
}
