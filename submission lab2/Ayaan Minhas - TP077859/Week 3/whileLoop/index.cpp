#include <iostream>
#include <string>
using namespace std;
#include <cctype>

int main(){

    cout << "Enter a string: ";
    string str;
    getline(cin, str);
    int count = 0;

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            count = count + 1;
        }
    }
    cout << "Number of uppercase letters: " << count << endl;
    return 0;
}