class BankAccount { 
    private:
    double balance; 
    double interest_rate;
    
    public:
    void set(int dollars, int cents) {
        balance = dollars + (cents/100);
    }//The account balance is set to $dollars.cents;

    void update() {
        balance *= ((100 + interest_rate)/100);
    }//One year of simple interest is added to account balance


    double get_balance() {
        return balance;   
    }//Return the current account balance


    double get_rate() {
        return interest_rate;
    }//Return the current interest rate 


    void set_rate(int rate) {
        interest_rate = rate;
    }// rate is set to interest rate
};