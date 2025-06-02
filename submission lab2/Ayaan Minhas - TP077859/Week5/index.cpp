#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int emp_id;
    string department;
    string position;
    double salary;

public:
    // Default constructor
    Employee() {
        name = "";
        emp_id = 0;
        department = "";
        position = "";
        salary = 0;
    }

    // Constructor with name, emp_id, department, and position
    Employee(string emp_name, int id, string dept, string job_position) {
        name = emp_name;
        emp_id = id;
        department = dept;
        position = job_position;
        salary = 0; // default salary value
    }

    // Constructor with name and emp_id only (department and position default to empty)
    Employee(string emp_name, int id) {
        name = emp_name;
        emp_id = id;
        department = "";
        position = "";
        salary = 0;
    }

    // Setter functions
    void setName(string emp_name) {
        name = emp_name;
    }

    void setEmpId(int id) {
        emp_id = id;
    }

    void setDepartment(string dept) {
        department = dept;
    }

    void setPosition(string job_position) {
        position = job_position;
    }

    void setSalary(double emp_salary) {
       salary = emp_salary;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getEmpId() {
        return emp_id;
    }

    string getDepartment() {
        return department;
    }

    string getPosition() {
        return position;
    }

    double getSalary() {
        return salary;
    }

    // Method to input employee data
    void inputEmployeeData() {
        cout << "Enter employee's name: ";
        getline(cin, name);
        cout << "Enter employee's ID number: ";
        cin >> emp_id;
        cin.ignore(); // To ignore the newline character left in the input buffer
        cout << "Enter employee's department: ";
        getline(cin, department);
        cout << "Enter employee's job title: ";
        getline(cin, position);
        cout << "Enter employee's salary: ";
        cin >> salary;
    }

    // Method to display employee data
    void displayEmployeeData() {
        cout << "\nEmployee Data:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Constructor that accepts name, ID, department, and position
    Employee employee1("John Doe", 101, "HR", "Manager");
    employee1.displayEmployeeData();

    // Constructor that accepts name and ID only (department and position default to empty)
    Employee employee2("Jane Smith", 102);
    employee2.displayEmployeeData();

    // Default constructor (all fields initialized with default values)
    Employee employee3;
    employee3.inputEmployeeData(); // User will input data for this employee
    employee3.displayEmployeeData();

    return 0;
}
