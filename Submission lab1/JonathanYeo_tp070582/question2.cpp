#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    
    string name, gender, home_address;
    int age;
    double e_wallet;

    cout << "Student Name           : ";
    getline(cin, name);
    cout << "Student Gender         : ";
    getline(cin, gender);
    cout << "Student Age            : ";
    cin >> (age);
    cin.ignore();
    cout << "Student Home Address   : ";
    getline(cin, home_address);
    getline(cin, home_address);
    cout << "E-wallet Amount        : ";
    cin >> e_wallet;

    system("pause");
    cout << "================================================================================\n";
    cout << "|Student Details as below:                                                     |\n";
    cout << "================================================================================\n";
    cout << "|" << left << setw(15) << "Name" << ": " << name << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Gender" << ": " << gender << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Age" << ": " << age << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "Address" << ": " << home_address << right << setw(15) << " |\n";
    cout << "|" << left << setw(15) << "E-Wallet Amount" << ": " << e_wallet << right << setw(15) << " |\n";
    cout << "================================================================================\n";

}