#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    int secretNumber, userGuess;
    
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Loop until the user guesses correctly
    do {
        cout << "\nEnter your guess: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again.";
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again.";
        } else {
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
