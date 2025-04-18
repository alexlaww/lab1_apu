#include <iostream>
#include <string> // std::string is allowed based on the prompt's example code

using namespace std;

// Function Prototypes
string reverseString(string text); // to reverse the text
bool compareString(string text1, string text2); // to compare the texts

int main() {
    string text;
    cout << "Enter a string : ";
    cin >> text; // Reads a single word

    // Reverse the string using the function
    string reversedtext = reverseString(text);
    cout << "Reverse entered string : " << reversedtext << endl;

    // Compare original and reversed using the function
    if (compareString(text, reversedtext)) {
        cout << "The entered string is a palindrome!" << endl;
    } else {
        cout << "The entered string is NOT a palindrome!" << endl;
    }

    return 0;
}

// --- Function Definitions ---

// Reverses the input string manually
string reverseString(string text) {
    string reversed_text = "";
    // Iterate from the last character to the first
    // string::length() returns size_t, use int for loop or compare properly
    int len = text.length();
    for (int i = len - 1; i >= 0; --i) {
        reversed_text += text[i]; // Append character to the result
    }
    return reversed_text;
}

// Compares two strings manually for equality
bool compareString(string text1, string text2) {
    int len1 = text1.length();
    int len2 = text2.length();

    // If lengths are different, they can't be equal
    if (len1 != len2) {
        return false;
    }

    // Iterate through both strings comparing characters
    for (int i = 0; i < len1; ++i) {
        if (text1[i] != text2[i]) {
            return false; // Mismatch found
        }
    }

    // If loop completes, strings are identical
    return true;
}