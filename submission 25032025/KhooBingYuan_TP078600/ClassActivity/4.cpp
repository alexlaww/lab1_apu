#include <iostream>
#include <string>
#include <cctype>  //isupper()
using namespace std;

int countUppercaseLetters(const string &str) {
    int count = 0;
    for (char ch : str) {
        if (isupper(ch)) { // Check if the character is uppercase
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    
    // Count Uppercasae Letters
    int UppercaseCount = countUppercaseLetters(s);

    cout << "The number of uppercase letters is "<< UppercaseCount << endl;
    return 0;
}
