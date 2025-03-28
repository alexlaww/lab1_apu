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
    // Default constructor
    Employee(){
        name = " ";
        emp_id = 0;
        department = " ";
        position = " ";
        salary = 0;
    }

    //constructor with name, emp_id, department and position
    Employee(string emp_name, int id , string dept, string job_position){
        name = emp_name;
        emp_id = id;
        department = dept;
        position = job_position;
        salary =0 ; //default salary value

    }

     //constructor with name, emp_id, only (department and position default to empty)
     Employee(string emp_name , int id){
        name = emp_name;
        emp_id = id;
        department = " ";
        position = " ";
        salary = 0;

     }

     //setter functions 
     void setName(string emp_name){
        name = emp_name;
     }

     void setEmpId(int id){
        emp_id =  id;
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


     //Getter functions

     string getname(){
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

     //Method to input employee data
     void inputEmployeeData(){
        cout << "Enter emplyee name: ";
        getline(cin, name);
        cout << "enter employee ID number: ";
        cin >> emp_id;
        cin.ignore(); //to ignore the newline character left in the input buffer
        cout << "Enter empployees department: ";
        getline(cin,department);
        cout << "Enter employee job title: ";
        getline(cin, position);
        cout << "Enter employee salary: ";
        cin >> salary;


     }

     //method to display employee data
     void displayEmployeeData(){
        cout<< "\nEmployee Data: " << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << emp_id << endl;
        cout<< "Department: "<< department << endl;
        cout << "position: "<< position << endl;
        cout << "Salary : $" << salary <<endl;

     }
    };

    int main(){
        //constructor that accepts name, id ,department and position
        Employee employee1("John Doe", 101, "HR", "Manager");
        employee1.displayEmployeeData();

         //constructor that accepts only name, id (department and position are default to empty)
         Employee employee2("jane smith", 102);
         employee2.displayEmployeeData();

         //default constructor (all feilds initialized with default values)
         Employee employee3;
         employee3.inputEmployeeData(); //user will input data for this employee
         employee3.displayEmployeeData();

         return 0;


    }
    