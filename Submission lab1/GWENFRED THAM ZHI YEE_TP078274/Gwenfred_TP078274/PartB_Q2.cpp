#include <iostream>
#include <cstdlib> // Required for random number generation
#include <ctime>   // Required to seed the random number generator

using namespace std;

int main() {
    // Seed the random number generator (only do this once)
    srand(time(0));

    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "Guess Number between 1 to 100" << endl;

    while (true) {
        cout << "Your answer: ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low!" << endl;
        } else if (guess > randomNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulation! You won!" << endl;
            break; // Exit the loop
        }
    }

    return 0;
}