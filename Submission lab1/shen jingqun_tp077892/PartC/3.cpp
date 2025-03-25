#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double exchangeRate, amount, convertedAmount;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    cout << "Enter 0 to convert dollars to RMB and 1 to convert RMB to dollars: ";
    cin >> choice;

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        convertedAmount = amount * exchangeRate;
        cout << fixed << setprecision(2) << "$" << amount << " is " << convertedAmount << " yuan\n";
    } else if (choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        convertedAmount = amount / exchangeRate;
        cout << fixed << setprecision(2) << amount << " yuan is $" << convertedAmount << endl;
    } else {
        cout << "Invalid choice! Please enter 0 or 1.\n";
    }

    return 0;
}
