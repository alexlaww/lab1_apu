#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    string department;
    double salary;
    string jobTitle;
};

int main() {
    Employee emp;

    cout << "Enter employee name: ";
    getline(cin, emp.name);

    cout << "Enter employee ID: ";
    cin >> emp.id;
    cin.ignore();

    cout << "Enter employee department: ";
    getline(cin, emp.department);

    cout << "Enter employee salary: ";
    cin >> emp.salary;
    cin.ignore();

    cout << "Enter employee job title: ";
    getline(cin, emp.jobTitle);

    cout << "\n--- Employee Information ---" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "ID: " << emp.id << endl;
    cout << "Department: " << emp.department << endl;
    cout << "Salary: $" << emp.salary << endl;
    cout << "Job Title: " << emp.jobTitle << endl;

    return 0;
}
