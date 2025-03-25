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

    cout << "Student Details as below: \n";
    cout << "==========================================================" << endl;
    
    cout << setw(15) << left << "Name"
     << setw(5)  << "Age"
     << setw(10) << "Gender"
     << setw(20) << "Home Address"
     << setw(15) << "E-Wallet" << endl;
     
    cout << "==========================================================" << endl;
    
    cout << setw(15) << Name
     << setw(5)  << Age
     << setw(11) << Gender
     << setw(20) << HomeAddress
     << setw(15) << Amount << endl;

    cout << "==========================================================" << endl ;

    return 0;
}
