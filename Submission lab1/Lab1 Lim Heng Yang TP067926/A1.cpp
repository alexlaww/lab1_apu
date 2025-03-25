#include <iostream>
using namespace std;

int main() {
    string name, gender, age, address, amount;
    cout << "student name"; cin >> name; 
    cout << "student gender"; cin >> gender;
    cout << "student age"; cin >> age;
    cout << "student address"; cin >> address;
    cout << "student amount"; cin >> amount;

    cout << "Student details as below" << endl;
    cout << string(75, '-') << endl;
    cout << "name\t| gender\t| age\t| address\t| amount\t" << endl;
    cout << string(75, '-') << endl;
    cout << name << gender << age << address << amount;
    cout << string(75, '-') << endl;
}