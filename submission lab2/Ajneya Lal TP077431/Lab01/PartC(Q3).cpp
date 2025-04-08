#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double exchangeRate;
    int option;
    double amount;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> option;

    if (option == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        double rmb = amount * exchangeRate;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << rmb << " yuan" << endl;
    }
    else if (option == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        double usd = amount / exchangeRate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << usd << endl;
    }
    else {
        cout << "Invalid option entered. Please enter 0 or 1." << endl;
    }

    return 0;
}
