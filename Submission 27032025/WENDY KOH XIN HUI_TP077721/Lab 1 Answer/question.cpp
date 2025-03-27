#include<iostream>
using namespace std;
//for setprecision
#include <iomanip>

//Question 1:
int main(){
    string name="Mien May";
    string gender="Female";
    int age=23;
    string address="Selangor";
    double w_amount=23.12;

    cout<<"Student Name:"<<name<<"\n";
    cout<<"Student Gender:"<<gender<<"\n";
    cout<<"Student Age:"<<age<<"\n";
    cout<<"Student Home Address:"<<address<<"\n";
    cout<<"E-Wallet Amount:"<<"RM"<<w_amount<<"\n";

    cout<<"Student Name:"<<name<<endl;
    cout<<"Student Gender:"<<gender<<endl;
    cout<<"Student Age:"<<age<<endl;
    cout<<"Student Home Address:"<<address<<endl;
    cout<<"E-Wallet Amount:RM"<<fixed<<setprecision(2)<<w_amount<<endl;

    cout<<"\nStudent detials as below:\n";
    cout<<"----------------------------------------------------\n";
    cout<<"|Name           |Age  |Gender  |Address |E-wallet amount|\n";
    cout<<"-----------------------------------------------------\n";
    cout
    <<"|"<<setw(15)<<left<<name<<
    "|"<<setw(5)<<age<<
    "|"<<setw(8)<<gender<<
    "|"<<setw(8)<<address<<
    "|"<<setw(15)<<w_amount<<
    "|\n";
    cout<<"-------------------------------------------------------\n";

    return 0;
}






