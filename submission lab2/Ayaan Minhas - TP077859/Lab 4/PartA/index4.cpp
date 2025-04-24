#include <iostream>
#include <string>
#include <iomanip> // For formatting output (setprecision, fixed, setw)
#include <limits>  // For numeric_limits (input validation)
#include <cmath>   // For round()

using namespace std;

// --- cashRegister Class (Internal value is cents) ---
class cashRegister {
private:
    int cashOnHand; // in cents
public:
    cashRegister() : cashOnHand(500) {}
    cashRegister(int cashInCents) : cashOnHand(cashInCents >= 0 ? cashInCents : 500) {}
    int getCurrentBalanceInCents() const { return cashOnHand; }
    void acceptAmountInCents(int amountInCents) { if (amountInCents > 0) cashOnHand += amountInCents; }
};

// --- dispenserType Class (Internal cost is cents) ---
class dispenserType {
private:
    string productName;
    int numberOfItems;
    int costInCents;
public:
    dispenserType() : productName("Default Item"), numberOfItems(50), costInCents(50) {}
    dispenserType(string name, int setNoOfItems, int setCostInCents) {
        productName = name;
        numberOfItems = (setNoOfItems >= 0) ? setNoOfItems : 50;
        costInCents = (setCostInCents >= 0) ? setCostInCents : 50;
    }
    string getName() const { return productName; }
    int getNoOfItems() const { return numberOfItems; }
    int getCostInCents() const { return costInCents; }
    void makeSale() { if (numberOfItems > 0) numberOfItems--; else cout << "Error: Cannot make sale, item is out of stock." << endl; }
};

// --- Helper Functions for the Main Program ---

void showSelection(const dispenserType& apple, const dispenserType& orange,
                   const dispenserType& mango, const dispenserType& punch) {
    cout << fixed << setprecision(2); // Set precision for dollar display
    cout << "\n*** Welcome to the Juice Machine ***" << endl;
    cout << "Select an item:" << endl;
    cout << "1 for " << left << setw(15) << apple.getName()
         << " ($" << static_cast<double>(apple.getCostInCents()) / 100.0 << ")"
         << " (Qty: " << apple.getNoOfItems() << ")" << endl;

    cout << "2 for " << left << setw(15) << orange.getName()
         << " ($" << static_cast<double>(orange.getCostInCents()) / 100.0 << ")"
         << " (Qty: " << orange.getNoOfItems() << ")" << endl;

    cout << "3 for " << left << setw(15) << mango.getName()
         << " ($" << static_cast<double>(mango.getCostInCents()) / 100.0 << ")"
         << " (Qty: " << mango.getNoOfItems() << ")" << endl;

    cout << "4 for " << left << setw(15) << punch.getName()
         << " ($" << static_cast<double>(punch.getCostInCents()) / 100.0 << ")"
         << " (Qty: " << punch.getNoOfItems() << ")" << endl;
    cout << right; // Reset alignment

    cout << "9 to exit" << endl;
    cout << "************************************" << endl;
    cout << "Enter your selection: ";
}

// Handles the sale process, taking dollar input
void sellProduct(dispenserType& product, cashRegister& registerMachine) {
    int priceInCents = product.getCostInCents();
    int itemsLeft = product.getNoOfItems();
    double paymentInDollars = 0.0;
    int paymentInCents = 0;

    cout << "\n--- Processing: " << product.getName() << " ---" << endl;

    if (itemsLeft > 0) {
        cout << "Price: $" << fixed << setprecision(2) << static_cast<double>(priceInCents) / 100.0 << endl;
        cout << "Please deposit money (e.g., 1.25 for $1.25): $";
        cin >> paymentInDollars;

        while(cin.fail()) {
            cout << "Invalid input. Please enter payment in dollars (e.g., 1.25): $";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> paymentInDollars;
        }

        if (paymentInDollars < 0) {
             cout << "Invalid payment amount (cannot be negative)." << endl;
             cout << "------------------------------------" << endl;
             return;
        }

        paymentInCents = static_cast<int>(round(paymentInDollars * 100.0));

        if (paymentInCents >= priceInCents) {
            registerMachine.acceptAmountInCents(priceInCents);
            product.makeSale();
            cout << "Item dispensed. Thank you!" << endl;
            int changeInCents = paymentInCents - priceInCents;
            if (changeInCents > 0) {
                cout << "Your change: $" << fixed << setprecision(2)
                     << static_cast<double>(changeInCents) / 100.0
                     << " (" << changeInCents << " cents)." << endl;
            }
        } else {
            cout << "Insufficient funds. You deposited $" << fixed << setprecision(2) << paymentInDollars
                 << " (" << paymentInCents << " cents). Price is $"
                 << static_cast<double>(priceInCents) / 100.0 << "." << endl;
        }
    } else {
        cout << "Sorry, this item is sold out (as shown in menu)." << endl;
    }
    cout << "------------------------------------" << endl;
}


// --- Main Program ---
int main() {
    cashRegister counter;
    dispenserType appleJuice("Apple Juice", 2, 75);
    dispenserType orangeJuice("Orange Juice", 1, 80);
    dispenserType mangoLassi("Mango Lassi", 2, 100);
    dispenserType fruitPunch("Fruit Punch", 1, 85);
    int choice;

    do {
        showSelection(appleJuice, orangeJuice, mangoLassi, fruitPunch);
        cin >> choice;

        while(cin.fail()) {
            cout << "Invalid input. Please enter a number (1-4 or 9): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> choice;
        }

        switch (choice) {
            case 1: sellProduct(appleJuice, counter); break;
            case 2: sellProduct(orangeJuice, counter); break;
            case 3: sellProduct(mangoLassi, counter); break;
            case 4: sellProduct(fruitPunch, counter); break;
            case 9: cout << "\nExiting. Thank you!" << endl; break;
            default:
                cout << "\nInvalid selection." << endl;
                cout << "------------------------------------" << endl;
                break;
        }
    } while (choice != 9);

    cout << "\nFinal register balance: $" << fixed << setprecision(2)
         << static_cast<double>(counter.getCurrentBalanceInCents()) / 100.0 << endl;

    return 0;
}