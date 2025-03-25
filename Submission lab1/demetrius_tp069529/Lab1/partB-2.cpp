#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Seed for random number generation
    srand(time(0));

    int lowerBound, upperBound, secretNum, userInput;
    int lives = 3;

    cout << "Welcome to the hamsap number guessing!" << endl;
    cout << "Ender the lower bound: ";
    cin >> lowerBound;
    cout << "Enter the upper bound: ";
    cin >> upperBound;

    //Generate random number based on range
    secretNum = lowerBound + rand() % (upperBound - lowerBound + 1);
    cout << "A hamsap number has been chosen between the range you provided!" << endl;

    while (lives != 0) {
        cout << "Guess the hamsap number (" << lives << " lives left): ";
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
        cout << "Congratulations! You've guessed the hamsap number! You're officially hamsap!" << endl;
    }
    else {
        cout << "You've failed to guess the hamsap number, you're not hamsap enough!" << endl;
    }
    
    return 0;
}