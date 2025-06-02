#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter your number " << i + 1 << " : ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4)
            cout << " + ";
        else
            cout << " = ";
    }

    cout << sum << endl;

    return 0;
}
