#include <iostream>
using namespace std;

int main () {
    string name;
    string  gender;
    int age;
    string home_address;
    double eWalletAmount;

    cout << "Student Name:"  ;
    getline(cin, name);

    cout << "Student Gender: ";
    getline(cin, gender);

    cout << "Student Age: ";
    cin >> age;
    cin.ignore();

    cout << "Student Home Address: ";
    getline(cin, home_address);

    cout << "E-wallet Amount: RM";
    cin >> eWalletAmount;
    cin.ignore();

    cout << "Student Name\t\t\t:"  << name <<endl;
    cout << "Student Age\t\t\t:" << age <<endl;
    cout << "Student Gender\t\t:" << gender << endl;
    cout << "Student Home Address\t\t:" << home_address <<endl;
    cout << "E-wallet Amount\t\t\t:RM" << eWalletAmount <<endl;

    cout << "Student details as below:" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Name\t\t: " << name << endl;
    cout << "Age\t\t: " << age << endl;
    cout << "Gender\t\t: " << gender << endl;
    cout << "Home Address\t: " << home_address << endl;
    cout << "E-wallet Amount\t: RM" << eWalletAmount << endl;

    cout << "---------------------------------------------" << endl;
    cout << "Thank you for providing the details!" << endl;

    return 0; // Indicate successful program termination
}

