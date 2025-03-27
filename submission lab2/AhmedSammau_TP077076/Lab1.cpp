#include<iostream>
using namespace std;
#include <iomanip>

int main()
{
    string name, address , gender;
    int age;
    float  ewallet;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your Gender: ";
    cin >> gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your e-wallet balance: ";
    cin >> ewallet;
    
    cout << "Student Name        : " << name << endl;
    cout << "Student Gender      : " << gender << endl;
    cout << "Student Age         : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount     : RM" << fixed << setprecision(2) << ewallet << endl << endl;

    cout << "Student details as below:\n";
    cout << "===================================================================\n";
    cout << "| Name      | Age | Gender  | Address  | E-wallet amount |\n";    
    cout << "===================================================================\n";
    cout << "| " << left << setw(10) << name                                   
         << "| " << setw(3) << age 
         << "| " << setw(7) << gender 
         << "| " << setw(9) << address 
         << "| RM" << fixed << setprecision(2) << ewallet << " |\n";
    cout << "===================================================================\n";


    cout << "\nPress any key to continue . . .\n\n";

    cout << "---------------------------------------\n";
    cout << "| Student Details as below:           |\n";
    cout << "---------------------------------------\n";
    cout << "| Name      : " << name << setw(8) << "|\n";
    cout << "| Age       : " << age << setw(8) << "|\n";
    cout << "| Gender    : " << gender << setw(8) << "|\n";
    cout << "| Address   : " << address << setw(8) << "|\n";
    cout << "| E-Wallet  : RM " << fixed << setprecision(2) << ewallet << " |\n";
    cout << "---------------------------------------\n";

    return 0;

    

  
}

