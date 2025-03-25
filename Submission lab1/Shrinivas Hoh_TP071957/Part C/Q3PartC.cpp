#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

int main() {
    double exchangeRate;
    int choice;
    double amount;

    // Step 1: Input exchange rate
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    // Step 2: Ask user for conversion direction
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    // Step 3: Handle conversion
    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        double rmb = amount * exchangeRate;
        cout << fixed << setprecision(2); // Format to 2 decimal places
        cout << "$" << amount << " is " << rmb << " yuan" << endl;
    } else if (choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        double usd = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << usd << endl;
    } else {
        cout << "Invalid option. Please enter 0 or 1." << endl;
    }

    return 0;
}
