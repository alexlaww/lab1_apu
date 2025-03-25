#include <iostream>
using namespace std;

int main(){

    //Question 1
    /*
    string name, gender, address;
    int age;
    double amount;
    cout << "\nStudent Name: ";
    cin >> name;
    cout << "\nGender: ";
    cin >> gender;
    cout << "\nStudent Age: ";
    cin >> age;
    cout << "\nStudent Home Address ";
    cin >> address;
    cout << "\nE-wallet amount: ";
    cin >> amount;

    cout << "===================================================================\n";
    cout << "Name\t\t| Age | Gender | Address\t| E-wallet amount |\n";
    cout << "===================================================================\n";
    cout << name << "\t\t| " << age << "  | " << gender << "    | " << address << "\t| " << amount << "\t\t|\n";
    cout << "===================================================================";
    */

    string name, gender, address;
    int age;
    double amount;
    cout << "\nStudent Name: ";
    cin >> name;
    cout << "\nGender: ";
    cin >> gender;
    cout << "\nStudent Age: ";
    cin >> age;
    cout << "\nStudent Home Address ";
    cin >> address;
    cout << "\nE-wallet amount: ";
    cin >> amount;

    cout<<"|--------------------------------------------------------------------|"<<endl;
    cout<<"|Student Details as below:                                           |"<<endl;
    cout<<"|===================================================================\n";
    cout<<"|Name    |                           "<<name<<"\t\t\t|"<<endl;
    cout<<"|Age     |                           "<<age<<"\t\t\t\t|"<<endl;
    cout<<"|Gender  |                           "<<gender<<"\t\t\t|"<<endl;
    cout<<"|Address |                           "<<address<<"\t\t\t|"<<endl;
    cout<<"|E-Wallet| RM                        "<<amount<<"\t\t\t|"<<endl;
    cout<<"|===================================================================\n";

    return 0;
}