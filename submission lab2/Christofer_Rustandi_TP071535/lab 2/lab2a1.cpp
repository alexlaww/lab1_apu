#include <iostream>
using namespace std;

// 1. Function without return without parameters
void sum1() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum (no return, no parameters) = " << a + b << endl;
}

// 2. Function without return with parameters
void sum2(int a, int b) {
    cout << "Sum (no return, with parameters) = " << a + b << endl;
}

// 3. Function with return with parameters
int sum3(int a, int b) {
    return a + b;
}

// 4. Function with return without parameters
int sum4() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    return a + b;
}

int main() {
    int a, b, result;

    // Function 1: No return, No parameters
    sum1();

    // Function 2: No return, With parameters
    cout << "\nEnter two integers: ";
    cin >> a >> b;
    sum2(a, b);

    // Function 3: With return, With parameters
    cout << "\nEnter two integers: ";
    cin >> a >> b;
    result = sum3(a, b);
    cout << "Sum (with return, with parameters) = " << result << endl;

    // Function 4: With return, No parameters
    result = sum4();
    cout << "Sum (with return, no parameters) = " << result << endl;

    return 0;
}
