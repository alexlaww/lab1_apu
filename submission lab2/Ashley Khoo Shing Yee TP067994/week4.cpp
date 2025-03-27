/*#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0, end = size -1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int size){
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Orignal Array";
    printArray(arr,size);

    reverseArray(arr,size);

    cout << "Reversed Array";
    printArray(arr, size);

    return 0;
}*/

//FIND MAX AND MIN in a array

/*#include <iostream>
#include <limits.h>
using namespace std;

void findMaxNumbers(int arr[], int size){
    if(size<2){
        cout << "Array should have at least two elemetns"<< endl;
        return;
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for(int i =0;i <size;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]> max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }

    if(max2 == INT_MIN){
        cout << "No second maximum found"<< endl;
    }else{
        cout << "Maximum Number" << max1 << endl;
        cout << "Second Maximum Number" << max2 << endl;
    }
}

int main(){
    int arr[] = {10,20,4,45,99};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxNumbers(arr, size);

    return 0;
}*/

//add two integers
/*#include <iostream>
using namespace std;

void add(){
    int num1, num2;
    cout << "Enter Number";
    cin >> num1;
    cout << "Enter Another Number:";
    cin >> num2;
    cout << "Sum of two numbers is "<< num1 + num2 << endl;
}

int main(){
    add();

    return 0;
}*/

/*#include <iostream>
using namespace std;

void add1();
int add2(int a, int b);
void add3(int a, int b);
int add4();

// Function **without return, without parameters**
void add1() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum (add1) = " << a + b << endl;
}

// Function **with return, with parameters**
int add2(int a, int b) {
    return a + b;
}

// Function **without return, with parameters**
void add3(int a, int b) {
    cout << "Sum (add3) = " << a + b << endl;
}

// Function **with return, without parameters**
int add4() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;
}

int main() {
    // Calling function 1
    add1();

    // Calling function 2
    int sum2 = add2(10, 20);  
    cout << "Sum (add2) = " << sum2 << endl;

    // Calling function 3
    add3(15, 25); 

    // Calling function 4
    int sum4 = add4();
    cout << "Sum (add4) = " << sum4 << endl;

    return 0;
}*/

//Question2
/*
#include <iostream>
using namespace std;

string reverseString(string text);
bool compareString(string text1, string text2);

int main()
{
    string text;
    cout << "Enter an String:";
    cin >> text;

    string reversedtext = reverseString(text);
    cout << "Reverse entered string" << reverseString << endl;

    if(compareString(text,reversedtext))
    {
        cout << "The entered string is a palindrome"<<endl;
    }
    else
    {
        cout << "The entered string is NOT a palindrome!" << endl;
    }
    return 0;
}*/


