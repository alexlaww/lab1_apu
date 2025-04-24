#include <iostream>
using namespace std;

class cashRegister {
private:
    int cashOnHand;
public:
    cashRegister() {
        cashOnHand = 500; // Default 500 cents ($5.00)
    }
    
    cashRegister(int amount) {
        cashOnHand = amount;
    }
    
    int getCurrentBalance() const {
        return cashOnHand;
    }
    
    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};

class dispenserType {
private:
    int numberOfItems;
    int cost;
public:
    dispenserType() {
        numberOfItems = 50;
        cost = 50; // Default 50 cents ($0.50)
    }
    
    dispenserType(int items, int itemCost) {
        numberOfItems = items;
        cost = itemCost;
    }
    
    int getNoOfItems() const {
        return numberOfItems;
    }
    
    int getCost() const {
        return cost;
    }
    
    void makeSale() {
        if (numberOfItems > 0) {
            numberOfItems--;
        }
    }
};

void showSelection();
void sellProduct(dispenserType& product, cashRegister& reg);

int main() {
    cashRegister register1;
    
    // Initialize dispensers with different products
    dispenserType appleJuice(100, 85);    // 85 cents
    dispenserType orangeJuice(75, 90);    // 90 cents
    dispenserType mangoLassi(50, 120);    // 120 cents ($1.20)
    dispenserType fruitPunch(60, 75);     // 75 cents
    
    int choice;
    
    do {
        showSelection();
        cin >> choice;
        
        switch (choice) {
            case 1:
                sellProduct(appleJuice, register1);
                break;
            case 2:
                sellProduct(orangeJuice, register1);
                break;
            case 3:
                sellProduct(mangoLassi, register1);
                break;
            case 4:
                sellProduct(fruitPunch, register1);
                break;
            case 9:
                cout << "Thank you for using the fruit juice machine!\n";
                break;
            default:
                cout << "Invalid selection. Please try again.\n";
        }
    } while (choice != 9);
    
    return 0;
}

void showSelection() {
    cout << "\n*** Welcome to the Fruit Juice Machine ***\n";
    cout << "1. Apple Juice (85 cents)\n";
    cout << "2. Orange Juice (90 cents)\n";
    cout << "3. Mango Lassi ($1.20)\n";
    cout << "4. Fruit Punch (75 cents)\n";
    cout << "9. Exit\n";
    cout << "Please make your selection: ";
}

void sellProduct(dispenserType& product, cashRegister& reg) {
    int amount;
    int amount2;
    
    if (product.getNoOfItems() > 0) {
        cout << "Please deposit " << product.getCost() << " cents: ";
        cin >> amount;
        
        if (amount < product.getCost()) {
            cout << "Please deposit another " << (product.getCost() - amount) << " cents: ";
            cin >> amount2;
            amount += amount2;
        }
        
        if (amount >= product.getCost()) {
            product.makeSale();
            reg.acceptAmount(product.getCost());
            cout << "Your item has been dispensed. Enjoy!\n";
            
            if (amount > product.getCost()) {
                cout << "Don't forget your change of " << (amount - product.getCost()) << " cents.\n";
            }
        } else {
            cout << "The amount is not enough. Money returned.\n";
        }
    } else {
        cout << "Sorry, this item is sold out.\n";
    }
}