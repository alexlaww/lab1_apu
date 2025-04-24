#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount {
    private:
    double balance;
    double interest_rate;

    public:
    BankAccount(double initial_balance = 0.0, double initial_rate = 0.0) {
        balance = initial_balance;
        interest_rate = initial_rate;
    }
    void set(int dollars, int cents) {
        balance = dollars + (cents / 100);
    } 
    void update() {
        double interest = balance * (interest_rate / 100.0);
        balance += interest;
    }; 
    double get_balance(){
        return balance;
    }
    double get_rate() {
        return interest_rate;
    }
    void set_rate(double rate) {
        interest_rate = rate;
    } 
    void displayinfo() {
        cout << "Account Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "Interest Rate: " << interest_rate << "%" << endl;
    }
};

int main() {
    BankAccount BA(3000.0, 3.0);

    BA.displayinfo();
    BA.update();

    cout << "After updating with interest:" << endl;
    BA.displayinfo();
}