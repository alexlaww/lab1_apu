#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () 
{
    srand(time(0));
    int secretNumber;
    int Userguess;
    int upper, lower;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "--------------------------------" << endl;
    
    cout << "Enter the upper bound: ";
    cin >> upper;

    cout << "Enter the lower bound: ";
    cin >> lower;

    //Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1);

    cout << "Guess a number between " << lower << " and " << upper << endl;

    //Game loop
    do {
        cout << "Enter your guess: ";
        cin >> Userguess;

        if (Userguess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (Userguess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
    } while (Userguess != secretNumber);
    return 0;
}
    