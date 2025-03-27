#include<iostream>
using namespace std;

int main(){

    double leginfeet;
    double legthinch;
    double legincentimeters;

    cout << "Please input the length in feet: ";
    cin >> leginfeet;

    legininch = leginfeet*12;
    cout << "length in inches: "<< legininch;

    legincentimeters = leginfeet*12*2.54;
    cout <<"length in centimeter: "<< legincentimeters <<"\n";

    return 0;
}
