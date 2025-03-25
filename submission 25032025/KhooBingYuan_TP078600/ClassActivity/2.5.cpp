#include <iostream>
using namespace std;

int main(){
    int speed, ticket;
    
    cout << "Enter an integer value for speed: ";
    cin >> speed;

    ticket = (speed > 55 ? ticket =1 : ticket =0);

    cout << "Ticket = " << ticket << endl;

    return 0;
}