#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "abc";
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 98989898911;

    cout << "Value of character = " << word << ", Address of character = "<< &word << endl;
    cout << "Value of integer = " << integer << ", Address of character = " << &integer << endl;
    cout << "Value of real = " << real << ", Address of character = " << &real << endl;
    cout << "Value of biginteger = " << biginteger << ", Address of character = " << &biginteger << endl;

    return 0;
}