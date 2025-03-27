#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 15, 6, 7, 8, 9};
    int max1 = 0;
    int max2 = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    cout << "Max1: " << max1 << endl;
    cout << "Max2: " << max2 << endl;
    return 0;
}