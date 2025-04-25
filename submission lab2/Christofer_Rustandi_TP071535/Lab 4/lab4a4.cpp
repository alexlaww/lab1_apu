#include <iostream>
using namespace std;

// Cash Register class
class cashRegister {
private:
    int cashOnHand;

public:
    cashRegister() {
        cashOnHand = 500; // Default
    }

    cashRegister(int cash) {
        cashOnHand = (cash >= 0) ? cash : 500;
    }

    int getCurrentBalance() const {
        return cashOnHand;
    }

    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};

// Dispenser Type class
class dispenserType {
private:
    int numberOfItems;
    int cost;

public:
    dispenserType() {
        numberOfItems = 50;
        cost = 50; // Default 50 cents
    }

    dispenserType(int items, int itemCost) {
        numberOfItems = (items >= 0) ? items : 50;
        cost = (itemCost >= 0) ? itemCost : 50;
    }

    int getNoOfItems() const {
        return numberOfItems;
    }

    int getCost() const {
        return cost;
    }

    void makeSale() {
        if (numberOfItems > 0)
            numberOfItems--;
    }
};

// Utility function to handle a sale
void sellProduct(dispenserType& product, cashRegister& registerObj) {
    int cost = product.getCost();

    if (product.getNoOfItems() == 0) {
        cout << "Sorry, this product is SOLD OUT.\n";
        return;
    }

    cout << "Please deposit " << cost << " cents: ";
    int payment;
    cin >> payment;

    while (payment < cost) {
        cout << "Insufficient amount. Please deposit " << (cost - payment) << " more cents: ";
        int more;
        cin >> more;
        payment += more;
    }

    registerObj.acceptAmount(payment);
    product.makeSale();

    cout << "Thank you! Collect your item below.\n\n";
}

int main() {
    cashRegister juiceRegister;

    dispenserType appleJuice(10, 50);
    dispenserType orangeJuice(8, 60);
    dispenserType mangoLassi(5, 75);
    dispenserType fruitPunch(0, 65); // Sold out to show logic

    int choice;
    do {
        cout << "Welcome to the Juice Vending Machine!\n";
        cout << "--------------------------------------\n";
        cout << "1. Apple Juice (50 cents)\n";
        cout << "2. Orange Juice (60 cents)\n";
        cout << "3. Mango Lassi (75 cents)\n";
        cout << "4. Fruit Punch (65 cents)\n";
        cout << "5. Exit\n";
        cout << "Please make your selection: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                sellProduct(appleJuice, juiceRegister);
                break;
            case 2:
                sellProduct(orangeJuice, juiceRegister);
                break;
            case 3:
                sellProduct(mangoLassi, juiceRegister);
                break;
            case 4:
                sellProduct(fruitPunch, juiceRegister);
                break;
            case 5:
                cout << "Thank you! Have a nice day!\n";
                break;
            default:
                cout << "Invalid selection. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
