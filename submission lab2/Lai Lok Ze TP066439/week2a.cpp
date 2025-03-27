#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;
    int capitalCount = 0;

    cout << "Enter a string: ";
    cin >> input;

    for (char ch : input) {
        if (isupper(ch)) {
            capitalCount += 1;
        }
    }

    cout << "Number of capital letters: " << capitalCount;
    return 0;
}