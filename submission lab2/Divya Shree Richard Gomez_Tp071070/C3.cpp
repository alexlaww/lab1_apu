#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rate, amount, result;
    int direction;
    
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;
    
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> direction;
    
    if (direction == 0) {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        result = amount * rate;
        cout << fixed << setprecision(1);
        cout << "$" << amount << " is " << result << " yuan" << endl;
    }
    else if (direction == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        result = amount / rate;
        cout << fixed << setprecision(2);
        cout << amount << " yuan is $" << result << endl;
    }
    else {
        cout << "Invalid input! Please enter 0 or 1." << endl;
    }
    
    return 0;
}