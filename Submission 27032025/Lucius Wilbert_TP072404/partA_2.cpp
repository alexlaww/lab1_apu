#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    float ewallet;

    cout << "Student Name        : ";
    getline(cin, name);

    cout << "Student Gender      : ";
    getline(cin, gender);

    cout << "Student Age         : ";
    cin >> age;
    cin.ignore();

    cout << "Student Home Address: ";
    getline(cin, address);

    cout << "E-wallet Amount     : RM ";
    cin >> ewallet;

    cout << "\n=================================================" << endl;
    cout << "| Student Details as below:                    |" << endl;
    cout << "=================================================" << endl;

    cout << "| Name     : " << right << setw(36) << name << " |" << endl;
    cout << "| Age      : " << right << setw(36) << age << " |" << endl;
    cout << "| Gender   : " << right << setw(36) << gender << " |" << endl;
    cout << "| Address  : " << right << setw(36) << address << " |" << endl;

    stringstream ss;
    ss << "RM" << fixed << setprecision(2) << ewallet;
    cout << "| E-Wallet : " << right << setw(36) << ss.str() << " |" << endl;

    cout << "=================================================" << endl;

    return 0;
}
