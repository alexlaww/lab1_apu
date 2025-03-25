#include <iostream>

class Employee {
private:
    std::string empName;
    int empId;
    std::string empDep;
    float empSal;
    std::string empTitle;

public:
    Employee() {
        empName = "";
        empId = 0;
        empDep = "";
        empSal = 0;
        empTitle = "";
    }

    Employee(std::string a, int b) {
        empName = a;
        empId = b;
        empDep = "";
        empSal = 0;
        empTitle = "";
    }

    Employee(std::string a, int b, std::string c, float d, std::string e) {
        empName = a;
        empId = b;
        empDep = c;
        empSal = d;
        empTitle = e;
    }


    void setName(std::string a) {empName = a;}
    void setId(int id) { empId = id; }
    void setDepartment(std::string dep) { empDep = dep; }
    void setSalary(float sal) { empSal = sal; }
    void setTitle(std::string title) { empTitle = title; }


    std::string getName() {return empName;}
    int getId() {return empId;}
    std::string getDepartment() { return empDep; }
    float getSalary() { return empSal; }
    std::string getTitle() { return empTitle; }

    void display() {
        std::cout << "Name: " << getName() 
                  << "\nID Number: " << getId() 
                  << "\nDepartment: " << getDepartment() 
                  << "\nSalary: RM" << getSalary() 
                  << "\nPosition: " << getTitle() 
                  << "\n---------------------------\n";
    }
};

int main() {
    Employee emp1, emp2, emp3, emp4;

    emp1.setName("Susan");
    emp1.setId(47899);
    emp1.setDepartment("Accounting");
    emp1.setSalary(13500);
    emp1.setTitle("Vice President");

    emp2.setName("Matthew");
    emp2.setId(34522);
    emp2.setDepartment("IT");
    emp2.setSalary(6500);
    emp2.setTitle("Programmer");

    emp3.setName("James");
    emp3.setId(65881);
    emp3.setDepartment("Manufacturing");
    emp3.setSalary(7500);
    emp3.setTitle("Engineer");

    emp1.display();
    emp2.display();
    emp3.display();
    emp4.display();
}