#include <iostream>

class cashRegister {
private:
    int cashOnHand; // Holds the cash amount (e.g., in cents)

public:
    // Default constructor: Initializes cashOnHand to 500.
    cashRegister();

    // Accepts an amount from the customer and updates cashOnHand.
    // Assumes amountIn is positive.
    void acceptAmount(int amountIn);

    // Returns the current amount of cash in the register.
    int getCurrentBalance() const; // Marked const as it doesn't change the object state

    // Prints the current balance to the console.
    void printBalance() const; // Marked const
};

// Implementation of member functions

cashRegister::cashRegister() {
    cashOnHand = 500; // Set initial balance
}

void cashRegister::acceptAmount(int amountIn) {
    if (amountIn > 0) {
        cashOnHand += amountIn;
    } else {
        std::cerr << "Error: Amount accepted must be positive." << std::endl;
    }
}

int cashRegister::getCurrentBalance() const {
    return cashOnHand;
}

void cashRegister::printBalance() const {
    std::cout << "Current balance in register: " << cashOnHand << " units" << std::endl;
    // If units are cents, could format as dollars:
    // std::cout << "Current balance in register: $" << cashOnHand / 100 << "." 
    //           << std::setw(2) << std::setfill('0') << cashOnHand % 100 << std::endl;
}

// Example Usage (Optional)
int main() {
    cashRegister reg;

    std::cout << "Initial state:" << std::endl;
    reg.printBalance(); // Prints initial balance (500)

    std::cout << "\nAccepting 75 units..." << std::endl;
    reg.acceptAmount(75);
    reg.printBalance(); // Prints 575

    std::cout << "\nAccepting 150 units..." << std::endl;
    reg.acceptAmount(150);
    std::cout << "Current balance (using getter): " << reg.getCurrentBalance() << " units" << std::endl; // Prints 725

     std::cout << "\nTrying to accept -50 units..." << std::endl;
     reg.acceptAmount(-50); // Should print an error
     reg.printBalance(); // Should still be 725

    return 0;
}
// To run this specific example, you would call main_e2() from your actual main function
// or rename main_e2 to main.