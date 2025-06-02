# include <iostream>
using namespace std;

class cashRegister{
    private:
        int cashOnHand;
    
    public:
        cashRegister();
        cashRegister(int initialAmount);
        void acceptAmount(int amount);
        void printBalance();
    
};

int main(){

    cashRegister myRegister(100);

    cout << "Initial Balance: ";
    myRegister.printBalance();
    
    myRegister.acceptAmount(50);

    cout << "New Balance: "; 
    myRegister.printBalance();
    return 0;
}

cashRegister::cashRegister() : cashOnHand(0) {}

cashRegister::cashRegister(int initialAmount) : cashOnHand(initialAmount) {}

void cashRegister::acceptAmount(int amount) {
    cashOnHand += amount;
}

void cashRegister::printBalance() {
    cout << cashOnHand << endl;
}