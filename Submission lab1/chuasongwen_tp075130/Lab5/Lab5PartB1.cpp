#include <iostream>
using namespace std;

void printArray(int arr[]);
void inputArray(int arr[]);

int n;
int main(){
    
    cout << "Array Size: ";
    cin >> n;
    int* arr = new int [n];
    inputArray(arr);
    printArray(arr);

    delete[] arr;
    return 0;
}

void inputArray(int arr[]){
    int *ptr = arr;
    int *end = ptr + n;

    for(int i =0; ptr < end; ptr++, i++){
        cout << "Enter element " << i << ": ";
        cin >> *ptr;
    }
}

void printArray(int arr[]){
    int *ptr = arr;
    int *end = ptr + n;
    cout << "The array elements: ";
    for( ; ptr < end; ptr++){
        cout << *ptr << " ";
    }
}