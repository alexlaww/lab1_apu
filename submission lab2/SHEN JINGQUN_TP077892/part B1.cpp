#include <iostream>
using namespace std;


void reverseDisplayNumber(int number1, int number2, int current) {
    if (current < number1)
        return;
    cout << current;
    if (current != number1)
        cout << " + ";
    reverseDisplayNumber(number1, number2, current - 1);
}


int reverseDisplayNumberAndSum(int number1, int number2) {
    if (number2 < number1)
        return 0;
    return number2 + reverseDisplayNumberAndSum(number1, number2 - 1);
}

int main() {
    int startValue, endValue;
    
    cout << "Enter a start value: ";
    cin >> startValue;
    
    cout << "Enter an end value: ";
    cin >> endValue;

    cout << endl;

    reverseDisplayNumber(startValue, endValue, endValue);
    cout << " = ";

    cout << reverseDisplayNumberAndSum(startValue, endValue) << endl;

    return 0;
}
