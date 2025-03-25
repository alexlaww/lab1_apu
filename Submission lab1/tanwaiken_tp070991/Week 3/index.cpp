#include<iostream>
using namespace std;

int main(){
    int billy [] = {16, 2, 77, 40, 12071, 51};
    int sum = 0;
    for (int number:billy){
        sum += number;
    }

    cout << sum;
    return 0;
}