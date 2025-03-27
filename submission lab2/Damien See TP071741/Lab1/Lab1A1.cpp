#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <conio.h>
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

    cout << right << "\nStudent Name\t: " << name << endl;
    cout << right << "Student Gender\t: " << gender << endl;
    cout << right << "Student Age\t: " << age << endl;
    cout << right << "Student Home Address\t: " << address << endl;
    cout << right << "Ewallet Amount\t: " << Ewallet_balance << endl;
    _getch();
    system("cls");

    // A1
    cout << "==============================================================" << endl;
    cout << "|Student Details as below:                                    |" << endl;
    cout << "==============================================================" << endl;
    cout << left << setw(15) << "| Name"
         << left << setw(6) << "| Age"
         << left << setw(10) << "| Gender"
         << left << setw(20) << "| Address"
         << left << setw(18) << "| E-wallet amount |" << endl;
    cout << "=============================================================="<< endl;
    cout << left << setw(15) << "| " + name
         << left << setw(6) << "| " + to_string(age)
         << left << setw(10) << "| " + gender
         << left << setw(20) << "| " + address
         << "| RM " << fixed << setprecision(2) << setw(16) << Ewallet_balance << "|\n";
    cout << "==============================================================" << endl;
    
    return 0;
}