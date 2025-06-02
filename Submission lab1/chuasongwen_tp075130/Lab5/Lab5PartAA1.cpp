#include <iostream>
using namespace std;

int num1, num2, Sum;
int *ptr1, *ptr2;
void sum();

int main(){
    cout << "Enter any two numbers: ";
    cin >> num1 >> num2;

    cout << "Address num1: " << &num1 << endl;
    cout << "Address num2: " << &num2 << endl;
    cout << "Value num1: " << num1 << endl;
    cout << "Value num2: " << num2 << endl;

    ptr1 = &num1;
    ptr2 = &num2;

    cout << "Address ptr1: " << &ptr1 << endl;
    cout << "Address ptr2: " << &ptr2 << endl;
    cout << "Value ptr1: " << ptr1 << endl;
    cout << "Value ptr2: " << ptr2 << endl;
    cout << "Value pointed ptr1: " << *ptr1 << endl;
    cout << "Value pointed ptr2: " << *ptr2 << endl;

    sum();
    return 0;
}

void sum(){
    Sum = *ptr1 + *ptr2;
    cout << "Sum of a and b: " << Sum;    
}