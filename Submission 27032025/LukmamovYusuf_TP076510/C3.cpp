#include <iostream>
using namespace std;

int main() {
    double exchangeRate, amount, result;
    int choice;
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;
    cout << "Enter 0 to convert dollars to RMB and 1 to convert RMB to dollars: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        result = amount * exchangeRate;
        cout << "$" << amount << " is " << result << " yuan" << endl;
    } 
    else if (choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        result = amount / exchangeRate;
        cout << amount << " yuan is $" << result << endl;
    } 
    else {
        cout << "Invalid choice. Please enter 0 or 1." << endl;
    }

    return 0;
}
