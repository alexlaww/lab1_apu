#include<iostream>
using namespace std;

int main(){
    
    int feet, inches, cm;

    cout << "Enter the feet: ";
    cin >> feet;
    cout << endl;

    cout << "Enter the inches: ";
    cin >> inches;
    cout << endl;

    cm = (feet * 12 + inches) * 2.54;

    cout << "Length in cm = " << cm << endl;

    return 0;

}