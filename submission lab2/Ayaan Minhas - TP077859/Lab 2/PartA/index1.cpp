#include <iostream>

using namespace std;

// Function Prototypes
void add1();                           // Type 1: No parameters, no return value
int add2(int a, int b);                // Type 2: With parameters, with return value
int add3();                           // Type 3: No parameters, with return value
void add4(int a, int b);                // Type 4: With parameters, without return value

int main() {
    int num1, num2, sum;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl; // For spacing

    // --- Calling the four function types ---

    // Type 1: No parameters, no return value (Input and output inside function)
    cout << "Calling add1 (No params, No return):" << endl;
    add1(); // Function handles its own I/O
    cout << "------------------------------------" << endl;

    // Type 2: With parameters, with return value
    cout << "Calling add2 (With params, With return):" << endl;
    sum = add2(num1, num2);
    cout << "Sum from add2 = " << sum << endl;
    cout << "------------------------------------" << endl;

    // Type 3: No parameters, with return value (Input inside function)
    cout << "Calling add3 (No params, With return):" << endl;
    sum = add3();
    cout << "Sum from add3 = " << sum << endl;
    cout << "------------------------------------" << endl;

    // Type 4: With parameters, without return value (Output inside function)
    cout << "Calling add4 (With params, No return):" << endl;
    add4(num1, num2); // Function handles its own output
    cout << "------------------------------------" << endl;


    // Example output matching the screenshot's final line format
    // Note: The screenshot only shows one sum calculation.
    // We'll recalculate using add2 for the final specific output line.
    sum = add2(num1, num2);
    cout << "\nFinal Example Output:" << endl;
    cout << "Sum = " << sum << endl;


    return 0;
}

// --- Function Definitions ---

// Type 1: No parameters, no return value
void add1() {
    int n1, n2, result;
    cout << "add1: Enter two integers: ";
    cin >> n1 >> n2;
    result = n1 + n2;
    cout << "add1: Sum = " << result << endl;
}

// Type 2: With parameters, with return value
int add2(int a, int b) {
    return a + b;
}

// Type 3: No parameters, with return value
int add3() {
    int n1, n2;
    cout << "add3: Enter two integers: ";
    cin >> n1 >> n2;
    return n1 + n2;
}

// Type 4: With parameters, without return value
void add4(int a, int b) {
    int result = a + b;
    cout << "add4: Sum = " << result << endl;
}