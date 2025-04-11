class BankAccount
{
private:
    double balance;
    double interest_rate;

public:
    void set(int dollars, int cents){balance = dollars + cents / 100.0;}; // The account balance is set to dollars.cents
    void update(){balance += balance * interest_rate;}; // One year of simple interest is added to account balance
    double get_balance(){return balance;}; // Return the current account balance
    double get_rate(){return interest_rate;}; // Return the current interest rate
    void set_rate(double rate){interest_rate = rate/100;}; // Rate is set to interest rate
};

