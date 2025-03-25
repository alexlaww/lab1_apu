#include <iostream>
#include <string>
using namespace std;

// Struct definition
struct Employee {
    string name;
    int id;
    string department;
    double salary;
    string position;
};

int main() {
    Employee emp;

    // Input employee data
    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter employee ID: ";
    cin >> emp.id;
    cin.ignore(); // Clear newline from input buffer

    cout << "Enter employee department: ";
    getline(cin, emp.department);

    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cin.ignore(); // Clear newline from input buffer

    cout << "Enter employee position: ";
    getline(cin, emp.position);

    // Output employee data
    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Department: " << emp.department << endl;
    cout << "Salary: $" << emp.salary << endl;
    cout << "Position: " << emp.position << endl;

    return 0;
}
