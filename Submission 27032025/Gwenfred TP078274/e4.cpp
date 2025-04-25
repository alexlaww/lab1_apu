#include <iostream>
#include <string>
#include <iomanip> // For formatting currency

// --- cashRegister Class --- (Using definition similar to E2, adding parameterized constructor)
class cashRegister {
private:
    int cashOnHand; // Using cents

public:
    // Default constructor: Initializes cashOnHand to 500 cents.
    cashRegister() : cashOnHand(500) {}

    // Parameterized constructor
    cashRegister(int initialCash) : cashOnHand(initialCash >= 0 ? initialCash : 500) {
         if (initialCash < 0) {
             std::cerr << "Warning: Initial cash cannot be negative. Using default 500." << std::endl;
         }
    }

    // Accepts an amount (in cents) and updates cashOnHand.
    void acceptAmount(int amountIn) {
        if (amountIn > 0) {
            cashOnHand += amountIn;
        } else {
            // Silently ignore non-positive amounts in this context? Or log error?
             // std::cerr << "Error: Amount accepted must be positive." << std::endl;
        }
    }

    // Returns the current amount of cash (in cents) in the register.
    int getCurrentBalance() const {
        return cashOnHand;
    }
};

// --- dispenserType Class ---
class dispenserType {
private:
    int numberOfItems;
    int cost; // Cost in cents

public:
    // Default constructor: 50 items, 50 cents cost.
    dispenserType() : numberOfItems(50), cost(50) {}

    // Parameterized constructor
    dispenserType(int items, int itemCost) {
        numberOfItems = (items >= 0) ? items : 50;
        cost = (itemCost >= 0) ? itemCost : 50;
         if (items < 0 || itemCost < 0) {
              std::cerr << "Warning: Invalid initial items or cost. Using defaults." << std::endl;
         }
    }

    // Returns the number of items in the dispenser.
    int getNoOfItems() const {
        return numberOfItems;
    }

    // Returns the cost of an item (in cents).
    int getCost() const {
        return cost;
    }

    // Reduces the number of items by 1 if available.
    void makeSale() {
        if (numberOfItems > 0) {
            numberOfItems--;
        } else {
            // This case should ideally be checked before calling makeSale
            std::cerr << "Error: makeSale called on empty dispenser." << std::endl;
        }
    }
};

// --- Helper Functions for UI ---

void showSelection() {
    std::cout << "******* JUICE MACHINE *******" << std::endl;
    std::cout << "1. Apple Juice" << std::endl;
    std::cout << "2. Orange Juice" << std::endl;
    std::cout << "3. Mango Lassi" << std::endl;
    std::cout << "4. Fruit Punch" << std::endl;
    std::cout << "9. Exit" << std::endl;
    std::cout << "*****************************" << std::endl;
    std::cout << "Enter your selection: ";
}

void sellProduct(dispenserType& dispenser, cashRegister& registerRef) {
    int cost = dispenser.getCost();
    int itemsAvailable = dispenser.getNoOfItems();
    int amountPaid = 0;

    if (itemsAvailable > 0) {
        std::cout << "Cost: " << cost << " cents." << std::endl;
        std::cout << "Please deposit money (in cents): ";
        std::cin >> amountPaid;

        // Basic input validation for payment
        while (std::cin.fail() || amountPaid < 0) {
            std::cout << "Invalid input. Please enter a positive amount in cents: ";
            std::cin.clear(); // Clear error flags
            std::cin.ignore(10000, '\n'); // Discard bad input
            std::cin >> amountPaid;
        }


        if (amountPaid >= cost) {
            registerRef.acceptAmount(amountPaid); // Accept the full amount paid first
            dispenser.makeSale();
            int change = amountPaid - cost;
            if (change > 0) {
                // Try to give change (simple model: assume register has enough)
                 // A more complex model would check if registerRef.cashOnHand >= change
                 // and potentially adjust cashOnHand -= change;
                std::cout << "Thank you! Your change is " << change << " cents." << std::endl;
                // For this simple model, we assume change is magically available
                // and the register balance reflects only the payment received.
                // If we needed to dispense change from register:
                // registerRef.acceptAmount(-change); // This assumes acceptAmount can handle negative for internal adjustment
            } else {
                 std::cout << "Thank you!" << std::endl;
            }
             std::cout << "Item dispensed." << std::endl;
        } else {
            std::cout << "Insufficient amount paid. Please try again." << std::endl;
             // Return the insufficient payment? In a real machine, it might return coins.
             // Here, we just abort the transaction for this item.
        }
    } else {
        std::cout << "Sorry, this item is sold out." << std::endl;
    }
     std::cout << "-----------------------------" << std::endl;
}

// --- Main Simulation Logic ---
int main() { // Changed to main for E4 as it's the primary program
    // Create the components
    cashRegister machineRegister(500); // Start with 500 cents
    dispenserType appleJuice(20, 75);     // 20 items, 75 cents each
    dispenserType orangeJuice(25, 80);    // 25 items, 80 cents each
    dispenserType mangoLassi(15, 100);    // 15 items, 100 cents (1 dollar)
    dispenserType fruitPunch(30, 65);     // 30 items, 65 cents

    int choice;

    do {
        showSelection();
        std::cin >> choice;

         // Basic input validation for choice
        while (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cin >> choice;
        }


        switch (choice) {
            case 1:
                sellProduct(appleJuice, machineRegister);
                break;
            case 2:
                sellProduct(orangeJuice, machineRegister);
                break;
            case 3:
                sellProduct(mangoLassi, machineRegister);
                break;
            case 4:
                sellProduct(fruitPunch, machineRegister);
                break;
            case 9:
                std::cout << "Exiting. Thank you!" << std::endl;
                break;
            default:
                std::cout << "Invalid selection. Please try again." << std::endl;
                std::cout << "-----------------------------" << std::endl;
                break;
        }
         // Pause briefly or wait for user input before showing menu again (optional)
         // std::cout << "Press Enter to continue...";
         // std::cin.ignore(10000, '\n'); // Consume the newline from previous input
         // std::cin.get();


    } while (choice != 9);

    // Optional: Display final machine state
    std::cout << "\nFinal Machine State:" << std::endl;
    std::cout << "Register Balance: " << machineRegister.getCurrentBalance() << " cents" << std::endl;
    std::cout << "Apple Juice Left: " << appleJuice.getNoOfItems() << std::endl;
    std::cout << "Orange Juice Left: " << orangeJuice.getNoOfItems() << std::endl;
    std::cout << "Mango Lassi Left: " << mangoLassi.getNoOfItems() << std::endl;
    std::cout << "Fruit Punch Left: " << fruitPunch.getNoOfItems() << std::endl;


    return 0;
}