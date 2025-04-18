#include <iostream>
using namespace std;

int num1, num2;
int *value1, *value2;
void swap(int *value1, int *value2);
int main(){
    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Before swapping: " << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    cout << "After swapping: " << endl;
    swap(&num1, &num2);
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    value1 = &num1;
    value2 = &num2;
    cout << "Value 1: " << *value1 << endl;
    cout << "Value 2: " << *value2 << endl;

    return 0;
}

void swap(int *value1, int *value2){
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}