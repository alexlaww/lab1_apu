#include <iostream>
#include <cctype>  // For isupper()
#include <string>  // For string handling

using namespace std;
int x;
int y;
int sum;
void add();
void add(){
    cout << "Choose first Integer: " << endl;
    cin >> x;
    cout << "Choose the Second Integer:" << endl;
    cin >> y;
    sum = x + y;
    cout << sum;
}
void add1(int a, int b);
void add1(int a, int b){
    cout << "Choose Two Integers: " << endl;
    cin >> a >> b ;
    cout << "Sum is " << (a + b)<< endl;
}
int add2();
int add2(){
    int a,b;
    cout << "Choose two Integers: " << endl;
    cin >> a >> b;
    return (a + b);
}
int add3(int a, int b);
int add3(int a, int b){
    cout << "Choose Two Integers: " << endl;
    cin >> a >> b;
    return (a + b);
}
int main() {
   add();
   add1(3,5);
   add2();
   add3(4,7);
}
