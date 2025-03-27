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


// #include <iostream>
 
// int main() {
//     const int size = 5;
//     int numbers[size];
//     int sum = 0;
//     std::cout << "Enter 5 numbers: ";
//     for (int i = 0; i < size; i++) {
//         std::cin >> numbers[i];
//         sum += numbers[i];
//     }
//     std::cout << "Summation: " << sum << std::endl;
//     return 0;
// }