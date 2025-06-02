#include<iostream>
using namespace std;
/*
//q1
class BankAccount
{
private:
    double balance;
    double interest_rate;
public:
    void set(int dollars, int cents){
        balance=dollars+(cents/100);
    }; //The account balance is set to $dollars.cents;
    void update(){
        balance+=(balance*interest_rate);
    }; //One year of simple interest is added to account balance
    double get_balance(){
        return balance;
    }; //Return the current account balance
};
*/
//q2

class cashRegister{
    int cashOnHand;

public:
    cashRegister(){
        cashOnHand=0.5;
    }
    cashRegister(int cash){
        cashOnHand=cash;
    }
    void setcashOnHand(int c){
        cashOnHand=c;
    }
    void acceptAmount(int amount){
        cashOnHand+=amount;
    }

    void printBalance(){
        cout<<"Current Balance : RM "<<cashOnHand;
    }


};
/*
int main(){
    int amount;
    cashRegister q2(500);
    cout<<"Cash in : RM";
    cin>>amount;
    q2.acceptAmount(amount);
    q2.printBalance();
    return 0;
}
*/
/*
//q3
class Population{
    double pop,birth,death;

public:
    Population(double p,double b,double d){
        if(valid(p,true)&&valid(b,false)&&valid(d,false)){
        pop=p;
        birth=b;
        death=d;
        }else{
        cout<<"Invalid input."<<endl;
        }
    }

    int valid(int n, bool t){
        if(t==true){
            if(n<1)
                return 0;
        }else{
            if(n<0)
                return 0;
        }
        return 1;
    }

    double birthrate(){
        return birth/pop;
    }

    double deathrate(){
        return death/pop;
    }
};
/*
int main(){
    Population p(100,60,40);
    cout<<"Birth Rate :"<<p.birthrate()<<endl;
    cout<<"Death Rate :"<<p.deathrate()<<endl;
    return 0;
}
*/

//4
class dispenserType{
    int numberOfItems;
    int cost;
public:
    dispenserType(){
        numberOfItems=1;
        cost=50;
    }
    dispenserType(int numb,int c){
        numberOfItems=numb;
        cost=c;
    }
    void setNoOfItems(int n){
        n=numberOfItems;
    }
    void setCost(double c){
         c = cost;
    }

    int getNoOfItems(){
        return numberOfItems;
    }
    double getCost(){
        return cost;
    }
    void makeSale(){
        if(numberOfItems)
        numberOfItems--;
        else{
            cout<<"Error!!You does not have item to sale already!";
        }
    }
};

class Machine{
        cashRegister cash;
        dispenserType sale;
    public:

        Machine(){
            print();
        }

        void makesale(){
        sale.makeSale();
        print();
        }

        void print(){
            cout<<"\nThe number of item: "<<sale.getNoOfItems()<<endl;
            cout<<"The cost of item: RM"<<sale.getCost()<<endl;

        }
};

int main(){
    Machine a;
    a.makesale();
    a.makesale();

}

