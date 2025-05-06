#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int * ptr;

    ptr = &num;

    cout << "Address of num = " << &num << endl;
    cout << "Value of num = " << num << endl << endl;

    cout << "Address of ptr = " << &ptr << endl;
    cout << "Value of ptr = " << ptr << endl;
    cout << "Value of pointed by ptr = " << *ptr << endl;

    return 0;
}