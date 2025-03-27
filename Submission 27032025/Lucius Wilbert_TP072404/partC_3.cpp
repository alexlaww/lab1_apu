#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rate, usd, rmb;
    int choice;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 0) {
        cout << "Enter the dollar amount: ";
        cin >> usd;
        rmb = usd * rate;
        cout << "$" << usd << " is " << rmb << " yuan" << endl;
    } else {
        cout << "Enter the RMB amount: ";
        cin >> rmb;
        usd = rmb / rate;
        cout << rmb << " yuan is $" << usd << endl;
    }

    return 0;
}
