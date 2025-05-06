#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the size of array: ";
    cin >> num;

    int * arr = new int[num];

    int * ptr = arr;

    cout << "Now, build an array with " << num << " columns." << endl;
    cout << "Enter " << num << " elements:" << endl;
    for (int i = 0; i < num; i++) {
        cin >> *(ptr + i);
    }

    // Print elements using pointer
    cout << "The array elements = ";
    for (int i = 0; i < num; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}