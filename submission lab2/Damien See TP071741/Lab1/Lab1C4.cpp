#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows (for diamond dimension): ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "Input is even, incrementing to make it odd." << endl;
        n++;
    }

    // Upper part of diamond
    for (int i = 1; i <= n; i += 2) {
        for (int j = n; j > i; j -= 2)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }

    // Lower part of diamond
    for (int i = n - 2; i > 0; i -= 2) {
        for (int j = n; j > i; j -= 2)
            cout << " ";
        for (int k = 1; k <= i; k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}