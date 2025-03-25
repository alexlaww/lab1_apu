#include<iostream>
using namespace std;

int main(){
    int x, y;
    cout << "Enter 2 positive integer value: " ;
    cin >> x >> y ;

    if(x > 0 && y >0){
        cout << "true" <<endl;
    }
    else{
        cout << "false" << endl;
    }

    return 0;
}