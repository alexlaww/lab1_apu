#include<iostream>
using namespace std;

void reverseDisplayNumber (int start, int end){
    if (start < end) return;
    cout << start;
    if (start > end) cout << " + ";
    reverseDisplayNumber(start - 1, end);
}

int reverseDisplayNumberAndSum(int start, int end){
    if (start < end) return 0;
    return start + reverseDisplayNumberAndSum(start - 1, end);
}

int main() {
    int start, end;
    cout << "Enter a start value: ";
    cin >> start;
    cout << "Enter an end value: ";
    cin >> end;

    reverseDisplayNumber(start, end);

    cout << " = " << reverseDisplayNumberAndSum(start, end) << endl;
}