#include<iostream>

using namespace std;

int main(){
    string name, gender, address, age, amount;
    cout <<"Student Name \t\t: ";
    getline(cin, name);
    cout << "\n";
    cout <<"Student Gender \t\t: ";
    getline(cin, gender);
    cout << "\n";
    cout <<"Student Age \t\t: ";
    getline(cin, age);
    cout << "\n";
    cout <<"Student Home Address \t: ";
    getline(cin, address);
    cout << "\n";
    cout <<"E-wallet Amount \t: ";
    getline(cin, amount);
    cout << "\n";
    cout <<"Student details as below: "<<endl;
    for(int i = 0; i < 70; i++){
        cout << "=";
    }
    cout << "\n";
    cout <<"|Name\t\t |Age\t|Gender\t|Address\t|E-wallet amount|"<<endl;
    for(int i = 0; i < 70; i++){
        cout << "=";
    }
    cout << "\n";
    cout <<"|"<<name<<"\t |"<<age<<"\t|"<<gender<<"\t|"<<address<<"\t|"<<amount<<"\t|"<<endl;
    for(int i = 0; i < 70; i++){
        cout << "=";
    }
    cout << "\n";
    return 0;
}