#include <iostream>
using namespace std;

int main() {
    string input;
    int uppercaseCount = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (c >= 'A' && c <= 'Z') {
            uppercaseCount++;
        }
    }

    cout << "Number of uppercase letters: " << uppercaseCount << endl;

    return 0;
}