#include <iostream>
using namespace std;

//Function to reverse the string 
string reverseString(string text){
    string reversed = "";
    for (int i = text.length()- 1; i>=0; i--){
        reversed += text[i];

    }
    return reversed;

}

//Function to check if the string is a palindrome
bool compareString(string text1, string text2){
    if(text1 == text2){
        return true;
    }
    return false;
}

int main(){
    string text;
    cout << "Enter a string: ";
    cin >> text;

    string reversedtext = reverseString(text);
    cout << "Reversed entered string: " << reversedtext << endl;

    if (compareString(text, reversedtext)){

    }
}