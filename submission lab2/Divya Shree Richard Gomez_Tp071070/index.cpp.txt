#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string input;
    int uppercaseCount = 0;
 
    // Prompt the user to enter a string
    cout << "Enter a String: ";
    getline(cin, input);
 
    // Count uppercase letters
    for (char ch : input) {
        if (isupper(ch)) {
            uppercaseCount++;
        }
    }
 
    // Display the result
    cout << "The number of uppercase letters is " << uppercaseCount << endl;
 
    return 0;
}