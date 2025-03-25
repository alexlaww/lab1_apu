#include <iostream>

using namespace std;

int main() {
    int billy [] = {16, 2, 77, 40, 12071, 51};

    int n = sizeof(billy) / sizeof(billy[0]);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += billy[i];
        if (i < n-1) {
            cout << billy[i] << " +";
        } else {
            cout << billy[i] << " = " << sum << endl;
        }
    }

}