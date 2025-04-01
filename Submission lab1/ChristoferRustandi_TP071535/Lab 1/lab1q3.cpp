#include <iostream>
using namespace std;

int main(){
    double exRate, amount, convert;
    int choice;

    cout << "please enter the exchange rate from DOLLARS to RMB: ";
    cin >> exRate;
    cout << "Enter 0 to convert Dollar to RMB and 1 for vice versa: ";
    cin >> choice;

    if(choice == 0){
        cout << "Enter the amount of Dollar: ";
        cin >> amount;
        convert = exRate * amount;
        cout << "$" << amount << " equals to " << convert << "RMB" << endl;
    } else if (choice == 1){
        cout << "Enter the amount of Dollar: ";
        cin >> amount;
        convert = amount / exRate;
        cout << amount << "RMB equals to $" << convert << endl;
    }else{
        cout << "Please enter valid number 1 or 0";
    }

    return 0;
}


