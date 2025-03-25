#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string name, gender, homeAddress;
    int age;
    float amount;

    // Taking user input
    cout << "Student Name: ";
    getline(cin, name);

    cout << "Student Gender: ";
    cin >> gender;

    cout << "Student Age: ";
    cin >> age;
    cin.ignore(); // To handle the leftover newline character from previous input

    cout << "Home Address: ";
    getline(cin, homeAddress);

    cout << "E-wallet amount: ";
    cin >> amount;

    // Displaying details
    cout << "\n===========================================================\n";
    cout << "|                    Student Details                      |\n";
    cout << "===========================================================\n";
    cout << "| " << left << setw(20) << "Name" << ": " << setw(20) << name << " |\n";
    cout << "| " << left << setw(20) << "Age" << ": " << setw(20) << age << " |\n";
    cout << "| " << left << setw(20) << "Gender" << ": " << setw(20) << gender << " |\n";
    cout << "| " << left << setw(20) << "Home Address" << ": " << setw(20) << homeAddress << " |\n";
    cout << "| " << left << setw(20) << "E-wallet Amount" << ": RM" << fixed << setprecision(2) << setw(17) << amount << " |\n";
    cout << "===========================================================\n";

    return 0;
}
