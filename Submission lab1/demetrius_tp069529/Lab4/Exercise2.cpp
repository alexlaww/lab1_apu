class cashRegister {
    private:
    double cashOnHand;

    public:
    cashRegister() {
        cashOnHand = 500;
    }

    void acceptAmount(double amount) {
        cashOnHand += amount;
    }

    double printBalance() {
        return cashOnHand;
    }
};