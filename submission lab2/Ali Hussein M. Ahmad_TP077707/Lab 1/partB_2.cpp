#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    int lowerBound = 1;
    int upperBound = 100;
    
    cout << "Guess Number Game Started Now!" << endl;
    
    do {
        cout << "Guess Number between " << lowerBound << " to " << upperBound << endl;
        cout << "Your answer: ";
        cin >> guess;
        attempts++;
        
        if (guess < lowerBound || guess > upperBound) {
            cout << "Please enter a number between " << lowerBound << " and " << upperBound << "!" << endl;
            continue;
        }
        
        if (guess < secretNumber) {
            cout << "Too low! Try higher." << endl;
            lowerBound = guess + 1;
        } else if (guess > secretNumber) {
            cout << "Too high! Try lower." << endl;
            upperBound = guess - 1;
        }
        
    } while (guess != secretNumber);
    
    cout << "Congratulations! You guessed the number " << secretNumber 
         << " in " << attempts << " attempts." << endl;
    
    return 0;
}