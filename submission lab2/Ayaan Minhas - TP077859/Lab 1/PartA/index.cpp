#include<iostream>
#include<iomanip> // Include iomanip for formatting
#include<string>  // Include string for getline
using namespace std;

int main() {
    string name, gender, address;
    int age;
    float amount;
    
    cout << "Student Name" << setw(15) << ": ";
    getline(cin, name);
    cout << "Student Gender" << setw(13) << ": ";
    getline(cin, gender);
    cout << "Student Age" << setw(16) << ": ";
    cin >> age;
    cin.ignore(); // flush newline after reading age
    cout << "Student Home Address" << setw(7) << ": ";
    getline(cin, address);
    cout << "Student E-Wallet Amount" << setw(7) << ": RM ";
    cin >> amount;
    
    cout << endl << "Student details as below:" << endl;
    cout << "========================================================" << endl;
    cout << "| Name      | Age | Gender | Address | E-wallet amount |" << endl;
    cout << "========================================================" << endl;
    cout << "| " << left << setw(9) << name << " | " 
         << setw(3) << age << " | " 
         << setw(6) << gender << " | " 
         << setw(7) << address << " | RM" 
         << setw(13) << fixed << setprecision(2) << amount << " |" << endl;
    cout << "========================================================" << endl;
    
    return 0;
}