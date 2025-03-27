#include <iostream>
using namespace std;

// Global variables
int a = 5, b = 7;

// Function without return and without parameters
void sumWithoutReturnWithoutParams() {
    cout << "Sum (Function 1): " << (a + b) << endl;
}

// Function with return and with parameters
int sumWithReturnWithParams(int x, int y) {
    return x + y;
}

// Function without return but with parameters
void sumWithoutReturnWithParams(int x, int y) {
    cout << "Sum (Function 3): " << (x + y) << endl;
}

// Function with return but without parameters
int sumWithReturnWithoutParams() {
    return a + b;
}

int main() {
    // Function 1
    sumWithoutReturnWithoutParams();
    
    // Function 2
    int result2 = sumWithReturnWithParams(a, b);
    cout << "Sum (Function 2): " << result2 << endl;
    
    // Function 3
    sumWithoutReturnWithParams(a, b);
    
    // Function 4
    int result4 = sumWithReturnWithoutParams();
    cout << "Sum (Function 4): " << result4 << endl;
    
    return 0;
}