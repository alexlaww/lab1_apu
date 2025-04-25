#include <iostream>
#include <iomanip>

class cashRegister{
    private:
    int cashOnHand; // amount of cash in the register

    public:
    // constructor to set initial balance to 500
    cashRegister();

    //function to get the current amount in the register
    int getCurrentBalance() const;

    //function to accept an amount and update the register
    void acceptAmount(int amountIn);

    //Function to display the current balance
    void displayBalance() const;



};

//constructor implementation - sets initial balance to 500
cashRegister::cashRegister(){
    cashOnHand = 500; //initial cash balance of 500 units

}

//returns the current amount in the register
int cashRegister::getCurrentBalance() const{
    return cashOnHand;
}

//accepts and adds an amount to the register
void cashRegister::acceptAmount(int amountIn){
    if(amountIn > 0){
        cashOnHand += amountIn;
        std::cout << "Amount of " << "units accepted " << std:: endl;

    } else{
        std::cout <<"invalid amount . please enter a positive value" << std:: endl;
    }
    }
    
    //displays the current balance in the register
    void cashRegister::displayBalance() const{
        std:: cout<< "Current balance in register :" << cashOnHand << "units " << std::endl;
    }

    //example usage 
    int main(){
        //create a cash register object (automatically initialized with 500 units)
        cashRegister register1;

        //display the initial balancec
        std::cout<< "initial setup :" << std:: endl;
        register1.displayBalance();

        //accept amount from customer 
        int customerPayment;
        std:: cout << "\nEnter customer payment amount:";
        std:: cin >> customerPayment;

        //update the register
        register1.acceptAmount(customerPayment);

        //display the updated balance 
        std::cout << "\nAfter Transaction :" << std::endl;
        register1.displayBalance();

        return 0;
    }

