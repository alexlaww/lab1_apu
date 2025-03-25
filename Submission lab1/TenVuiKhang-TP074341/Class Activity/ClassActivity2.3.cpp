#include<iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    if (x > 0 && x % 2 == 1){
        cout << "True";
    }else{
        cout << "False" << endl;
    }
    return 0;
}