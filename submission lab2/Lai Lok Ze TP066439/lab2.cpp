#include<iostream>
using namespace std;

int sum(int a, int b);
int sum1();
void sum2();
void sum3(int c, int d);


// Function to return sum of two numbers
int sum(int a, int b){
    return a + b;
}

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Sum = " << sum(num1, num2) << endl;
    return 0; 
}

// Function to get input and return sum
int sum1(){
    int num1, num2;
    cin >> num1 >> num2;
    return num1 + num2;
}

int main2(){
    cout << "Sum = " << sum1() << endl;
    return 0;
}

// Function to get input and directly print sum
void sum2(){
    int num3, num4;
    cout << "Enter two integers: ";
    cin >> num3 >> num4;
    cout << "Sum = " << (num3 + num4) << endl;
}

int main3(){
    sum2();
    return 0;
}

// Function to print sum of given numbers
void sum3(int c, int d){
    cout << "Sum = " << (c + d) << endl;
}

int main4(){
    int c, d;
    cin >> c >> d;
    sum3(c, d);
    return 0;
}
