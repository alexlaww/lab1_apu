# include <iostream>
using namespace std;

class BankAccount
{ private:
    double balance, interest_rate; 
  public:
    void set(int dollars, int cents);
    void update();
    double get_balance();
    double get_rate();
    void set_rate(int rate);
};

int main(){
    BankAccount account;
    account.set(1000, 50);
    cout << account.get_balance() << endl;
    account.set_rate(5);
    account.update();
    cout << account.get_balance() << endl;
    
    return 0;
}

void BankAccount::set(int dollars, int cents){
    balance = dollars + (cents / 100.0);
}
void BankAccount::update(){
    balance += balance * interest_rate;
}
double BankAccount::get_balance(){
    return balance;
}
double BankAccount::get_rate(){
    return interest_rate;
}
void BankAccount::set_rate(int rate){
    interest_rate = rate / 100.0;
} 