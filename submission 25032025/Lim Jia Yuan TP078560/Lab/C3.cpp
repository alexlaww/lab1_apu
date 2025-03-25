#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    double exchangeRate;
    int choice;
    double amount;

    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchangeRate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    cout << fixed << setprecision(2); 

    if (choice == 0) 
    {
        cout << "Enter the dollar amount: ";
        cin >> amount;
        double rmb = amount * exchangeRate;
        cout << "$" << amount << " is " << rmb << " yuan" << endl;
    } 
    
    else if (choice == 1) 
    {
        
        cout << "Enter the RMB amount: ";
        cin >> amount;
        double usd = amount / exchangeRate;
        cout << amount << " yuan is $" << usd << endl;
    } 
    
    else 
    {
        
        cout << "Invalid input. Please enter 0 or 1." << endl;
    }

    return 0;
}
