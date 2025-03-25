#include<iostream>

using namespace std;

const int NUMBER = 12;

int main(){
    int firstNum;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum = " << firstNum << "\n";

    cout << "Line 10: Enter an integer: ";
    cin >> secondNum;
    cout << "\n";

    cout << "Line 13: secondNum = " << secondNum << "\n";

    firstNum = firstNum +NUMBER + 2 * secondNum;

    cout << "Line 15: The new value of " << "firstNum = " << firstNum << "\n";

    return 0;
}