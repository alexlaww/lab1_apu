#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (for diamond dimension): ";
    cin >> n;
    for (int i = 1; i <= n; i += 2) {
        for (int j = n; j > i; j -= 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = n; j > i; j -= 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
