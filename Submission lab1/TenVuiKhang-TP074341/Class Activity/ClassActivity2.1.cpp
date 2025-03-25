#include<iostream>

using namespace std;

int main(){
    int x;
    int y;

    cout << "Enter a number for y: ";
    cin >> y; 
    cout << endl;

    if (y > 0){
        x = 1 ;
        cout << "x = " << x << endl ;
    }else{
        x = 0;
        cout << "x= "<< x << endl;
    }

    return 0;
}