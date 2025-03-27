#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int num1,num2,guess,gen_num;    
    num1=rand()% 100;
    num2=rand()% num1;
    gen_num=rand() % (num1-num2+1) + num2;
    cout<<gen_num;
    while (true){
        cout<<"\nGuess Number Game Started Now!\n---------------------------------------------\nGuess Number between "<< num2 << " to " << num1<<endl;
        cout<<"Your answer: ";
        cin>>guess;
        if (gen_num == guess){
            cout<<"Congratulation! You won!";
            break;
        }
    }
}