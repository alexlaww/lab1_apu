#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    double wallet;

    cout << "enter student name: ";
    getline(cin, name);
    
    cout << "enter student gender: ";
    getline(cin, gender);
    
    cout << "enter student age: ";
    cin >> age;
    cin.ignore();
    
    cout << "enter student home address: ";
    getline(cin, address);
    
    cout << "enter e-wallet amount: rm";
    cin >> wallet;

    cout << "\nstudent name       : " << name;
    cout << "\nstudent gender     : " << gender;
    cout << "\nstudent age        : " << age;
    cout << "\nstudent home address: " << address;
    cout << "\ne-wallet amount    : rm" << fixed << setprecision(2) << wallet << "\n";

    cout << "\n| student details as below:                     |\n";
    cout << "=================================================\n";
    cout << "| name     : " << setw(10) << left << name << " |\n";
    cout << "| age      : " << age <<                      " |\n";
    cout << "| gender   : " << setw(7) << gender <<        " |\n";
    cout << "| address  : " << setw(8) << address <<       " |\n";
    cout << "| e-wallet : rm" << fixed << setprecision(2) << wallet << " |\n";
    cout << "=================================================\n";

    return 0;
}