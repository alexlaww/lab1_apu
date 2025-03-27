#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main () {
    string name; 
    string gender;
    int age;
    string address;
    float amount; 
    char key;

    cout << "Student Name   :";
    getline (cin, name);

    cout << "Student Gender   :";
    getline (cin,gender);

    cout << "Student Age   :";
    cin >> age;

    cin.ignore();

    cout << "Student Home Address   :";
    getline (cin,address);

    cout << "E-wallet Amount   :";
    cin >> amount;

    cin.ignore();

    cout << "Press any key to continue ...";
    cin >> key;

    //Display the information
    cout << "====================================================================================================================================================";
    cout << "\nStudent details as below:\n";

    cout << "===================================================================================================================================================\n";
    cout << left << setw(20) << "|Name"
         << setw(20) << "|Gender"
         << setw(20) << "|Age"
         << setw(20) << "|Address"
         << setw(20) << "|E=wallet Amount" << endl;

    cout << left << setw(20) << name 
        << setw(20) << gender << "|"
        << setw(20) << age << "|"
        << setw(20) << address << "|"
        << setw(20) << "RM" << fixed << setprecision(2) << amount << endl << "|";
    cout << "====================================================================================================================================================\n";

    return 0;
}