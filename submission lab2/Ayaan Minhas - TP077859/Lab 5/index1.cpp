// index.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* Simple declarations */
    string word = "abc";
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

    /* Print variable value with their memory address */
    cout << "Value of Character=" << word << ", Address of Character=" << &word << endl;
    cout << "Value of integer=" << integer << ", Address of integer=" << &integer << endl;
    cout << "Value of real=" << real << ", Address of real=" << &real << endl;
    cout << "Value of biginteger=" << biginteger << ", Address of biginteger=" << &biginteger << endl;

    return 0;
}
