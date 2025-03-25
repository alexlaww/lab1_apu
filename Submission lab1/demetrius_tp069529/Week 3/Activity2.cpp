#include <iostream>
using namespace std;

int main() {
int number1, number2, number3, number4, number5, total;

    cout << "Enter your number 1 : ";
    cin >> number1;

    cout << "Enter your number 2 : ";
    cin >> number2;

    cout << "Enter your number 3 : ";
    cin >> number3;

    cout << "Enter your number 4 : ";
    cin >> number4;

    cout << "Enter your number 5 : ";
    cin >> number5;

    total = number1 + number2 + number3 + number4 + number5;

    cout << number1 << " + " << number2 << " + " << number3 << " + " << number4 << " + " << number5 << " = " << total;

    return 0;
}