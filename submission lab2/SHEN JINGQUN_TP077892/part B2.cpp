#include <iostream>
using namespace std;

// 手动反转字符串函数
string reverseString(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];  // 把原字符串每个字符从后往前加进新字符串
    }
    return reversed;
}

// 手动比较两个字符串是否相等
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

    cout << "Enter an string: ";
    cin >> text;

    string reversedText = reverseString(text);
    cout << "Reverse entered string : " << reversedText << endl;

    if (compareString(text, reversedText)) {
        cout << "The entered string is a palindrome!" << endl;
    } else {
        cout << "The entered string is NOT a palindrome!" << endl;
    }

    return 0;
}
