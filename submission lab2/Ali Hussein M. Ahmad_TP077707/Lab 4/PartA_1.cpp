#include <iostream>
#include <iomanip>
 
class BankAccount {
private:
    double balance;
    double interest_rate; 
 
public:
void set(int dollars, int cents);
void update();
double get_balance();
double get_rate();
void set_rate(int rate);
    
};

//set the account balance to $dollars.cents
void BankAccount::set (int dollars, int cents){
    balance = dollars +(cents /100.0 );
}
 
// add one year of simple intrest to the account balance
void BankAccount ::update(){
    //simple intrest formula I= P * r * t, where t = 1 year
    double intrest = balance * interest_rate / 100.0;
    balance += intrest;
} 


// return the current accunt balance 
double BankAccount::get_balance(){
    return balance;
}

// Return the current interest rate
double BankAccount::get_rate() {
    return interest_rate;
}

// Set the interest rate
void BankAccount::set_rate(int rate) {
    interest_rate = rate;
}


int main() {
    BankAccount account;
    account.set(100, 50);           // Set balance to $100.50
    account.set_rate(5);            // 5% interest rate
    account.update();               // Apply interest
    std::cout << "New balance: $" << account.get_balance() << std::endl;
    return 0;
}