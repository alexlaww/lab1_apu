#include <iostream>
using namespace std;

int main() {
    int numbers[10]; // array to store unique values
    int count = 0;

    while (count < 10) {
        int input;
        bool duplicate = false;

        cout << "Enter value " << count + 1 << ": ";
        cin >> input;

        // Check for duplicate
        for (int i = 0; i < count; i++) {
            if (numbers[i] == input) {
                duplicate = true;
                break;
            }
        }

        if (duplicate) {
            cout << "Value already in the list! Please choose other value!" << endl;
        } else {
            numbers[count] = input;
            count++;
        }
    }

    // Display the values
    for (int i = 0; i < 10; i++) {
        cout << numbers[i];
        if (i < 9) cout << ", ";
    }
    cout << endl;

    return 0;
}
