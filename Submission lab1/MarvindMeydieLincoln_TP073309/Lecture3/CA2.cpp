#include <iostream>

using namespace std;

int main(){
    int billy[5]={};
    int sum = 0, input;
    int size = sizeof(billy)/sizeof(billy[0]);

    for(int i = 0; i < 5; i++){
        cout << "Enter your number " << i+1 << ":";
        cin >> billy[i];
        sum += billy[i];
    }

    for(int i; i < size; i++){
        cout << billy[i] << (i<size-1?" + ":"");
    }
    cout << " = " << sum;
}