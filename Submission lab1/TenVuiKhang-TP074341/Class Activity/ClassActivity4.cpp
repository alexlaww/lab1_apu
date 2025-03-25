#include<iostream>
#include <string>

using namespace std;

int countUppercase(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (isupper(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int uppercaseCount = countUppercase(input);
    cout << "Number of uppercase letters: " << uppercaseCount << endl;

    return 0;
}

