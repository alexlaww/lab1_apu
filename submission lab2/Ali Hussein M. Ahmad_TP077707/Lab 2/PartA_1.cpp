#include <iostream>
using namespace std;

//1, function with return and no parameters (inputs taken inside the function)
int add1(){
    int a,b;
    cout << "Enter two Integers :";
    cin >> a >> b;
    return a +b;
}

// 2. Function with return and parameters (inputs passed as arguments)
int add2(int a, int b){
    return a +b;
}

//3. Function without return and with parameters (displays sum directly)
void add3(int a ,int b){
    cout << "Sum = " << (a+b) <<endl;
}

//4. Function without return and no paramers (takes input and displays sum directly)
void add4(){
    int a,b;
    cout << "Enters two integers: ";
    cin >> a >> b;
    cout << "Sum = "<< (a+b)<< endl;
}