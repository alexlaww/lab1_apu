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

    // Displaying formatted output
    cout << "\n--------------------------------------------------------------\n";
    cout << "| Student Details as below:                                  |\n";
    cout << "--------------------------------------------------------------\n";
    cout << "| Name     : " << setw(30) << right << name << "|\n";
    cout << "| Age      : " << setw(30) << left << age << "|\n";
    cout << "| Gender   : " << setw(30) << left << gender << "|\n";
    cout << "| Address  : " << setw(30) << left << address << "|\n";
    cout << "| E-Wallet : RM " << setw(27) << left << eWallet << "|\n";
    cout << "--------------------------------------------------------------\n";

    return 0;
}
