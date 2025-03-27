#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    int lower = 1;
    int upper = 100;
    int guess;
    int secretNumber;

    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % (upper - lower + 1) + lower;

    cout << "Guess Number Game Started Now!" << endl;

    while (true) {
        cout << "---------------------------------------------" << endl;
        cout << "Guess Number between " << lower << " to " << upper << endl;
        cout << "Your answer: ";
        cin >> guess;

        if (guess < secretNumber) {
            lower = guess + 1;  // Narrow the range
        } else if (guess > secretNumber) {
            upper = guess - 1;  // Narrow the range
        } else {
            cout << "Congratulations! You won!" << endl;
            break;
        }
    }

    return 0;
}