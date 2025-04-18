#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

int main()
{
    string name, gender, address;
    int age;
    double Ewallet_balance;

    cout << "Enter your Name: ";
    getline(cin, name);

    cout << "Enter your Gender: ";
    getline(cin, gender);

    cout << "Enter your age: ";
    while (!(cin >> age) || age < 0 || age > 150)
    {
        cout << "Please enter a valid age: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter your address: ";
    getline(cin, address);

    cout << "Enter your balance: ";
    while (!(cin >> Ewallet_balance) || Ewallet_balance < 0)
    {
        cout << "Please enter a valid amount: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    // A2
    cout << "\n================================================\n";
    cout << "| Student Details as below:                    |\n";
    cout << "\n================================================\n";
    cout << "| Name     : " << setw(34) << right << name << "|" << "\n";
    cout << "| Age      : " << setw(34) << right << age << "|" << "\n";
    cout << "| Gender   : " << setw(34) << right << gender << "|" << "\n";
    cout << "| Address  : " << setw(34) << right << address << "|" << "\n";
    cout << "| E-Wallet :RM " << setw(32) << right << Ewallet_balance << "|" << "\n";
    cout << "\n================================================\n";

    return 0;
}