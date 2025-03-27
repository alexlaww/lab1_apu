#include <iostream>
#include <iomanip>
#include <string> // Include string header for using std::string

using namespace std;

int main() {
    string name, gender, address, age_str;
    int age;
    double w_amount;

    cout << "Student Name: ";
    getline(cin, name); 

    cout << "Student Gender: ";
    getline(cin, gender); 

    cout << "Student Age: ";
    getline(cin, age_str); 
    age = stoi(age_str); 

    cout << "Student Home Address: ";
    getline(cin, address); 

    cout << "E-wallet Amount: RM";
    string w_amount_str;
    getline(cin, w_amount_str); 
    w_amount = stod(w_amount_str); // Convert string to double

    cout << "Student Name: " << name << endl;
    cout << "Student Gender: " << gender << endl;
    cout << "Student Age: " << age << endl;
    cout << "Student Home Address: " << address << endl;
    cout << "E-Wallet Amount: RM" << fixed << setprecision(2) << w_amount << endl;

    return 0;
}