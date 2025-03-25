#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double exchangeRate, amount, convertedAmount;
    int choice;
    // Prompt for exchange rate
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    // Prompt for conversion direction
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    if (choice == 0) {
        // Convert USD to RMB
        cout << "Enter the dollar amount: ";
        cin >> amount;
        convertedAmount = amount * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << convertedAmount << " yuan" << endl;
    } 
    else if (choice == 1) {
        // Convert RMB to USD
        cout << "Enter the RMB amount: ";
        cin >> amount;
        convertedAmount = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << convertedAmount << endl;
    } 
    else {
        cout << "Invalid choice! Please enter 0 or 1." << endl;
    }

    return 0;
}
