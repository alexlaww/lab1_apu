#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string jobTitle;
    double salary;

public:
    Employee() {
        name = " ";
        idNumber = 0;
        department = " ";
        jobTitle = " ";
        salary = 0.0;
    }

    Employee(string n, int id, string dept, string job) {
        name = n;
        idNumber = id;
        department = dept;
        jobTitle = job;
        salary = 0.0;
    }

    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = " ";
        jobTitle = " ";
        salary = 0.0;
    }

    void setSalary(double s) { salary = s; }

    void display() {
        cout << "\nEmployee Information:\n";
        cout << "Name: " << name << endl;
        cout << "ID Number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << jobTitle << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("Susan", 47899, "Accounting", "Vice President");
    emp1.setSalary(13500.00);

    Employee emp2("Matthew", 34522, "IT", "Programmer");
    emp2.setSalary(6500.00);

    Employee emp3("James", 65881, "Manufacturing", "Engineer");
    emp3.setSalary(7500.00);

    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}
