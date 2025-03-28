#include <iostream>
#include <cstdlib> //random number generation
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // random number generator (from cstdlib)
    int secretNumber = rand() % 100 + 1; // Generate a random number
    int guess;
    
    cout << "Guess Number Game Started Now!" << endl;
    cout << "---------------------------------" << endl;
    cout << "\nGuess Number between 1 to 100" << endl;
    
    do {
        cout << "Your answer: ";  //ask first 
        cin >> guess;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != secretNumber); //checked after the guess
    
    return 0;
}