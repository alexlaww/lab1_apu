#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "------------------------------" << endl;

    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    secretNumber = lower + rand() % (upper - lower + 1);
    cout << "Guess a number between " << lower << " and " << upper << endl;

    do {
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "Congratulations! You won!" << endl;
        }
    } while (userGuess != secretNumber);
    return 0;
}