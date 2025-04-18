#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secret_number = rand() % 100 + 1;
    int guess;
    int lower_bound = 1;
    int upper_bound = 100;

    cout << "Guess Number Game Started Now!" << endl;

    do {
        cout << "Guess Number between " << lower_bound << " to " << upper_bound << endl;
        cout << "Your answer: ";
        cin >> guess;

        if (guess < secret_number) {
            cout << "Too low!" << endl; // Optional feedback
            if (guess >= lower_bound) { // Prevent lower bound from going backward
               lower_bound = guess + 1;
            }
        } else if (guess > secret_number) {
            cout << "Too high!" << endl; // Optional feedback
             if (guess <= upper_bound) { // Prevent upper bound from going backward
                upper_bound = guess - 1;
             }
        } else {
            cout << "Congratulation! You won!" << endl;
        }

        // Ensure bounds don't cross after incorrect guesses outside the range
        if (lower_bound > upper_bound) {
           cout << "Something went wrong with the bounds - resetting." << endl;
           // You might reset bounds or handle this scenario based on game rules
           // For simplicity, we'll just let the loop condition handle it if guess is correct
        }


    } while (guess != secret_number);

    return 0;
}