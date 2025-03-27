#include <iostream> //package or library inside the compiler
#include <iomanip>

using namespace std;

// function without parameter
int main(){

    string stuName;
    string stuGender;
    int stuAge;
    string stuHomeAdd;
    double eWalletAmount;

    cout << "Student Name: ";
    getline(cin, stuName);

    cout << "Student Gender: ";
    getline(cin, stuGender);

    cout << "Student Age: ";
    cin >> stuAge;
    cin.ignore();

    cout << "Student Home Address: ";
    getline(cin, stuHomeAdd);

    cout << "E-Wallet Amount: RM";
    cin >> eWalletAmount;
    cin.ignore();

    int tablewidth = 50;

    cout << "\nStudent details as below: \n";
    cout << string(tablewidth, '=') << "\n";
    cout << "|" << left << setw(10) << "Name" 
    << "|" << setw(3) << "Age" 
    << "|" << setw(8) << "Gender" 
    << "|" << setw(10) << "Home Address" 
    << "| E-wallet |\n";
    
    cout << string(tablewidth, '=') << "\n";

    cout << "|" << left << setw(10) << stuAge 
    << "|" << setw(3) << stuAge 
    << "|" << setw(8) << stuGender 
    << "|" << setw(10) << stuHomeAdd 
    << "| RM: " << fixed << setprecision(2) << setw(7) << eWalletAmount << "\n";

    cout << string(tablewidth, '=') << "\n";

    return 0; // terminate or break 
}