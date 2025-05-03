// index4.cpp
#include <iostream>
using namespace std;

/* function prototype */
void swap(int *value1, int *value2);

int main()
{
    int num1, num2;

    // Read two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Display values before swapping
    cout << "\nBefore swapping in main function :" << endl;
    cout << "Value of num1 = " << num1 << endl;
    cout << "Value of num2 = " << num2 << endl;

    // Call swap function
    swap(&num1, &num2);

    // Display values after swapping
    cout << "\nAfter swapping in main function :" << endl;
    cout << "Value of num1 = " << num1 << endl;
    cout << "Value of num2 = " << num2 << endl;

    return 0;
}

// Function definition to swap two numbers
void swap(int *value1, int *value2)
{
    int temp;

    // Store the value pointed by value1 in temp
    temp = *value1;
    // Assign the value pointed by value2 to value1
    *value1 = *value2;
    // Assign temp to the location pointed by value2
    *value2 = temp;

    cout << "\nAfter swapping in swap function :" << endl;
    cout << "Value of value1 = " << *value1 << endl;
    cout << "Value of value2 = " << *value2 << endl;
}
