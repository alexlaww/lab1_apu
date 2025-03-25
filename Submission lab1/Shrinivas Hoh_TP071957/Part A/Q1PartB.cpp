#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string Name, Gender, HomeAddress;
    int Age;
    double Amount;

    cout << "Student name: ";
    getline(cin, Name);

    cout << "Student gender: ";
    getline(cin, Gender);

    cout << "Student age: ";
    cin >> Age;

    cout << "Student Home Address: ";
    cin.ignore();
    getline(cin, HomeAddress);

    cout << "E-Wallet Amount: ";
    cin >> Amount;
    cout << endl;

    cout << "======================================================" << endl;
    cout << "| Student Details as below:                          |" << endl;
    cout << "======================================================" << endl;
    cout << "| Name       : " << setw(37) << right << Name << " |" << endl;
    cout << "| Age        : " << setw(37) << right << Age << " |" << endl;
    cout << "| Gender     : " << setw(37) << right << Gender << " |" << endl;
    cout << "| Address    : " << setw(37) << right << HomeAddress << " |" << endl;
    cout << "| E-Wallet   : RM " << setw(34) << right <<  Amount << " |" << endl;
    cout << "======================================================" << endl;

    return 0;
}