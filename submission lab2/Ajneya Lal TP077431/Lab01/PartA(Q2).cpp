#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    double eWallet;

    cout << "Student Name: ";
    getline(cin, name);

    cout << "Student Gender: ";
    getline(cin, gender);

    cout << "Student Age: ";
    cin >> age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clear leftover newline

    cout << "Student Home Address: ";
    getline(cin, address);

    cout << "E-wallet Amount (RM): ";
    cin >> eWallet;

    cout << endl;
    cout << "====================================================" << endl;
    cout << "| Student Details as below:                        |" << endl;
    cout << "====================================================" << endl;
    cout << "| Name     : " << name     << "                             |" << endl;
    cout << "| Age      : " << age      << "                              |" << endl;
    cout << "| Gender   : " << gender   << "                             |" << endl;
    cout << "| Address  : " << address  << "                            |" << endl;
    cout << "| E-Wallet : RM " << eWallet << "                          |" << endl;
    cout << "====================================================" << endl;

    return 0;
}