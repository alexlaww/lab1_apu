# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

int main(){
    double rate, amount;
    int choice;
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> rate;

    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> choice;

    switch(choice){
        case 0:
            cout << "Enter the dollars amount: ";
            cin >> amount;
            cout << fixed << setprecision(2);
            cout << "$" << amount << " is " << amount * rate << " yuan.";
            break;
        case 1:
            cout << "Enter the RMB amount: ";
            cin >> amount;
            cout << fixed << setprecision(2);
            cout << amount << " yuan is $" << amount/rate << ".";
            break;
    }

}