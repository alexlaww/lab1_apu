#include <iostream>

using namespace std;

int main(){
    int billy[] = {16,2,77,40,12071,51};
    int sum = 0;

    // for(int i = 0; i < sizeof(billy)/sizeof(billy[0]); i++){
    //     cout << billy[i];
    //     sum += i;
    // }

    for(int i : billy){
        cout << i << (i==billy[sizeof(billy)/sizeof(billy[0])-1]?"":" + ");
        sum += i;
    }
    cout << " = " << sum;
}