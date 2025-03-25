#include <iostream>
using namespace std;

int main() {
    int billy [] = {16, 2, 77, 40, 12071, 51};
    int total = 0;

    for (int i = 0; i < 6; i++) {
        total += billy[i];
        cout << billy[i] << " + ";
    }

    cout << " = " << total;

    return 0;
}