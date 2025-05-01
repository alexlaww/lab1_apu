#include <iostream>
using namespace std;

void swap(int * value1, int * value2) {
    int temp = *value1;
    *value1 = *value2; 
    *value2 = temp;
}

int main() {
    int num1, num2;
    int * value1 = &num1;
    int * value2 = &num2;

    cout << "Enter two numbers: ";
    cin >> num1;
    cin >> num2;

    cout << "Before swapping in main function:" << endl;
    cout << "Value of value1 = " << num1 << endl;
    cout << "Value of value2 = " << num2 << endl << endl;
    
    swap(value1, value2);

    cout << "After swapping in swap function:" << endl;
    cout << "Value of value1 = " << *value1  << endl;
    cout << "Value of value2 = " << *value2 << endl << endl;
    
    cout << "After swapping in main function:" << endl;
    cout << "Value of value1 = " << num1 << endl;
    cout << "Value of value2 = " << num2 << endl;
    
}