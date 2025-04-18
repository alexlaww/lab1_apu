#include <iostream>
using namespace std;

string word;
int integer;
float real;
long long biginteger;
    
int main()
{
    
    cout << "Value of character = ";
    cin >> word;
    cout << "Address of character = " << &word << endl;
    cout << "Value of integer = ";
    cin >> integer;
    cout << "Address of character = " << &integer << endl;
    cout << "Value of real = ";
    cin >> real;
    cout << "Address of character = " << &real << endl;
    cout << "Value of biginteger = ";
    cin >> biginteger;
    cout << "Address of character = " << &biginteger << endl;
    
    return 0;
}