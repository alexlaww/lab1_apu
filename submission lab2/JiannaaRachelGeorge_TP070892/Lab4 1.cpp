#include <iostream>
using namespace std;

// int addReturnWithParams(int, int);    
// void addNoReturnWithParams(int, int); 
// int addReturnNoParams();               
// void addNoReturnNoParams(); 


int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum1 = addReturnWithParams(num1, num2);
    cout << "Sum (Return, with parameters): " << sum1 << endl;

    addNoReturnWithParams(num1, num2);

    int sum2 = addReturnNoParams();
    cout << "Sum (Return, no parameters): " << sum2 << endl;

    addNoReturnNoParams();

    return 0;
}

int addReturnWithParams(int a, int b) {
    return a + b;
}

void addNoReturnWithParams(int a, int b) {
    cout << "Sum (No return, with parameters): " << (a + b) << endl;
}

int addReturnNoParams() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    return a + b;
}

void addNoReturnNoParams() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum (No return, no parameters): " << (a + b) << endl;
}


