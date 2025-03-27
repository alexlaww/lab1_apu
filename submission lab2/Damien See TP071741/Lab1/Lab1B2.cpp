#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Seed for random number generation
    srand(time(0));

    int lowerBound, upperBound, secretNum, userInput;
    int lives = 3;

    cout << "Guess a number" << endl;
    cout << "Ender the lower bound: ";
    cin >> lowerBound;
    cout << "Enter the upper bound: ";
    cin >> upperBound;

    // Ensure upperBound is greater than or equal to lowerBound
    if (upperBound < lowerBound) {
        cout << "Error: Upper bound must be greater than or equal to lower bound." << endl;
        return 1;
    }

    //Generate random number based on range
    secretNum = lowerBound + rand() % (upperBound - lowerBound + 1);
    cout << "A number in the between the range has been made" << endl;

    while (lives != 0) {
        cout << "Guess the number (" << lives << " lives left): ";
        cin >> userInput;

        if (userInput < secretNum) {
            cout << "Too low! Try again!" << endl;
            lives -= 1;
        } else if (userInput > secretNum) {
            cout << "Too high! Try again!" << endl;
            lives -= 1;
        } else {
            break;
        }
    }

    if (userInput == secretNum) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Wrong ;(....." << endl;
    }
    
    return 0;
}