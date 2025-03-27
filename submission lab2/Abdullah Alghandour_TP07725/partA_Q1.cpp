#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Question 1
    string name, gender, address;
    int age;
    double amount;

    cout << "Student Name" << setw(20) << ":";
    getline(cin, name);
    cout << "Student Gender" << setw(18) << ":";
    getline(cin, gender);
    cout << "Student Age" << setw(21) << ":";
    cin >> age;
    cin.ignore();
    cout << "Student Home Address" << setw(12) << ":";
    getline(cin, address);
    cout << "E-wallet Amount" << setw(20) << ":RM ";
    cin >> amount;
    cin.ignore();

    cout << "\nStudent details as below:\n";

    for (int j = 0; j < 81; j++)
    {
        cout << "=";
    }
    cout << endl;

    cout << "| " << left << setw(15) << "Name"
         << "| " << setw(5) << "Age"
         << "| " << setw(10) << "Gender"
         << "| " << setw(15) << "Address"
         << "| " << setw(25) << "E-wallet amount" << "|\n";

    for (int j = 0; j < 81; j++)
    {
        cout << "=";
    }
    cout << endl;

    cout << "| " << left << setw(15) << name
         << "| " << setw(5) << age
         << "| " << setw(10) << gender
         << "| " << setw(15) << address
         << "| RM" << setw(23) << amount << "|\n";

    for (int j = 0; j < 81; j++)
    {
        cout << "=";
    }
    cout << endl;

    return 0;
}
