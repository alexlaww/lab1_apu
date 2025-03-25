#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Set random number generation

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Random Number Game" << endl;
    cout << "------------------------" << endl;

    // Set range for the random number
    cout << "Enter lower bound: ";
    cin >> lower;
    cout << "Enter upper bound: ";
    cin >> upper;

    // Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1);
    cout << "Guess a number between " << lower << " and " << upper << endl;

    do {
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You won!" << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
