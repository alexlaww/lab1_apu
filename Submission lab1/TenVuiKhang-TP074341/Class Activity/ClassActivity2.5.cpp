#include<iostream>

using namespace std;

int main() {

    int ticket;
    int speed;

    cout << "Please enter the speed: ";
    cin >> speed;
    cout << endl;

    if(speed > 55){
        ticket = 1;
        cout << ticket;
    }else{
        ticket = 0;
        cout << ticket;
    }
    return 0;
}

