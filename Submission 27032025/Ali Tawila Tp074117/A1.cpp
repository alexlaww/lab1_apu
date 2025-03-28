#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    double wallet;

    //input
    cout << "enter student name: ";
    getline(cin, name);
    
    cout << "enter student gender: ";
    getline(cin, gender);
    
    cout << "enter student age: ";
    cin >> age;
    
    cout << "enter student home address: ";
    getline(cin, address);
    
    cout << "enter e-wallet amount: rm";
    cin >> wallet;


    cout << "\nstudent name       : " << name;
    cout << "\nstudent gender     : " << gender;
    cout << "\nstudent age        : " << age;
    cout << "\nstudent home addres: " << address;
    cout << "\nEwallet amount    : rm" << fixed << setprecision(2) << wallet << "\n";


    cout << "\nstudent details as below:\n";
    cout << "=========================================\n";
    cout << "| name       | age | gender  | address  | e-wallet |\n";
    cout << "=========================================\n";
    cout << "| " << setw(10) << left << name << " | " << setw(3) << age << " | "
         << setw(7) << gender << " | " << setw(8) << address << " | rm" 
         << fixed << setprecision(2) << wallet << " |\n";
    cout << "=========================================\n";

    return 0;
}