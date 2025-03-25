//Activity 2
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    // Get user input
    for (int i = 0; i < 5; i++) {
        cout << "Enter your number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Display entered numbers
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i];
        if (i < 4) cout << " + ";
    }

    cout << " = " << sum << endl;
    return 0;
}
