#include <iostream>

using namespace std;

int main(){
    int speed, ticket;

    cout << "Input speed: ";
    cin >> speed;


    if (speed > 55)
    {
        ticket=1;
    }
    else
    {
        ticket=0;
    }

    cout << "ticket: " << ticket;
    return 0;
}