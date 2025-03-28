// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int n) {
//     int left = 0, right = n - 1;
//     while (left < right) {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     reverseArray(arr, n);

//     cout << "Reversed Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <climits> 
using namespace std;

int main(){
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n < 2){
        cout << "Array should have at least two elements" << endl; 
        return -1;
    }

    int max1 = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    if(max2 == INT_MIN){
        cout << "No second maximum value." << endl;
    } else {
        cout << "Maximum: " << max1 << endl;
        cout << "Second Maximum: " << max2 << endl;
    }
    return 0;
}