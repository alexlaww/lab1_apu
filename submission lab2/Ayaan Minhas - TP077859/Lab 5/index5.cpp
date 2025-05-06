// index5.cpp
#include <iostream>
using namespace std;

int main()
{
    int size;
    int *arr;

    // Get the size of the array from the user
    cout << "Enter the size of array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    arr = new int[size];

    // Prompt for array elements
    cout << "Now, build an array with " << size << " columns." << endl;
    cout << "Enter elements in the developed array:" << endl;

    // Input array elements using pointer arithmetic
    for(int i = 0; i < size; i++)
        cin >> *(arr + i);

    // Display the array elements using pointer arithmetic
    cout << "The array elements = ";
    for(int i = 0; i < size; i++)
        cout << *(arr + i) << ", ";
    cout << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
