#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

// 20, 6, 10, 20, 20
void printLine() {
    cout << "+====================+======+==========+====================+====================+" << endl;
}

int main(){

    struct {
        string name, gender, address;
        double amount;
        int age;
    }student;


    // Input student details
    cout << "Student Name          : ";
    getline(cin, student.name);

    cout << "Student Gender        : ";
    getline(cin, student.gender);

    cout << "Student Age           : ";
    cin >> student.age;
    cin.ignore();  // Clear newline from input buffer

    cout << "Student Home Address  : ";
    getline(cin, student.address);

    cout << "E-wallet Amount       : ";
    cin >> student.amount;

    cout << endl << "\n Student details as below: " << endl;


    printLine();

    // Table Headers
    cout << "| " << setw(19) << left << "Name"  // Adjusted width: 20 - 1 (for | space)
        << "| " << setw(5)  << left << "Age"   
        << "| " << setw(9)  << left << "Gender"  
        << "| " << setw(19) << left << "Address"  
        << "| " << setw(18) << left << "E-wallet Amount"
        << " |" << endl;

    printLine();

    // Table Data
    cout << "| " << setw(19) << left << student.name
        << "| " << setw(5)  << left << student.age
        << "| " << setw(9)  << left << student.gender
        << "| " << setw(19) << left << student.address
        << "| RM " << setw(15) << left << student.amount
        << " |" << endl;

    printLine();


    return 0;
}
