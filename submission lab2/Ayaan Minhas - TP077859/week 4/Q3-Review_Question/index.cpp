#include <iostream>
using namespace std;


int main() {

    char arr[] = {'a','b','c','d','e','f'}; 
    char var;
    cout << "array before: "<<arr << endl;

   cout << "size of array: " << sizeof(arr) << endl;
   cout << "size of array[0]: " << sizeof(arr[0]) << endl;
    

    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        var = arr[i];
        arr[i] = arr[sizeof(arr) - i - 1];
        arr[sizeof(arr) - i - 1] = var;
    }

    for (int i = 0; i < sizeof(arr); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


