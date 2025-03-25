#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string name, gender, address;
    int age;
    double amount;

    cout << "Student Name : ";
    cin >> name;
    
    cout << "Student Gender : ";
    cin >> gender;

    cout << "Student Age : ";
    cin >> age;

    cout << "Student Home Address : ";
    cin >> address;

    cout << "E-wallet Amount :RM ";
    cin >> amount;

    cout << "-----------------------------------------------------------\n";
    cout << "\n | Student details as below: |\n";
    cout << "-----------------------------------------------------------\n";
    cout << "|Name|Age|Gender|Address|E-wallet amount|\n";
    cout << "-----------------------------------------------------------\n";
    cout << "|" << name << "|" << age << "|" << gender << "|" << address << "| RM" << amount << "|\n";
    cout << "-----------------------------------------------------------\n";

    return 0;
}