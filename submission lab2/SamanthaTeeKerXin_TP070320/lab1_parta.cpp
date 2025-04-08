#include <iostream>
#include <iomanip>
using namespace std;

void q1(){
    string name, gender, address;
    int age;
    double eWalletAmount;
    
    cout << "Enter Student Name: ";
    cin >> ws; // Clear input buffer
    getline(cin, name);
    
    cout << "Enter Student Gender: ";
    cin >> gender;
    
    cout << "Enter Student Age: ";
    cin >> age;
    
    cout << "Enter Student Home Address: ";
    cin >> ws; // Clear input buffer
    getline(cin, address);
    
    cout << "Enter E-wallet Amount: RM";
    cin >> eWalletAmount;
    
    // Display student information
    // cout << "\nStudent Name       : " << name << endl;
    // cout << "Student Gender     : " << gender << endl;
    // cout << "Student Age        : " << age << endl;
    // cout << "Student Home Address : " << address << endl;
    // cout << "E-wallet Amount    : RM " << eWalletAmount << endl;
    
    // cout << "\nStudent details as below:" << endl;
    
    // Print table header
    cout << "===================================================================" << endl;
    cout << "| Name       | Age | Gender | Address  | E-wallet amount |" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    
    // Print student details in table format
    cout << "| " << left << setw(10) << name 
         << "| " << setw(3) << age 
         << " | " << setw(6) << gender 
         << " | " << setw(8) << address 
         << " | RM" << setw(10) << fixed << setprecision(2) << eWalletAmount 
         << " |" << endl;
    
    cout << "===================================================================" << endl;

}

void q2() {
    string name, gender, address;
    int age;
    double eWalletAmount;
    
    cout << "Enter Student Name: ";
    cin >> ws; // Clear input buffer
    getline(cin, name);
    
    cout << "Enter Student Gender: ";
    cin >> gender;
    
    cout << "Enter Student Age: ";
    cin >> age;
    
    cout << "Enter Student Home Address: ";
    cin >> ws; // Clear input buffer
    getline(cin, address);
    
    cout << "Enter E-wallet Amount: RM";
    cin >> eWalletAmount;
    
    // Display student information
    cout << "\n===============================================================" << endl;
    cout << "|                  Student Details as below:                  |" << endl;
    cout << "===============================================================" << endl;
    cout << "| Name      : " << setw(30) << left << name << " |" << endl;
    cout << "| Age       : " << setw(30) << left << age << " |" << endl;
    cout << "| Gender    : " << setw(30) << left << gender << " |" << endl;
    cout << "| Address   : " << setw(30) << left << address << " |" << endl;
    cout << "| E-Wallet  : RM" << setw(28) << left << fixed << setprecision(2) << eWalletAmount << " |" << endl;
    cout << "===============================================================" << endl;
}

int main() {
    // q1();
    // q2();
    return 0;
}