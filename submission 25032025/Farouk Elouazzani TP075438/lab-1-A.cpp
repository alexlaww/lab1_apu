#include <iostream>
#include <iomanip>
using namespace std;

void q1(){
    string name= "Mien May";
    string gender = "Female";
    string age = "23";
    string address = "Selangor";
    string amount = "23.12"; 

    cout << left << setw(25) << "Strudent Name "<< ":"+name+"\n";
    cout << left << setw(25) << "Strudent Gender" <<":" + gender+"\n";
    cout << left << setw(25) << "Strudent Age"<<":"+ age+"\n";
    cout << left << setw(25) << "Strudent Home Address" <<":"+ address+"\n";
    cout << left << setw(25) << "E-Wallet Amount" <<":"+ amount+"\n\n";

    cout << "Student details as below:" << endl;
    cout << "=====================================================================" << endl;
    cout << "| " << left << setw(12) << "Name" << "| " << setw(4) << "Age" << " | " << setw(8) << "Gender" << " | " << setw(10) << "Address" << " | " << setw(20) << "E-wallet amount" << " |" << endl;
    cout << "=====================================================================" << endl;

    cout << "| " << left << setw(12) << name << "| " << setw(4) << age << " | " << setw(8) << gender << " | " << setw(10) << address << " | RM" << setw(18)  << amount << " |" << endl;
    cout << "=====================================================================" << endl;
}
void q2(){
    string name, gender, address, amount, age;

    cout << left << setw(25) << "Student Name" << ":";
    getline(cin, name);
    cout << left << setw(25) << "Student Gender" << ":";
    getline(cin, gender);
    cout << left << setw(25) << "Student Age" << ":";
    getline(cin, age);
    cout << left << setw(25) << "Student Home Address" << ":";
    getline(cin, address);
    cout << left << setw(25) << "E-Wallet Amount" << ":";
    getline(cin, amount);
    cout << "Press any key to contnue . . . ";
    getchar();

    cout << "====================================================" << endl;
    cout << left << setw(51) << "| Student details as below:" << "|" <<endl;
    cout << "====================================================" << endl;
    cout << left << setw(10) << "| Name" << ":" ;
    cout << right << setw(40)<<name<<"|"<<endl;
    cout << left << setw(10) << "| Age" << ":" ;
    cout << right << setw(40)<<age<<"|"<<endl;
    cout << left << setw(10) << "| Gender" << ":" ;
    cout << right << setw(40)<<gender<<"|"<<endl;
    cout << left << setw(10) << "| Address" << ":" ;
    cout << right << setw(40)<<address<<"|"<<endl;
    cout << left << setw(10) << "| E-Wallet" << ": RM" ;
    cout << right << setw(37)<<amount<<"|"<<endl;
    cout << "====================================================" << endl;
}



int main(){
    q1();
    //q2();
    return 0;
}