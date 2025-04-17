# include <iostream>
using namespace std;

//You cannot use user-defined arrays (like char arr[100])
//You cannot use built-in functions (like std::reverse() or strcmp())
string reverseString(string text);
bool compareString(string text1, string text2);
int main(){
    string text;
    cout << "Enter a string: ";
    cin >> text;

    string reversedtext = reverseString(text);
    cout << "Reversed string: " << reversedtext << endl;

    if (compareString(text, reversedtext)){
        cout << "The string is a palindrome." << endl;
    }else{
        cout << "Strings are not equal" << endl;
    }
    return 0;
}

string reverseString(string text){
    string reversed = "";
    for(int i = text.length() - 1; i >= 0; i--){
        reversed += text[i];
    }
    
    return reversed;
}

bool compareString(string text1, string text2){
    for(int i = 0; i < text1.length(); i++){
        if(text1[i] != text2[i]){
            return false;
        }
    }

    return true;
}