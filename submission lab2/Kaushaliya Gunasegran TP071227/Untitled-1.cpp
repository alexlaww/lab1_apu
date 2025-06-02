
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n-1;
    while (left<right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, n);

    cout<<"Reversed Array:";
    for (int i=0;i<n; i++) {
        cout<<arr[i]<<"";
    }

    return 0;
}