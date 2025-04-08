#include<iostream> //
using namespace std; // so that no need put std::
#include <iomanip>

// function without parameter()
// in function got 2 type : return value(double, String) & void(just do the calcualtion just process)
// int main(){
//     int nm1;
//     cout << "hello"; //to print, input must use <<
//     cin >> nm1; //to hold value, var for user to key in, output is >>
//     cout << "this one value ais : " <<nm1;
//     return 0; //to exit or terminate the program, if not the program will run till end 
// }

// part A
int main() {
    string name;
    string gender;
    string address;
    int age;
    double amount;

    
    cout << "Enter Student Name: ";
    getline(cin, name); // get line for string
    
    cout << "Enter Student Gender: ";
    getline(cin, gender);
    
    cout << "Enter Student Age: ";
    cin >> age; // no get line bcuz is int
    cin.ignore();
    
    cout << "Enter Student Home Address: ";
    getline(cin, address);
    
    cout << "Enter E-wallet Amount (RM): ";
    cin >> amount;
    cin.ignore();

    // Display output
    cout << "\nMicrosoft Visual Studio Debug Console\n\n";
    cout << "Student Name       : " << name << endl;
    cout << "Student Gender     : " << gender << endl;
    cout << "Student Age        : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount    : RM " << amount << endl;
    
    cout << "\nStudent details as below:\n\n";
    cout << "=====================================================================\n";
    cout << "| Name            | Age | Gender   | Address          | E-wallet amount |\n";
    cout << "=====================================================================\n";
    cout << "| " << name << "  | " << age << "  | " << gender << "  | " << address << "  | RM " << amount << "  |\n";
    cout << "=====================================================================\n";

    return 0;
}

//Part b
// int main() {
//     string name;
//     string gender;
//     string address;
//     int age;
//     double amount;

    
//     cout << "Enter Student Name: ";
//     getline(cin, name);
    
//     cout << "Enter Student Gender: ";
//     getline(cin, gender);
    
//     cout << "Enter Student Age: ";
//     cin >> age;
//     cin.ignore();

//     cout << "Enter Student Home Address: ";
//     getline(cin, address);
    

//     cout << "Enter E-wallet Amount (RM): ";
//     cin >> amount;
//     cin.ignore();

//     // Display output
//     cout << "\nStudent Details as below:\n";
//     cout << "----------------------------------------------------\n";
//     cout << left << setw(10) << "Name" << " : " << name << endl;
//     cout << left << setw(10) << "Age" << " : " << age << endl;
//     cout << left << setw(10) << "Gender" << " : " << gender << endl;
//     cout << left << setw(10) << "Address" << " : " << address << endl;
//     cout << left << setw(10) << "E-Wallet" << " : RM " << amount << endl;
//     cout << "----------------------------------------------------\n";

//     return 0;
// }
