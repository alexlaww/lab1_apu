#include<iostream>
using namespace std;

int main() {
    string studentName, studentGender, homeAddress;
    int studentAge;
    double eWallet;

    cout << "Student Name        :"; 
    getline(cin, studentName); 

    cout << "Student Gender      :"; 
    getline(cin, studentGender);

    cout << "Student Age         :";
    cin >> studentAge; 

    cin.ignore(1,'\n'); 
    
    cout << "Student Home Address:";
    getline(cin, homeAddress);
    
    cout << "E-wallet Amount     : RM"; 
    cin >> eWallet; 

    cout << " Student details as below:";
    cout << "\n=========================================================================================================";
    cout << "\n|Name\t\t\t| Age\t| Gender | Address\t\t\t\t\t|E-wallet amount|";
    cout << "\n=========================================================================================================";
    cout << "\n|" << left << setw(23) << studentName << "|" << setw(7) << studentAge << "|" << setw(8) << studentGender << "|"
    << setw(46) << homeAddress << "|" << setw(11) << "RM" << eWallet << "|";
    cout << "\n=========================================================================================================";
}