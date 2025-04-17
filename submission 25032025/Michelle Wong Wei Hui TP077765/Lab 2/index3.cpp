#include <iostream>
using namespace std;

//Function to reverse the string
string reverseString(string text) {
    string result = "";

    for (int i = text.length() -1 ; i>=0;i--){
        result += text[i];
    }
    return result;
}

bool compareString(string text1, string text2) {
    if (text1.length() != text2.length()) {
        return false;
    }
    
    for (int i = 0; i < text1.length(); i++) {
        if (text1[i] != text2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    string text;
    cout << "Enter an string : ";
    cin >> text;
    
    string reversedtext = reverseString(text);
    cout << "Reverse entered string : " << reversedtext << endl;
    
    if (compareString(text, reversedtext)) {
        cout << "The entered string is a palindrome!" << endl;
    }
    else {
        cout << "The entered string is NOT a palindrome!" << endl;
    }
    
    return 0;
}