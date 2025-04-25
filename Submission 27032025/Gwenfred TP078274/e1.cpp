#include <iostream>
#include <iomanip> // For setting precision if needed for output

class BankAccount {
private:
    double balance;
    double interest_rate; // Assumed to be stored as a decimal (e.g., 0.05 for 5%)

public:
    // Sets the account balance from dollars and cents.
    void set(int dollars, int cents);

    // Adds one year of simple interest to the account balance.
    void update();

    // Returns the current account balance.
    double get_balance();

    // Returns the current interest rate (as a decimal).
    double get_rate();

    // Sets the interest rate. Parameter 'rate' is assumed to be a percentage (e.g., 5 for 5%).
    void set_rate(int rate);

    // Constructor to initialize default values (optional but good practice)
    BankAccount() : balance(0.0), interest_rate(0.0) {}
};

// Implementation of member functions

void BankAccount::set(int dollars, int cents) {
    // Basic validation: ensure dollars and cents are not negative
    if (dollars >= 0 && cents >= 0 && cents < 100) {
        balance = dollars + (double)cents / 100.0;
    } else {
        std::cerr << "Error: Invalid dollar or cent amount provided. Balance not set." << std::endl;
        // Optionally set balance to 0 or leave it unchanged
        // balance = 0.0;
    }
}

void BankAccount::update() {
    // Calculate simple interest for one year and add it to the balance
    balance += balance * interest_rate;
}

double BankAccount::get_balance() {
    return balance;
}

double BankAccount::get_rate() {
    return interest_rate;
}

void BankAccount::set_rate(int rate) {
    // Assume 'rate' is an integer percentage (e.g., 5 means 5%)
    // Convert to decimal for internal storage
    if (rate >= 0) {
        interest_rate = (double)rate / 100.0;
    } else {
        std::cerr << "Error: Invalid interest rate provided. Rate not set." << std::endl;
        // Optionally set rate to 0 or leave it unchanged
        // interest_rate = 0.0;
    }
}

// Example Usage (Optional - Demonstrates how to use the class)
int main() { // Changed from main_e1 to main
    BankAccount myAccount;

    myAccount.set(1000, 50); // Set balance to $1000.50
    myAccount.set_rate(5);    // Set interest rate to 5%

    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places

    std::cout << "Initial Balance: $" << myAccount.get_balance() << std::endl;
    std::cout << "Interest Rate: " << myAccount.get_rate() * 100 << "%" << std::endl;

    myAccount.update(); // Apply interest for one year
    std::cout << "Balance after 1 year interest: $" << myAccount.get_balance() << std::endl;

    myAccount.set_rate(10); // Change rate to 10%
    std::cout << "New Interest Rate: " << myAccount.get_rate() * 100 << "%" << std::endl;
    myAccount.update(); // Apply interest for another year
    std::cout << "Balance after 2nd year interest: $" << myAccount.get_balance() << std::endl;
    
    // Test invalid input
    myAccount.set(-100, 0); 
    myAccount.set_rate(-2);

    return 0;
}

// To run this specific example, you would call main_e1() from your actual main function
// or rename main_e1 to main.