#include <iostream>
#include <iomanip> // For formatting output
#include <limits>  // For numeric_limits

using namespace std;

// cashRegister class definition (same as before)
class cashRegister {
private:
    int cashOnHand; // Storing cash in cents

public:
    cashRegister() : cashOnHand(500) {}
    cashRegister(int initialCash) {
        if (initialCash < 0) {
            cout << "Warning: Initial cash cannot be negative. Setting to 0." << endl;
            cashOnHand = 0;
        } else {
            cashOnHand = initialCash;
        }
    }
    void acceptAmount(int amountIn) {
        if (amountIn < 0) {
            cout << "Error: Cannot accept negative amount." << endl;
        } else {
            cashOnHand += amountIn;
        }
    }
    int getCurrentBalance() const {
        return cashOnHand;
    }
    void printBalance() const {
        cout << fixed << setprecision(2);
        cout << "Current balance: $" << static_cast<double>(cashOnHand) / 100.0 << endl;
    }
};

// --- Main function for testing with USER INPUT ---
int main() {
    int initialCustomAmount;
    int amountToAdd;
    int registerChoice;

    // Create register 1 with default amount
    cashRegister register1;
    cout << "Register 1 created with default balance." << endl;
    register1.printBalance();

    // Get initial amount for register 2 from user
    cout << "\nEnter initial amount (in cents) for Register 2: ";
    cin >> initialCustomAmount;
    cashRegister register2(initialCustomAmount);
    cout << "Register 2 created." << endl;
    register2.printBalance();
    cout << "------------------------------------" << endl;


    // Loop to add amounts
    do {
        cout << "\nChoose action:" << endl;
        cout << "  1: Add amount to Register 1" << endl;
        cout << "  2: Add amount to Register 2" << endl;
        cout << "  3: View balances" << endl;
        cout << "  0: Exit" << endl;
        cout << "Enter choice: ";
        cin >> registerChoice;

        // Input validation for choice
        while(cin.fail() || registerChoice < 0 || registerChoice > 3) {
            cout << "Invalid choice. Please enter 0, 1, 2, or 3: ";
            cin.clear(); // clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
            cin >> registerChoice;
        }


        switch (registerChoice) {
            case 1:
            case 2:
                cout << "Enter amount to add (in cents): ";
                cin >> amountToAdd;
                 // Input validation for amount
                while(cin.fail()) {
                    cout << "Invalid amount. Please enter an integer: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cin >> amountToAdd;
                }

                if (registerChoice == 1) {
                    register1.acceptAmount(amountToAdd);
                    cout << "Register 1 new balance: ";
                    register1.printBalance();
                } else {
                    register2.acceptAmount(amountToAdd);
                    cout << "Register 2 new balance: ";
                    register2.printBalance();
                }
                break;
            case 3:
                 cout << "\nCurrent Balances:" << endl;
                 cout << "Register 1: "; register1.printBalance();
                 cout << "Register 2: "; register2.printBalance();
                 break;
            case 0:
                cout << "Exiting." << endl;
                break;
            // No default needed due to input validation loop
        }
        cout << "------------------------------------" << endl;

    } while (registerChoice != 0);

    cout << "\nFinal Balances:" << endl;
    cout << "Register 1: "; register1.printBalance();
    cout << "Register 2: "; register2.printBalance();

    return 0;
}