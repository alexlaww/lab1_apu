#include<iostream>
#include<string>
using namespace std;

int main(){
    string name, gender, age, address, amount;

    cout << "Student Name:  ";
    cin >> name;
    cout << "Student Gender:    ";
    cin >> gender;
    cout << "Student Age:   ";
    cin >> age;
    cout << "Student Home Address:   ";
    getline(cin,address);   
    cout << "E-wallet Amount: ";
    cin >> amount;

    cout <<"Students details as below:\n";
    cout <<"=========================================================================================\n";
    cout <<"| Name\t | Gender \t | Age \t | Address \t | E-wallet amount\n";
    cout <<"=========================================================================================\n";
    cout << "|" << name << "|" << gender << "|" << age << "|" << address << "|" << amount << "\n";
    cout <<"=========================================================================================\n";
} 