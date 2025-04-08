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


// A-2
int main() {

    string name = "Test";
    string gender = "Female";
    int age = 23;
    string address = "Selangor";
    double eWallet = 25.77;

    cout << "Student Name      : " << name << endl;
    cout << "Student Gender    : " << gender << endl;
    cout << "Student Age       : " << age << endl;
    cout << "Student Home Address : " << address << endl;
    cout << "E-wallet Amount   : RM" << fixed << setprecision(2) << eWallet << endl;


    cout << "| Student Details as below:         |\n";

    cout << "| Name      : " << name << "               |\n";
    cout << "| Age       : " << age << "                |\n";
    cout << "| Gender    : " << gender << "             |\n";
    cout << "| Address   : " << address << "            |\n";
    cout << "| E-Wallet  : RM"<< eWallet << "           |\n";


    return 0;
}