#include<iostream>
using namespace std;

// return and no parameter
int addition1() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    return num1 + num2;
}

// return and parameter
int addition2(int num1, int num2){
    return num1 + num2;
}

// without return and with parameter
int addition3 (int num1, int num2) {
    cout << "Sum = " << (num1 + num2) << endl;
}

// without return and no parameter
void addition4() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Sum = " << (num1 + num2) << endl;
}

int main() {
    int sum1 = addition1();
    cout << "Sum = " << sum1 << endl;

    int sum2 = addition2(10, 10);
    cout << "Sum = " << sum2 << endl;
    
    addition3(10, 10);
    addition4();
}