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
    // Taking input from the user
    string name, department, position;
    int id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore(); // To ignore newline after entering ID

    cout << "Enter employee department: ";
    getline(cin, department);
    cout << "Enter employee position: ";
    getline(cin, position);
    cout << "Enter employee salary: ";
    cin >> salary;

    // Creating employee object with all details
    Employee emp(name, id, department, position, salary);

    // Displaying employee info
    emp.displayInfo();

    return 0;
}
