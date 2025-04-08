#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name = "Test";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double ewallet = 25.77;

    cout << "Student Name        : " << name << endl;
    cout << "Student Gender      : " << gender << endl;
    cout << "Student Age         : " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-wallet Amount     : RM " << fixed << setprecision(2) << ewallet << endl;

    cout << "Press any key to continue . . .";
    cin.get(); 

    cout << "\n| Student Details as below:                                   |\n";
    cout << "-------------------------------------------------------------\n";
    cout << "| Name    : " << left << setw(42) << name << "|\n";
    cout << "| Age     : " << left << setw(42) << age << "|\n";
    cout << "| Gender  : " << left << setw(42) << gender << "|\n";
    cout << "| Address : " << left << setw(42) << address << "|\n";
    cout << "| E-Wallet: RM " << fixed << setprecision(2) << setw(38) << ewallet << "|\n";
    cout << "-------------------------------------------------------------\n";

    return 0;
}
