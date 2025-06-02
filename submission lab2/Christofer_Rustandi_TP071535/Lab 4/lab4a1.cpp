#include <iostream>
using namespace std;

class BankAcc {
    private:
        double balance;
        double interest_rate;
    
    public:
        void set(int dollars, int cents){
            balance = dollars + cents / 100.0;
        }

        void update(){
            balance = balance + (balance + interest_rate/100.0);
        }

        double get_balance(){
            return balance;
        }

        double get_rate(){
            return interest_rate;
        }

        void set_rate(int rate){
            interest_rate = rate;
        }

};

int main(){
    BankAcc myAcc;

    myAcc.set(100,50);
    myAcc.set_rate(5);
    myAcc.update();

    cout << "Balance: $" << myAcc.get_balance() << endl;
    cout << "Interest Rate: " << myAcc.get_rate() << "%" << endl;

    return 0;
}