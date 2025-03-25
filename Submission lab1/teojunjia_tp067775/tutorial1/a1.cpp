#include <iostream>
using namespace std; 

int main() {
    string name, gender,address;
    int age;
    double amount;
    cout << "Student Name\t:"; cin >> name;
    cout << "Student Gender\t:"; cin >> gender;
    cout << "Student Age\t:"; cin >> age;
    cout << "Student Home Address\t:"; cin >> address;
    cout << "E-wallet Amount\t:"; cin >> amount;

    cout << "Studet details as below:";
    cout << string(75, '-') << endl;
    cout << "\n|Name\t|Age\t|Gender\t|Address\t|E-wallet Amount\t|\n";
    cout << name + "\t" << age << "\t" << gender << "\t" << address << "\t" <<amount;

    return 0;
}