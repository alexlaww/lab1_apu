#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class cashRegister {
private:
    int cashOnHand;

public:
    cashRegister();
    cashRegister(int initialCash);
    
    int getBalance();
    void addCash(int cash);
};

class dispenserType {
private:
    int number; 
    int cost;          
    string name;  

public:
    dispenserType();    
    dispenserType(int number, int cost, const string& name);
    
    int getNumber() const;    
    int getCost() const;
    string getName() const;
    
    bool makeSale();
};

class JuiceMachine {
private:
    cashRegister cashReg;
    vector<dispenserType> dispensers;

public:
    JuiceMachine();
    
    void showMenu() const;
    void processSelection();
    int getCashRegisterBalance();
};

int main() {
    JuiceMachine juiceMachine;
    
    juiceMachine.processSelection();
    
    cout << "\nCash register balance: " << juiceMachine.getCashRegisterBalance() << endl;
    
    return 0;
}

cashRegister::cashRegister() : cashOnHand(500){}

cashRegister::cashRegister(int initialCash) : cashOnHand(initialCash) {}

int cashRegister::getBalance(){
    return cashOnHand;
}

void cashRegister::addCash(int cash){
    cashOnHand += cash;
}

dispenserType::dispenserType() : number(50), cost(50), name("Generic Item"){}

dispenserType::dispenserType(int number, int cost, const string& name): number(number), cost(cost), name(name){}

int dispenserType::getNumber() const{
    return number;
}

int dispenserType::getCost() const{
    return cost;
}

string dispenserType::getName() const{
    return name;
}

bool dispenserType::makeSale(){
    if (getNumber() > 0){
        number--; 
        return true;
    }
    return false;
}

JuiceMachine::JuiceMachine(){
    cashReg = cashRegister(500);

    dispensers.push_back(dispenserType(20, 12, "Apple Juice"));      
    dispensers.push_back(dispenserType(20, 17, "Orange Juice"));     
    dispensers.push_back(dispenserType(15, 15, "Mango Lassi"));      
    dispensers.push_back(dispenserType(25, 10, "Fruit Punch"));
}

void JuiceMachine::showMenu() const{
    cout << "\nJUICE MACHINE MENU\n";

    for (int i = 0; i < dispensers.size(); i++) {
        cout << (i + 1) << ". " << dispensers[i].getName() 
                      << " - $" << fixed << setprecision(2) 
                      << static_cast<double>(dispensers[i].getCost())
                      << " (" << dispensers[i].getNumber() << " left)\n";
    }
} 

int JuiceMachine::getCashRegisterBalance(){
    return cashReg.getBalance();
}

void JuiceMachine::processSelection() {
    int selection;
    do {
        showMenu();

        cout << "Insert 0 to exit.\n";
        cout << "Please select a juice (1-" << dispensers.size() << "): ";
        cin >> selection;

        if (selection == 0) {
            cout << "Exiting the juice machine! Thank you!\n";
            break;
        }

        if (selection > 0 && selection <= dispensers.size()) {
            dispenserType& chosenDrink = dispensers[selection - 1];

            if (chosenDrink.getNumber() <= 0) {
                cout << "Sorry, " << chosenDrink.getName() << " is sold out.\n";
                continue;
            }

            if (chosenDrink.makeSale()) {
                cashReg.addCash(chosenDrink.getCost()); 
                cout << "Thank you for purchasing " << chosenDrink.getName() << "!\n";
            }
        } else {
            cout << "Invalid selection, please try again.\n";
        }

    } while (selection != 0);
}
