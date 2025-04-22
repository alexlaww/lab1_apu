#include <iostream>
#include <string>
using namespace std;

// Function to reverse the given string
string reverseString(string text) {
    string reversed = "";
    
    // Iterate through the original string from end to beginning
    for (int i = text.length() - 1; i >= 0; i--) {
        // Append each character to the new string
        reversed += text[i];
    }
    
    return reversed;
}

// Function to compare two strings
bool compareString(string text1, string text2) {
    // Check if lengths are different
    if (text1.length() != text2.length()) {
        return false;
    }
    
    // Compare character by character
    for (int i = 0; i < text1.length(); i++) {
        if (text1[i] != text2[i]) {
            return false;
        }
    }
    
    // If we get here, the strings are identical
    return true;
}

int main() {
    string text;
    
    // Get input from user
    cout << "Enter a string : ";
    getline(cin, text);
    
    // Reverse the string
    string reversedtext = reverseString(text);
    cout << "Reverse entered string : " << reversedtext << endl;
    
    // Check if it's a palindrome
    if (compareString(text, reversedtext)) {
        cout << "The entered string is a palindrome!" << endl;
    }
    else {
        cout << "The entered string is NOT a palindrome!" << endl;
    }
    
    return 0;
}