#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    int emp_id;
    string department;
    string position;
    double salary;
public:
   //deafult constructor
   Employee(){
       name = " ";
       emp_id = 0;
       department = " ";
       position = " ";
       salary = 0.0;
   }
   //constructor with name , emo_id, department, position and salary
   Employee(string n, int id, string dep, string pos, double sal){
       name = n;
       emp_id = id;
       department = dep;
       position = pos;
       salary = sal;
   }

   //constructor with name and emp_id only(department and position default to empty)
   Employee(string n, int id){
       name = n;
       emp_id = id;
       department = " ";
       position = " ";
       salary = 0.0;
   }
   //setter functions
   void setName(string n){
       name = n;
   }
    void setEmpId(int id){
         emp_id = id;
    }
    void setDepartment(string dep){
        department = dep;
    }
    void setPosition(string pos){
        position = pos;
    }
    void setSalary(double sal){
        salary = sal;
    }
    //getter functions
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
    //method to input employee data
    void inputEmployeeData(){
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Department: ";
        cin >> department;
        cout << "Enter Employee Position: ";
        cin >> position;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    //method to display employee data   
    void displayEmployeeData(){
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Department: " << department << endl;
        cout << "Employee Position: " << position << endl;
        cout << "Employee Salary: " << salary << endl;
    }
  
};

int main(){
    Employee emp1;
    Employee emp2("Ahmed", 1234, "IT", "Manager", 5000.0);
    Employee emp3("Ali", 5678);
    emp1.inputEmployeeData();
    emp1.displayEmployeeData();
    emp2.displayEmployeeData();
    emp3.displayEmployeeData();
    return 0;
}