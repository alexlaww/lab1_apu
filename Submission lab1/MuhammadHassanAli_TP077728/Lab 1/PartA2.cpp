#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name, gender, address;
    int age;
    float ewallet;

    // Input
    cout << "Student Name       :";
    cin >> name;
    cout << "Student Gender     :";
    cin >> gender;
    cout << "Student Age        :";
    cin >> age;
    cout << "Student Home Address:";
    cin >> address;
    cout << "E-wallet Amount    :RM ";
    cin >> ewallet;

    cout << endl;

    // Display formatted block
    cout << "======================================================" << endl;
    cout << "|              Student Details as below:             |" << endl;
    cout << "======================================================" << endl;
    cout << "| Name    : " << name << endl;
    cout << "| Age     : " << age << endl;
    cout << "| Gender  : " << gender << endl;
    cout << "| Address : " << address << endl;
    cout << "| E-Wallet: RM" << fixed << setprecision(2) << ewallet << endl;
    cout << "======================================================" << endl;

    return 0;
}
