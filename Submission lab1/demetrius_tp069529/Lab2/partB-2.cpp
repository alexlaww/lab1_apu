#include <iostream>
using namespace std;

string reversing(string text);
bool compareString(string text1, string text2); // To compare the texts

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;
    
    string reversedText = reversing(text);
    
    if (compareString(text, reversedText)) {
        cout << "The entered string is a palindrome!" << endl;
    } else {
        cout << "The entered string is NOT a palindrome!" << endl;
    }
    
    return 0;
}

string reversing(string text) {
    int n = text.length();
    for (int i = 0; i < n / 2; i++) {
        swap(text[i], text[n - i - 1]);
    }
    return text;
}

bool compareString(string text1, string text2) {
    return (text1 == text2);
}
