#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string name, gender, address;
    int age;
    double amount;

    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your gender: ";
    getline(cin,gender);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your home address: ";
    getline(cin,address);
    cout << "Enter your e-wallet amount: ";
    cin >> amount;

    cout << "\nStudent Name: " << name << endl;
    cout << "Student Gender: " << gender << endl;
    cout << "Student Age: " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount: " << amount << endl;

    cout << "Student Details as Below:\n";
    cout << "|Name |Age |Gender |Address |E-wallet Amount|\n";
    cout << "================================================\n";
    cout << "| "<< left << setw(9) << name
        << "| " << setw(3) << age
        << "| " << setw(7) << gender
        << "| " << setw(8) << address
        << "| " << setw(15) << amount << "|\n";
    cout << "=================================================";

    return 0;
}