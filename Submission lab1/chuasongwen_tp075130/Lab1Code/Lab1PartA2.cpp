#include <iostream>
#include <string> // Required for using string
#include <iomanip>

using namespace std;

int main() {
    string Name, Gender, Address;
    int Age;
    double EWallet;

    cout << "Student Name              : ";
    getline(cin, Name);

    cout << "Student Gender            : ";
    getline(cin, Gender);

    cout << "Student Age               : ";
    cin >> Age;
    cin.ignore(); // Ignore leftover newline before using getline()

    cout << "Student Home Address      : ";
    getline(cin, Address);

    cout << "E-wallet Amount           : RM ";
    cin >> EWallet;
    cin.ignore();

    int tableWidth = 41; // Total table width (adjust as needed)
    
    cout << "Press any key to continue...";
    cin.get(); // Wait for user to press a key

    // Display Student Details Table
    cout << endl
         << string(tableWidth, '=') << endl
         << setw(40) << left << "| Student details as below:" << "|" << endl
         << string(tableWidth, '=') << endl 
         << "| " << setw(18) << left << "Name     :"    <<setw(20) <<right <<Name    << "|" << endl
         << "| " << setw(18) << left << "Age      :"    <<setw(20) <<right <<Age     << "|" << endl
         << "| " << setw(18) << left << "Gender   :"    <<setw(20) <<right <<Gender  << "|" << endl
         << "| " << setw(18) << left << "Address  :"    <<setw(20) <<right <<Address << "|" << endl
         << "| " << setw(18) << left << "E-wallet : RM" <<setw(20) <<right <<EWallet << "|" << endl
         << string(tableWidth, '=') << endl;
    
    return 0;
}
