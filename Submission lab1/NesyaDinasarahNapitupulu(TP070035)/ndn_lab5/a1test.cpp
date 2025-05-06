#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout << "Enter any two numbers: ";
    cin >> num1;
    cin >> num2;

    cout << "Address of num1 = " << &num1 << "; Value of num1 = " << num1 << endl;
    cout << "Address of num2 = " << &num2 << "; Value of num2 = " << num2 << endl << endl;
    
    cout << "Address of ptr1 = " << ptr1 << "; Value of ptr1 = " << *ptr1 << endl;
    cout << "Address of ptr2 = " << ptr2 << "; Value of ptr2 = " << *ptr2 << endl << endl;
    
    sum = *ptr1 + *ptr2;

    cout << "Sum = " << sum;
    return 0;
}