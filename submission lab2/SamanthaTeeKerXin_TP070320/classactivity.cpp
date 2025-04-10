#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int id;
        string department;
        string jobtitle;
        double salary;

    public:
    // Default Constructor
        Employee(){
            name = " ";
            id = 0;
            department = " ";
            jobtitle = " ";
            salary = 0;
        }

        Employee(string emp_name, int emp_id, string emp_dept, string emp_jobtitle){
            name = emp_name;
            id = emp_id;
            department = emp_dept;
            jobtitle = emp_jobtitle;
            salary = 0;
        }

        Employee(string emp_name, int emp_id){
            name = emp_name;
            id = emp_id;
            department = " ";
            jobtitle = " ";
            salary = 0;
        }
        
        void setName(string emp_name){
            name = emp_name;
        }

        void setId(int emp_id){
            id = emp_id;
        }

        void setDepartment(string emp_department){
            department = emp_department;
        }

        void setJobTitle(string emp_jobtitle){
            jobtitle = emp_jobtitle;
        }

        void setSalary(double emp_salary){
            salary = emp_salary;
        }

        string  getName(){
            return name;
        }

        int getId(){
            return id;
        }

        string getDepartment(){
            return department;
        }

        string getJobTitle(){
            return jobtitle;
        }

        double getSalary(){
            return salary;
        }

        void inputEmployeeData(){
            cout << "Enter employee's name";
            getline(cin, name);

            cout << "Enter employee's ID number";
            cin >> id;
            cin.ignore(); // To ignore the newline character left in the input buffer

            cout << "Enter employee's department";
            getline(cin, department);

            cout << "Enter employee's job title";
            getline(cin, jobtitle);

            cout << "Enter employee's salary";
            cin >> salary;
            cin.ignore();
        }

        void outputEmployeeData(){
            cout << "\nEmployee Data:" << endl;
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Department: " << department << endl;
            cout << "Position: " << jobtitle << endl;
            cout << "Salary: " << salary << endl;
        }



};

int main(){
    //Constructor that accepts name, ID, department, & position
    Employee employee1("John Doe", 101, "HR", "Manager");
    employee1.outputEmployeeData();

    //Constructor that accepts name & ID only
    Employee employee2("Jane Smith", 102);
    employee2.outputEmployeeData();

    Employee employee3;
    employee3.inputEmployeeData();
    employee3.outputEmployeeData();
}