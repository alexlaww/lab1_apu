#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;
    double salary;

public:
    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
        salary = 0.0;
    }

    // Constructor with name and ID only
    Employee(string empName, int empID) {
        name = empName;
        idNumber = empID;
        department = "";
        position = "";
        salary = 0.0;
    }

    // Constructor with all details
    Employee(string empName, int empID, string empDept, string empPosition, double empSalary) {
        name = empName;
        idNumber = empID;
        department = empDept;
        position = empPosition;
        salary = empSalary;
    }

    // Setter functions
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empID) {
        idNumber = empID;
    }

    void setDepartment(string empDept) {
        department = empDept;
    }

    void setPosition(string empPosition) {
        position = empPosition;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    // Getter functions
    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }

    double getSalary() const {
        return salary;
    }

    // Function to display employee details
    void displayInfo() const {
        cout << "\nEmployee Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID Number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
     // Creating employee objects with given data
     Employee emp1("Susan", 47899, "Accounting", "Vice President", 13500.0);
     Employee emp2("Matthew", 34522, "IT", "Programmer", 7500.0);
     Employee emp3("James", 65881, "Manufacturing", "Engineer", 6500.0);
 
     // Display each employee's info
     emp1.displayInfo();
     emp2.displayInfo();
     emp3.displayInfo();
 
     return 0;
}
