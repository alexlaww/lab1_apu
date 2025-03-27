#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <conio.h>
using namespace std;

int main() {
    string firstName, lastName, gender, address;
    int age;
    double eWalletAmount;
    
    cout << "Student First Name\t:";
    getline(cin, firstName);
    
    cout << "Student Last Name\t:";
    getline(cin, lastName);
    
    cout << "Student Gender\t\t:";
    getline(cin, gender);
    
    cout << "Student Age\t\t:";
    while(!(cin >> age) || age < 0 || age > 150) {
        cout << "Please enter a valid age (0-150): ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Student Home Address\t:";
    getline(cin, address);
    
    cout << "E-wallet Amount\t\t:RM ";
    while(!(cin >> eWalletAmount) || eWalletAmount < 0) {
        cout << "Please enter a valid amount: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nStudent First Name\t:" << firstName << endl;
    cout << "Student Last Name\t:" << lastName << endl;
    cout << "Student Gender\t\t:" << gender << endl;
    cout << "Student Age\t\t:" << age << endl;
    cout << "Student Home Address\t:" << address << endl;
    cout << "E-wallet Amount\t\t:RM " << fixed << setprecision(2) << eWalletAmount << endl;
    cout << "Press any key to continue . . . ";
    _getch();
    system("cls");

    cout << "======================================================================" << endl;
    cout << "| Student Details as below:                                           |" << endl;
    cout << "======================================================================" << endl;
    cout << "| Name     : " << setw(55) << right << firstName + " " + lastName << "|" << endl;
    cout << "| Age      : " << setw(55) << right << age << "|" << endl;
    cout << "| Gender   : " << setw(55) << right << gender << "|" << endl;
    cout << "| Address  : " << setw(55) << right << address << "|" << endl;
    cout << "| E-Wallet : RM " << setw(52) << right << fixed << setprecision(2) << eWalletAmount << "|" << endl;
    cout << "======================================================================" << endl;

    return 0;
}