#include <iostream>
using namespace std;

// Function 1: No return, no parameters
void add1() {
    int a, b;
    cout << "Enter two integers (add1): ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
}

// Function 2: With return, with parameters
int add2(int a, int b) {
    return a + b;
}

// Function 3: No return, with parameters
void add3(int a, int b) {
    cout << "Sum (add3) = " << a + b << endl;
}

// Function 4: With return, no parameters
int add4() {
    int a, b;
    cout << "Enter two integers (add4): ";
    cin >> a >> b;
    return a + b;
}

int main() {
    int num1, num2, result;

    // Function 1
    add1();

    // Function 2
    cout << "Enter two integers (add2): ";
    cin >> num1 >> num2;
    result = add2(num1, num2);
    cout << "Sum (add2) = " << result << endl;

    // Function 3
    cout << "Enter two integers (add3): ";
    cin >> num1 >> num2;
    add3(num1, num2);

    // Function 4
    result = add4();
    cout << "Sum (add4) = " << result << endl;

    return 0;
}
