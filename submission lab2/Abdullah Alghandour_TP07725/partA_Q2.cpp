#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Question 2
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
    cout << "Press any key to continue . . .";
    cin.get();

    for (int j = 0; j < 49; j++)
    {
        cout << "=";
    }
    cout << endl;

    cout << "| Student Details as below:" << setw(23) << "|\n";

    for (int j = 0; j < 49; j++)
    {
        cout << "=";
    }
    cout << endl;

    // Print data rows with alignment
    cout << "| " << left << setw(10) << "Name" << ": " << right << setw(34) << name << "|\n";
    cout << "| " << left << setw(10) << "Age" << ": " << right << setw(34) << age << "|\n";
    cout << "| " << left << setw(10) << "Gender" << ": " << right << setw(34) << gender << "|\n";
    cout << "| " << left << setw(10) << "Address" << ": " << right << setw(34) << address << "|\n";
    cout << "| " << left << setw(10) << "E-Wallet" << ": RM " << right << setw(31) << amount << "|\n";

    for (int j = 0; j < 49; j++)
    {
        cout << "=";
    }
    cout << endl;

    return 0;
}