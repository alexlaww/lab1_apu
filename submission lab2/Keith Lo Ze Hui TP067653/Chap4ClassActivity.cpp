#include <iostream>
#include <string>
using namespace std;
//Class Activity 1
class Employee {
private:
    string name;
    int emp_id;
    string department;
    string position;
    double salary;

public:
    Employee(){
        name = "";
        emp_id = 0;
        department = "";
        position = "";
        salary = 0;
    }

    Employee(string emp_name, int id, string dept, string job_position){
        name = emp_name;
        emp_id = id;
        department = dept;
        position = job_position;
        salary = 0;
    }

    Employee(string emp_name, int id){
        name = emp_name;
        emp_id = id;
        department = "";
        position = "";
        salary = 0;
    }

    void setrName(string emp_name){
        name = emp_name;
    }

    void setEmpId(int id){
        emp_id = id;
    }

    void setDepartment(string dept){
        department = dept;
    }

    void setPosition(string job_position){
        position = job_position;
    }
    void setSalary(double emp_salary){
        salary = emp_salary;
    }

    string getName(){
        return name;
    }

    int getEmpId(){
        return emp_id;
    }

    string getDepartment(){
        return department;
    }

    string getPosition(){
        return position;
    }

    double getSalary(){
        return salary;
    }


    void inputEmployeeData(){
        cout << "Enter employee's name: ";
        getline(cin, name);
        cout << "Enter employee's ID number: ";
        cin >> emp_id;
        cin.ignore();
        cout << "Enter Employee's department: ";
        getline(cin, department);
        cout << "Enter Employee's job position: ";
        getline(cin, position);
        cout << "Enter Employees salary: ";
        cin >> salary;
    }

    void displayEmployeeData(){
        cout << "/nEmployee Data. " << endl;
        cout << "Name: " << name << endl;
        cout << "ID : " << emp_id << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: $" << salary << endl;
    }

};

int main(){
    Employee employee1("John Doe", 12345, "HR", "Manager");
    employee1.displayEmployeeData();

    Employee employee2("Jane Smith", 102);
    employee2.displayEmployeeData();

    Employee employee3;
    employee3.inputEmployeeData();
    employee3.displayEmployeeData();

    return 0;
}