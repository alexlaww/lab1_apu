#include<iostream>
using namespace std;

int main(){

    int billy[] = {16,2,77,40,12071,51};
    int sum = 0;

    for (int i = 0; i < 6; i++){
        if (i<5){
            cout << billy[i] << " + ";
        }
        else{
            cout << billy[i] << " = ";
        }
        sum += billy[i];
    }
    cout << " " << sum;

    return 0;
}