#include <iostream>
using namespace std;

// Function to reverse print numbers using recursion
void reverseDisplayNumber(int start, int end) {
    if(start < end) return;
    cout << start;
    if (start > end) cout << "+";
    reverseDisplayNumber(start -1 ,end);
}

// Function to calculate sum using recursion
int reverseDisplayNumberAndSum(int start, int end) {
    if (start<end) return 0;
    return start + reverseDisplayNumberAndSum(start - 1,end);

}

int main() {
    int start, end;

    cout << "Enter start value: ";
    cin>> start;

    cout << "Enter end value: ";
    cin >> end;

    int high = (start > end) ? start : end;
    int low = (start < end) ? start : end;

    cout << "Numbers in reverse order: ";
    reverseDisplayNumber(high, low);
    cout << endl;

    int totalSum = reverseDisplayNumberAndSum(high, low);
    cout << "Total sum: " << totalSum << endl;

    return 0;
}