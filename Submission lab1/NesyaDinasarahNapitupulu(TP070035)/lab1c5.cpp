#include<iostream>
using namespace std;

int main(){
    for(int i = 2; i <= 50; i = i + 2){
        if (i % 2 == 0){
            cout << i << " ";
        }
        if (i % 10 == 0){
            cout << endl;
        }
    }
}