#include <iostream>
using namespace std;

// Exercise 1: BankAccount class
class BankAccount {
private:
    double balance;
    double interest_rate;
public:
    void set(int dollars, int cents) {
        balance = dollars + (cents / 100.0);
    }
    
    void update() {
        balance += balance * interest_rate;
    }
    
    double get_balance() {
        return balance;
    }
    
    double get_rate() {
        return interest_rate;
    }
    
    void set_rate(int rate) {
        interest_rate = rate / 100.0;
    }
};

// Exercise 2: CashRegister class
class CashRegister {
private:
    int cashOnHand;
public:
    CashRegister() {
        cashOnHand = 500;
    }
    
    CashRegister(int initialAmount) {
        cashOnHand = initialAmount;
    }
    
    int getCurrentBalance() {
        return cashOnHand;
    }
    
    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};

// Exercise 3: Population class
class Population {
private:
    int population;
    int births;
    int deaths;
public:
    Population(int pop, int b, int d) {
        if (pop < 1 || b < 0 || d < 0) {
            cout << "Invalid input values!" << endl;
            exit(1);
        }
        population = pop;
        births = b;
        deaths = d;
    }
    
    double getBirthRate() {
        return static_cast<double>(births) / population;
    }
    
    double getDeathRate() {
        return static_cast<double>(deaths) / population;
    }
};

// Exercise 4: DispenserType class
class DispenserType {
private:
    int numberOfItems;
    int cost;
public:
    DispenserType() {
        numberOfItems = 50;
        cost = 50;
    }
    
    DispenserType(int items, int itemCost) {
        numberOfItems = items;
        cost = itemCost;
    }
    
    int getNoOfItems() {
        return numberOfItems;
    }
    
    int getCost() {
        return cost;
    }
    
    void makeSale() {
        if (numberOfItems > 0) {
            numberOfItems--;
        }
    }
};

// Structure exercises
struct Point {
    int x, y;
    Point* nextaddress;
};

int main() {
    // Exercise 1: Test BankAccount
    cout << "Exercise 1: BankAccount Test" << endl;
    BankAccount account;
    account.set(100, 50);
    account.set_rate(5);
    cout << "Initial balance: $" << account.get_balance() << endl;
    account.update();
    cout << "Balance after interest: $" << account.get_balance() << endl << endl;

    // Exercise 2: Test CashRegister
    cout << "Exercise 2: CashRegister Test" << endl;
    CashRegister register1;
    cout << "Initial cash: " << register1.getCurrentBalance() << endl;
    register1.acceptAmount(100);
    cout << "Cash after deposit: " << register1.getCurrentBalance() << endl << endl;

    // Exercise 3: Test Population
    cout << "Exercise 3: Population Test" << endl;
    Population pop(100000, 8000, 6000);
    cout << "Birth rate: " << pop.getBirthRate() << endl;
    cout << "Death rate: " << pop.getDeathRate() << endl << endl;

    // Exercise 4: Test DispenserType
    cout << "Exercise 4: DispenserType Test" << endl;
    DispenserType dispenser(10, 100);
    cout << "Items available: " << dispenser.getNoOfItems() << endl;
    cout << "Cost per item: " << dispenser.getCost() << endl;
    dispenser.makeSale();
    cout << "Items after sale: " << dispenser.getNoOfItems() << endl << endl;

    // Structure exercises
    cout << "Structure Exercises:" << endl;
    
    // Part 1: Basic structure pointer
    Point* p1 = new Point;
    p1->x = 3;
    p1->y = 4;
    cout << "Basic structure: " << p1->x << " " << p1->y << endl;

    // Part 2: Linked list
    Point* p2 = new Point;
    p2->x = 7;
    p2->y = 16;
    p2->nextaddress = NULL;
    
    p1->nextaddress = p2;
    
    cout << "\nLinked list traversal:" << endl;
    Point* head = p1;
    while (head != NULL) {
        cout << "(" << head->x << ", " << head->y << ") -> ";
        head = head->nextaddress;
    }
    cout << "NULL" << endl;

    // Clean up
    delete p1;
    delete p2;

    return 0;
} 