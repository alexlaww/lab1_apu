#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//part b 1
/*
int main(){
    int hour ,minite,sec;
    char c,c2;
    ////string time;
    do{
        fflush(stdin);
        cout<<"Please enter your elapsed time(in HH:MM:SS format) = ";
        cin>>hour>>c>>minite>>c2>>sec;
        if(cin.fail()||hour>24||minite>60||sec>60||c!=':'||c2!=':'){
            cout<<"Invalid input."<<endl;
            cin.clear();
        }else{
            c='y';
            }
    }while(c!='y');
    cout<<"Elapsed time is : "<<(hour*60*60+minite*60+sec)<<" seconds.";

    return 0;
}
*/
//2 random

int main(){
    int head=1,tail=100,gues,goal;
    srand(time(0));

    goal=rand()%100+1;
    cout<<"Guess Number Game Started Now!"<<endl;
    cout<<"--------------------------------------"<<endl;
    do{
    cout<<"Guess Number between "<<head<<" to "<<tail<<endl;
    cout<<"Your answer : ";
    cin>>gues;

    if(gues<goal&&gues>head){
        head=gues;
    }else if(gues>goal&&gues<tail){
        tail=gues;
    }
    }while(gues!=goal);

    cout<<"\nCongratulation! You won!";

}


