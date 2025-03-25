# include <iostream>
using namespace std;

int toDollars(double rate){
    cout<<"Enter the dollar amount: ";
    double amount;
    cin>>amount;
    double result = amount*rate;
    cout <<"The amount in dollars is: "<<result<<endl;

}

int toRMB(double rate){
    cout<<"Enter the RMB amount: ";
    double amount;
    cin>>amount;
    double result = amount/rate;
    cout <<"The amount in RMB is: "<<result<<endl;
}

int main(){
    double rate;
    cout<<"\nEnter the exhange rate from dollars to RMB: ";
    cin>>rate;
    cout<<"\nEnter 0 to convert dollars to RMB and 1 vice versa: ";
    int choice;
    cin>>choice;
    if (choice == 0){
        toDollars(rate);
    }else{
        toRMB(rate);
    }
    return 0;
}