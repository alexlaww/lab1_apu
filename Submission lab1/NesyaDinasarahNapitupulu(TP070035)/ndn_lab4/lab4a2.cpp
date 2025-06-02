#include <iostream>
#include <iomanip>
using namespace std;

class CashRegister {
private:
    double cashOnHand;    
    double cashObtained;  

public:
    CashRegister(double initialCashOnHand = 0.0) {
        cashOnHand = initialCashOnHand;
        cashObtained = 0.0; 
    }

    void acceptAmount(double amount) {
        cashObtained = amount;
    }

    void update() {
        cashOnHand += cashObtained;
        cashObtained = 0; 
    }

    double get_balance() {
        return cashOnHand;
    }

    void printBalance() {
        cout << "Cash Register Balance: $" << fixed << setprecision(2) << cashOnHand << endl;
    }
};

int main() {
    CashRegister CR(500.0);

    CR.printBalance();

    double amount;
    cout << "Enter cash amount from customer: $";
    cin >> amount;

    CR.acceptAmount(amount);
    CR.update();

    cout << "Updated amount after receiving from customer:" << endl;
    CR.printBalance();
}