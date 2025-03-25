#include <iostream>
using namespace std;

int main(){
    //For Loop

    for(int i =100; i>=10; i=i-5)
    {
        cout<<i<<" ";
    }


    //Do While Loop
    int number = 100;
    cout << endl;
    do
    {
        number=number-5;
        cout<<number<<" ";
    } while (number>10);
    
}