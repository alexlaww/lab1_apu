#include <iostream>

using namespace std;

int main()
{
    double exchangeRate, dollarAmount, rmbAmount;
    int key;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> key;

    if (key == 0)
    {
        cout << "Enter the dollar amount: ";
        cin >> dollarAmount;
        cout << "$" << dollarAmount << " is " << dollarAmount * exchangeRate << " yuan" << endl;
    }
    else if (key == 1)
    {
        cout << "Enter the RMB amount: ";
        cin >> rmbAmount;
        cout << rmbAmount << " yuan is $" << rmbAmount / exchangeRate << endl;
    }

    return 0;
}
