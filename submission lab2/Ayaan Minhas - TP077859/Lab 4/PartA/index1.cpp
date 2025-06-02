#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

// BankAccount class definition (same as before)
class BankAccount {
private:
    double balance;
    double interest_rate; // Store rate as decimal (e.g., 0.03 for 3%)

public:
    BankAccount() : balance(0.0), interest_rate(0.0) {}

    void set(int dollars, int cents);
    void update();
    double get_balance();
    double get_rate();
    void set_rate(double rate); // Changed parameter to double
};

// Member Function Implementations (same as before)
void BankAccount::set(int dollars, int cents) {
    if (dollars < 0 || cents < 0 || cents > 99) {
        cout << "Error: Invalid dollar or cent amount. Setting balance to $0.00." << endl;
        balance = 0.0;
    } else {
        balance = static_cast<double>(dollars) + static_cast<double>(cents) / 100.0;
    }
}

void BankAccount::update() {
    balance += balance * interest_rate;
}

double BankAccount::get_balance() {
    return balance;
}

double BankAccount::get_rate() {
    return interest_rate;
}

void BankAccount::set_rate(double rate) {
    if (rate < 0) {
        cout << "Error: Interest rate cannot be negative. Setting rate to 0%." << endl;
        interest_rate = 0.0;
    } else {
        interest_rate = rate / 100.0;
    }
}

// --- Main function for testing with USER INPUT ---
int main() {
    BankAccount myAccount;
    int initialDollars, initialCents;
    double initialRatePercent;
    char choice;

    cout << "--- Bank Account Setup ---" << endl;
    cout << "Enter initial dollars: ";
    cin >> initialDollars;
    cout << "Enter initial cents: ";
    cin >> initialCents;
    myAccount.set(initialDollars, initialCents);

    cout << "Enter initial interest rate (e.g., 3.5 for 3.5%): ";
    cin >> initialRatePercent;
    myAccount.set_rate(initialRatePercent);

    cout << "\n--- Account Status ---" << endl;
    cout << fixed << setprecision(2); // Format output for currency
    cout << "Current Balance: $" << myAccount.get_balance() << endl;
    cout << "Interest Rate: " << (myAccount.get_rate() * 100.0) << "%" << endl;

    cout << "\nSimulate one year update? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        myAccount.update(); // Add one year of interest
        cout << "Balance after 1 year: $" << myAccount.get_balance() << endl;
    }

    cout << "\nTesting complete." << endl;

    return 0;
}