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
    // Default Constructor
    Employee() {
        name = " ";
        idNumber = 0;
        department = " ";
        jobTitle = " ";
        salary = 0.0;
    }

    // Constructor with all attributes
    Employee(string n, int id, string dept, string job) {
        name = n;
        idNumber = id;
        department = dept;
        jobTitle = job;
        salary = 0.0;
    }

    // Constructor with name and ID only
    Employee(string n, int id) {
        name = n;
        idNumber = id;
        department = " ";
        jobTitle = " ";
        salary = 0.0;
    }

    // Setter methods
    void setName(string n) { name = n; }
    void setId(int id) { idNumber = id; }
    void setDepartment(string dept) { department = dept; }
    void setJobTitle(string job) { jobTitle = job; }
    void setSalary(double s) { salary = s; }

    // Getter methods
    string getName() { return name; }
    int getId() { return idNumber; }
    string getDepartment() { return department; }
    string getJobTitle() { return jobTitle; }
    double getSalary() { return salary; }

    // Display employee info
    void display() {
        cout << "\nEmployee Information:\n";
        cout << "Name: " << name << endl;
        cout << "ID: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Job Title: " << jobTitle << endl;
        cout << "Salary: $" << salary << endl;
    }
};

// Sample main program
int main() {
    string name, dept, title;
    int id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cin.ignore();  // clear newline
    cout << "Enter department: ";
    getline(cin, dept);
    cout << "Enter job title: ";
    getline(cin, title);
    cout << "Enter salary: ";
    cin >> salary;

    Employee emp(name, id, dept, title);
    emp.setSalary(salary);

    emp.display();

    return 0;
}
