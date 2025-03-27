#include<iostream>
using namespace std;

const int Number = 12;

int main(){
    
    int num1 = 18;
    int num2;

    cout << "Line 9: num1 = " << num1 << endl;

    cout << "Line 10: Enter a number: ";
    cin >> num2;
    cout << endl;

    cout << "Line 13: num2 = " << num2 << endl;

    num1 = num1 + Number + 2 * num2;

    cout << "Line 15: The new value of num1 = " << num1 << endl;


    return 0;

}