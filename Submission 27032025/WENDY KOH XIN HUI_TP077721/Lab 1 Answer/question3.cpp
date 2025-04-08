#include<iostream>
#include <iomanip> // For setprecision
using namespace std;

int main(){
    double exchangeR,amount;
    int choice;

    cout<<"Enter the exchange rate from dollar to RMB: ";
    cin>>exchangeR;

    cout<<"Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin>>choice;

    while(choice!=0 && choice !=1){
        cout<<"Invalid. Key In 0 or 1: ";
        cin>>choice;
    }

    if(choice==0){
        cout<<"Enter the dollar amount: ";
        cin>>amount;
        double rmb = amount * exchangeR;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << rmb << " yuan" << endl;

    }else {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        double dollars = amount / exchangeR;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << dollars << endl;
    }




    return 0;
}