#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class cashRegister {
    private:
    int cashOnHand;
    int cashObtained;

    public:
    cashRegister() {
        cashOnHand = 500; 
        cashObtained = 0;
    }
    cashRegister(int cash) {
        cashOnHand = cash; 
        cashObtained = 0; 
    }
    void acceptAmount (int amount){
        cashObtained = amount;
    }
    int getCurrentBalance() {
        return cashOnHand;
    }
    void releaseItem(int cost) {
        cashOnHand += cost; 
        cashObtained = 0; 
    }
};

class dispenserType {
    private:
        int numberOfItems[4]; 
        int cost[4];         
        string juiceNames[4]; 

    public:
        dispenserType() {
            juiceNames[0] = "Apple Juice";
            juiceNames[1] = "Orange Juice";
            juiceNames[2] = "Mango Lassi";
            juiceNames[3] = "Fruit Punch";
            for (int i = 0; i < 4; i++) {
                numberOfItems[i] = 5; 
                cost[i] = 150 + (i * 50); 
            }
        }

        void showProducts() {
            cout << "Juice selections in stock:" << endl;
            for (int i = 0; i < 4; i++) {
                cout << i + 1 << ". " << juiceNames[i] << " - " << cost[i] << " cents (Items left: " << numberOfItems[i] << ")" << endl;
            }
        }

        bool makeSale(int selection) {
            if (numberOfItems[selection] > 0) {
                numberOfItems[selection]--; 
                return true; 
            } else {
                cout << "Item is sold out." << endl;
                return false; 
            }
        }

        int getCost(int selection) {
            return cost[selection]; 
        }

        int getNoOfItems(int selection) {
            return numberOfItems[selection]; 
        }
};

int main() {
    cashRegister registerMachine;
    dispenserType juiceDispenser;
    int selection;
    int payment;

    juiceDispenser.showProducts();

    cout << "Choose a juice based on number (1-4): ";
    cin >> selection;
    selection -= 1; 

    if (selection < 0 || selection >= 4) {
        cout << "Invalid choice." << endl;
        return 1;
    }

    int itemCost = juiceDispenser.getCost(selection);
    cout << "Cost of " << juiceDispenser.getNoOfItems(selection) << ": " << itemCost << " cents." << endl;

    cout << "Please enter money amount (in cents): ";
    cin >> payment;
    registerMachine.acceptAmount(payment);

    if (payment < itemCost) {
        cout << "Insufficient amount. Transaction cancelled." << endl;
        return 1;
    }

    if (juiceDispenser.makeSale(selection)) {
        registerMachine.releaseItem(itemCost); 
        cout << "Thank you for your purchase!" << endl;
    }
}