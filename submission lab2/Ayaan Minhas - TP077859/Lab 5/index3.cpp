// index3.cpp
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout << "Enter first number: ";
    cin >> *ptr1;
    cout << "Enter second number: ";
    cin >> *ptr2;

    cout << "address of num1:" << &num1 << ", value of num1:" << num1 << endl;
    cout << "address of num2:" << &num2 << ", value of num2:" << num2 << endl;
    cout << "address of ptr1:" << ptr1 << ", value of ptr1:" << *ptr1 << endl;
    cout << "address of ptr2:" << ptr2 << ", value of ptr2:" << *ptr2 << endl;

    // Calculate sum using pointers
    sum = *ptr1 + *ptr2;

    // Display the result
    cout << "Sum of " << *ptr1 << " and " << *ptr2 << " is " << sum << endl;

    return 0;
}
