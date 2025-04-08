#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int count=0;
    const int numberrows=5;//setting 5 number appear in each row

    cout<<"Enter an integer between 1 to 50: "<<endl<<endl;


    for(int i=2;i<=50;i+=2){
        cout<<setw(4)<<i;
        count++;

        if(count%numberrows==0){
            cout<<endl;
        }

    }
    
    return 0;
}