#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int lower = 1, upper = 10, target, guess;

    cout << "GUESS NUMBER GAME STARTED NOW!\n";
    cout << "Guess Number between " << lower << " to " << upper << "\n";
    
    target = rand() % (upper - lower + 1) + lower;

    while (true) {
        cout << "Your answer: ";
        cin >> guess;

        if (guess < lower || guess > upper) {
            cout << "Invalid guess! Try again.\n";
        } else if (guess < target) {
            cout << "Try again.\n";
        } else {
            cout << "Congratulations! You won!\n";
            break;
        }
    }

    return 0;
}
