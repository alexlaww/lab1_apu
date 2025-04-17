#include <iostream>
#include <iomanip> // For setprecision and fixed

using namespace std;

int main() {
    double exchange_rate, amount_usd, amount_rmb;
    int conversion_choice;

    // Get exchange rate
    cout << "Enter the exchange rate from dollars to RMB: ";
    cin >> exchange_rate;

    // Get conversion direction
    cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    cin >> conversion_choice;

    // Set precision for output
    cout << fixed << setprecision(2); // Default to 2 decimal places

    // Perform conversion based on choice
    if (conversion_choice == 0) {
        // USD to RMB
        cout << "Enter the dollar amount: ";
        cin >> amount_usd;
        amount_rmb = amount_usd * exchange_rate;
        // Output formatting matches sample (1 decimal for yuan)
        cout << "$" << amount_usd << " is " << setprecision(1) << amount_rmb << " yuan" << endl;
    } else if (conversion_choice == 1) { // Treat any non-zero input like 1 as per sample run? Or strictly 1? Let's allow other non-zero as per sample.
        // RMB to USD
        cout << "Enter the RMB amount: ";
        cin >> amount_rmb;
        amount_usd = amount_rmb / exchange_rate;
         // Output formatting matches sample (1 decimal for yuan, 2 for dollars)
        cout << setprecision(1) << amount_rmb << " yuan is $" << setprecision(2) << amount_usd << endl;
    } 
     // The sample shows input '5' being treated as '1'. Let's replicate that behavior.
     // If strict 0 or 1 is needed, add an else block.
     else { 
         // Let's assume any non-zero input means RMB to USD as the sample implies
         cout << "Invalid choice '" << conversion_choice << "', assuming RMB to USD (1)." << endl;
         cout << "Enter the RMB amount: ";
         cin >> amount_rmb;
         amount_usd = amount_rmb / exchange_rate;
         cout << setprecision(1) << amount_rmb << " yuan is $" << setprecision(2) << amount_usd << endl;
         // If only 0 and 1 were valid:
         // cout << "Invalid choice. Please enter 0 or 1." << endl;
    }


    return 0;
}