#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double exchangeRate, amount, convertedAmount;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    if (exchangeRate <= 0) {
        cout << "Exchange rate must be a positive number!" << endl;
        return 1; 
    }

    cout << "Enter 0 to convert dollars to RMB and 1 to convert RMB to dollars: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;

        if (amount < 0) {
            cout << "Amount cannot be negative!" << endl;
            return 1;
        }

        convertedAmount = amount * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << convertedAmount << " yuan" << endl;
    } else if (choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;

        if (amount < 0) {
            cout << "Amount cannot be negative!" << endl;
            return 1;
        }

        convertedAmount = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << convertedAmount << endl;
    } else {
        cout << "Invalid choice! Please enter 0 or 1." << endl;
        return 1;
    }

    return 0;
}