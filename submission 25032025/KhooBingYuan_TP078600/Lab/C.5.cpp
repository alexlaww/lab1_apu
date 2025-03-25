#include <iostream>
using namespace std;

int main(){
    for(int i =0; i <= 50; i += 2){
        if(i == 0){
            continue;
        }
        else{
            cout << i << "\t";
        }
        if(i % 5 == 0){
            cout << endl;
        }
    }
}