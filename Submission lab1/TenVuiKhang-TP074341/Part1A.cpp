#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name, gender, address;
    int age;
    double ewalletAmount;

    cout << "Enter Student Name: ";
    getline(cin, name);
    
    cout << "Enter Student Gender: ";
    getline(cin, gender);
    
    cout << "Enter Student Age: ";
    cin >> age;
    cin.ignore();

    cout << "Enter Student Home Address: ";
    getline(cin, address);

    cout << "Enter E-wallet Amount: RM ";
    cin >> ewalletAmount;

    cout << "\nStudent Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount    : RM " << fixed << setprecision(2) << ewalletAmount << endl;
    
    cout << "\nStudent details as below:" << endl;
    cout << "==================================================================" << endl;
    cout << "| Name       | Age | Gender | Address   | E-wallet amount |" << endl;
    cout << "==================================================================" << endl;
    cout << "| " << setw(10) << left << name 
         << "| " << setw(3) << age 
         << " | " << setw(6) << gender 
         << " | " << setw(9) << address 
         << " | RM" << fixed << setprecision(2) << ewalletAmount << "       |" << endl;
    cout << "==================================================================" << endl;

    return 0;
}
