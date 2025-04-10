#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a String: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            count++;
        }
    }

    cout << "The number of uppercase letters is " << count << endl;

    return 0;
}
