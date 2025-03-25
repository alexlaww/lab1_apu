#include <iostream>
using namespace std;

int main()
{
    double rmb, dollar, result, rate;
    int convert; 
    
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;
    cin.ignore();

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> convert;
    cin.ignore();
    
    if (convert = 0)
    {
        cout << "Enter the dollor amount: ";
        cin >> dollar;
        cin.ignore();

        result = dollar * rate;
        cout << "$" << dollar << " is " << result << "yuan" << endl;
    }
    else if(convert = 1)
    {
        cout << "Enter the RMB amount: ";
        cin >> rmb;
        cin.ignore();

        result = rmb / rate;
        cout << rmb << "yuan is $" << result;
    }
    else
    {
        cout << "Invalid input";
    }
}
