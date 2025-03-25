#include<iostream>
using namespace std;

double dollartormb(double amount) {
    return amount * 6.18;
}

double rmbtodollar(double amount) {
    return amount / 6.81;
}

int main() {
    double amount, conversion;
    int choice = -1;
    cout << "Enter the exchange rate from dollars to RMB: 6.81" << endl;
    while (choice < 0 || choice > 1) {
        cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
        cin >> choice;
        switch(choice) {
            case 0:
                cout << "Enter the dollar amount: ";
                cin >> amount;
                conversion = dollartormb(amount);
                cout << "$" << amount << " is " << conversion << "yuan";

            case 1:
                cout << "Enter the RMB amount: ";
                cin >> amount;
                conversion = rmbtodollar(amount);
                cout << amount << " yuan is $" << conversion;
            default:
                if (choice < 0 || choice > 1) {
                    cout << "Wrong input. Please try again" << endl;
                }
                break;
        }
    }
}