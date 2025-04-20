#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame(int min, int max) {
    int secretNumber, guess;
    srand(time(0)); // Seed random number generator
    secretNumber = rand() % (max - min + 1) + min; // Generate number in range

    cout << "Guess Number Game Started Now!\n";
    cout << "Guess Number between " << min << " to " << max << endl;

    do {
        cout << "Your answer: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
    } while (guess != secretNumber);

    cout << "Congratulations! You won!\n";
}

int main() {
    int min = 1, max = 5;
    playGame(min, max);
    return 0;
}
