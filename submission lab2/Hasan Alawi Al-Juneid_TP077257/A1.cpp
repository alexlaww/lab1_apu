#include <iostream>

// Method 1: Function that returns the sum
int add1(int a, int b) {
    return a + b;
}

// Method 2: Function that uses a reference parameter to return the sum
void add2(int a, int b, int& result) {
    result = a + b;
}

// Method 3: Function that uses a pointer parameter to return the sum
void add3(int a, int b, int* result) {
    *result = a + b;
}

// Method 4: Function that calculates and prints the sum directly
void add4(int a, int b) {
    std::cout << "Sum calculated directly in add4(): " << a + b << std::endl;
}

int main() {
    int num1, num2, sum;
    
    // Get input from user
    std::cout << "Enters two integers: ";
    std::cin >> num1 >> num2;
    
    // Method 1: Function returns the sum
    sum = add1(num1, num2);
    std::cout << "Sum = " << sum << std::endl;
    
    // Method 2: Function uses a reference parameter
    add2(num1, num2, sum);
    std::cout << "Sum = " << sum << std::endl;
    
    // Method 3: Function uses a pointer parameter
    add3(num1, num2, &sum);
    std::cout << "Sum = " << sum << std::endl;
    
    // Method 4: Function calculates and prints the sum directly
    add4(num1, num2);
    
    return 0;
}