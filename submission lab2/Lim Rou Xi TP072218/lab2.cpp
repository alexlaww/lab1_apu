#include <iostream>
using namespace std;

int add2(int add1, int add2);
int add4();
void add3(int add1, int add2);
void add1();

void add1(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum = " << (a + b) << endl;
}

int add2(int a, int b){
    return a + b;
}

void add3(int a, int b){
    cout << "Sum = " << (a + b) << endl;
}

int add4(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    return a + b;
}

int main(){
    cout << "Function without return and without parameters: " << endl;
    add1();

    cout << "Functions with return and with parameters: " << endl;
    int result = add2(8, -4);
    cout << "Sum = " << result << endl;

    cout << "Functions with return and without parameters: " << endl;
    add3(8, -4);

    cout << "Functions without return and with parameters: " << endl;
    int result2 = add4();
    cout << "Sum = " << result << endl;

    return 0;
}