#include<iostream>

using namespace std;

int main(){
    int lenI;
    int lenF;
    double lenFtocm;
    double lenItocm;

    cout << "Enter the length in feet: ";
    cin >> lenF;
    lenFtocm = lenF * 12;
    cout << "converting length from feet to cm: " << lenFtocm << endl;
    cout << endl;

    cout << "Enter the length in inches: ";
    cin >> lenI;
    lenItocm = lenI * 2.54;
    cout << "converting length from inches to cm: " << lenItocm << endl;
    cout << endl;

    return 0;
}