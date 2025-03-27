#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double rate, amount, result;
    int choice;
 
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    cout << fixed << setprecision(2);

    if (choice == 0)
    {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        result = amount*rate;
        cout << "$" << amount << " is " << result << " yuan " << endl;

    } else if(choice == 1) {
        cout << "Enter the RMB amount: ";
        cin >> amount;
        result = amount/rate;
        cout << amount << " yuan is $" << result << endl;
    } else {
        cout << "Invalid choice! Please enter 0 or 1." << endl;
    }
    
    return 0;
}