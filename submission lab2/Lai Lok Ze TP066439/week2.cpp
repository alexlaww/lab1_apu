#include<iostream>
using namespace std;

int main(){
    string name, gender, address;
    int age;
    double amount;

    cout << "Student Name           :";
    cin >> name;
    cout << "Student Gender         :";
    cin >> gender;
    cout << "Student Age            :";
    cin >> age;
    cout << "Student Address        : ";
    cin >> address;
    cout << "E-Wallet amount        : RM";
    cin >> amount;

    cout <<"Press any key to continue.....";

    cout <<"Student details as below:""\n";
    cout <<"======================================================================\n";
    cout <<"| Name          | Age       | Gender    | Address   | E-Wallet amount|\n";
    cout <<"======================================================================\n";
    cout <<"|"<< name <<"   |        "<< age <<"|"<< gender << "|                    " << address << "|                  "<< amount <<"|             \n";
    cout <<"=======================================================================";
}