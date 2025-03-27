#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // random number generation
    int lower = 1, upper = 100; // Initial range
    int number = rand() % (upper - lower + 1) + lower;
    int guess;

    cout << "Guess Number Game Started Now:" << endl;
    cout << string(75, '-') << endl;

    while (true) {
        cout << "Guess Number between " << lower << " to " << upper << endl;
        cout << "Your answer: ";
        cin >> guess;

        // Input validation
        if (cin.fail()) {
            cin.clear();  // Clear error flags
            cin.ignore(10000, '\n'); // Ignore invalid input
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if (guess < lower || guess > upper) {
            cout << "Your guess is out of range! Try again.\n";
            continue;
        }

        if (guess == number) {
            cout << "Congratulations! You won!" << endl;
            break;
        } else if (guess < number) {
            lower = guess;
        } else {
            upper = guess;
        }
    }

    return 0;
}
