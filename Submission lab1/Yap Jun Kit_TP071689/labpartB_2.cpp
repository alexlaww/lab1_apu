//Part B Question 2
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;
int main() {
    srand(time(0));  // Seed random number generator

    int lower = 1, upper = 100;  // Initial range
    int secretNumber = rand() % (upper - lower + 1) + lower;  // Random number between 1-100
    int guess;

    cout << "Welcome to the Guessing Number Game!\n";
    cout << "I have chosen a number between 1 and 100. Let the Game Begin!\n";

    while (true) {
        cout << "Guess a number between " << lower << " and " << upper << ": ";
        cin >> guess;

        // Validate input
        if (guess < lower || guess > upper) {
            cout << "Invalid guess! Stay within the range.\n";
            continue;
        }

        if (guess == secretNumber) {
            cout << "GGWP! Well I Lost You Won: " << secretNumber <<" ";
            break;
        } else if (guess < secretNumber) {
            cout << "So Close! Try again.\n";
            lower = guess + 1;  // Shrink the range
        } else {
            cout << "Almost there! Try again.\n";
            upper = guess - 1;  // Shrink the range
        }
    }

    return 0;
}
