#include <iostream>
using namespace std;

class cashRegister {
private:
    int cashOnHand;  // Current amount of cash in the register

public:
    // Constructor to set initial cash in the register
    cashRegister() {
        cashOnHand = 500;
    }

    // Accept amount from the customer and update the register
    void acceptAmount(int amount) {
        cashOnHand += amount;
    }

    // Print the current balance in the register
    void printBalance() {
        cout << "Current Balance: " << cashOnHand << " units" << endl;
    }
};

int main() {
    cashRegister myRegister;

    myRegister.printBalance();       // Show initial balance
    myRegister.acceptAmount(100);    // Customer pays 100 units
    myRegister.printBalance();       // Show updated balance

    return 0;
}
