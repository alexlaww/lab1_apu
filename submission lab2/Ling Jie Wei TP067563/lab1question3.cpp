#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    srand(time(0));  // Seed for random number generation
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int low = 1, high = 100, guess;

    cout << "Guess Number Game Started Now!" << endl;

    while (true) {
        cout << "\nGuess Number between " << low << " to " << high << endl;
        cout << "Your answer: ";
        cin >> guess;

        // Input validation
        if (cin.fail() || guess < low || guess > high) {
            cout << "Invalid input! Please enter a number between " << low << " and " << high << "." << endl;
            cin.clear(); // Clear error flag
            cin.ignore(10000, '\n'); // Ignore invalid input
            continue; // Restart loop
        }

        // Check if the guess is correct
        if (guess == secretNumber) {
            cout << "\nCongratulations! You won!\n";
            break;
        } 
        else if (guess < secretNumber) {
            cout << "Try a higher number!" << endl;
            low = guess + 1; // Adjust lower bound
        } 
        else {
            cout << "Try a lower number!" << endl;
            high = guess - 1; // Adjust upper bound
        }
    }

    return 0;
}
