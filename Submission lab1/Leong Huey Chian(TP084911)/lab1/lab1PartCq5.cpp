#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int line=0;
    for(int i=1;i<=50;i++){
        if(i%2==0){
            cout<<setw(5)<<i;
            line++;
            if(line==5){
                cout<<endl;
                line=0;
            }
        }
    }
}
