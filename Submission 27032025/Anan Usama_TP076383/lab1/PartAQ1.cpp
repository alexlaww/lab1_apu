// A-1
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {
    string name = "Mien May";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double eWallet = 23.12;

    cout << "Student Name      : " << name << endl;
    cout << "Student Gender    : " << gender << endl;
    cout << "Student Age       : " << age << endl;
    cout << "Student Home Address : " << address << endl;
    cout << "E-wallet Amount   : RM" << fixed << setprecision(2) << eWallet << endl;

    cout << "\nStudent details as below:\n";

    cout << "| Name       | Age  | Gender  | Address  | E-wallet amount |\n";

    cout << "| " << setw(10) << left << name << " | "
        << setw(4) << age << " | "
        << setw(7) << gender << " | "
        << setw(8) << address << " | "
        << "RM" << fixed << setprecision(2) << eWallet << "     |\n";


    return 0;
}


