#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


void line(){
cout<<"================================================================================================="<<endl;
}
void line2(){
cout<<"================================================"<<endl;
}

int main(){
    string name,gen,address;
    int age=12;
    double amount=12.3;

    cout<<"Student Name\t\t:";
    getline(cin,name);
    cout<<"Student Gender\t\t:";
    getline(cin,gen);
    cout<<"Student Age\t\t:";
    cin>>age;
    fflush(stdin);
    cin.clear();
    cout<<"Student Home Address\t:";
    getline(cin,address);
    cout<<"E-wallet Amount\t\t: RM";
    cin>>amount;



    //q1
/*
    cout<<"\n\nStudent details as below:"<<endl;
    line();
    cout<<"|Name"<<setw(20)<<"|Age"<<setw(20)<<"|Gender"<<setw(20)<<"|Address"<<setw(30)<<"|E-wallet amount"<<setw(3)<<"|"<<endl;
    line();
    cout<<"|"<<name<<setw(13)<<"|"<<age<<setw(15)<<"|"<<gen<<setw(14)<<" |"<<address<<setw(16)<<"|RM"<<fixed<<setprecision(2)<<amount<<setw(8)<<"|"<<endl;
    line();
*/
    fflush(stdin);
    cout<<"Press any key to continue..."<<endl;
    if(cin.get()){
        line2();
        cout<<"|Student details as below:"<<setw(22)<<"|"<<endl;
        line2();
        cout<<"|Name\t\t:"<<setw(30)<<name<<"|"<<endl;
        cout<<"|Age\t\t:"<<setw(30)<<age<<"|"<<endl;
        cout<<"|Gender\t\t:"<<setw(30)<<gen<<"|"<<endl;
        cout<<"|Address\t:"<<setw(30)<<address<<"|"<<endl;
        cout<<"|E-Wallet\t:RM"<<setw(28)<<fixed<<setprecision(2)<<amount<<"|"<<endl;
        line2();


    }

    return 0;
}
