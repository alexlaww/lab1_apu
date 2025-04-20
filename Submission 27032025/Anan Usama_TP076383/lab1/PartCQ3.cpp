// C-3
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rate, amount;
    int option;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> option;

    if (option == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        cout << fixed << setprecision(2);
        cout << "$" << amount << " is " << amount * rate << " yuan" << endl;
    } else if (option == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << amount / rate << endl;
    } else {
        cout << "Invalid option! Please enter 0 or 1." << endl;
    }

    return 0;
}