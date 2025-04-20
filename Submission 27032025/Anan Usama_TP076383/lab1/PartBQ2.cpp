// B-2
#include <iostream>
#include <cstdlib> //random number generation
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random number generator
    
    // Initial range variables
    int low = 1;
    int high = 100;
    int guess;
    bool won = false;
    
    // Generate initial secret number
    int secretNumber = low + rand() % (high - low + 1);
    
    cout << "Guess Number Game Started Now!" << endl;
    
    // Game loop continues until player wins
    while (!won) {
        cout << "Guess Number between " << low << " to " << high << endl;
        cout << "Your answer: ";
        cin >> guess;
        
        // Check if guess is correct
        if (guess == secretNumber) {
            cout << "Congratulation! You won!" << endl;
            won = true;
        }
        // If guess is too high, adjust upper bound
        else if (guess > secretNumber) {
            high = guess - 1;
            cout << "Guess Number Game Started Now!" << endl;
        }
        // If guess is too low, adjust lower bound
        else {
            low = guess + 1;
            cout << "Guess Number Game Started Now!" << endl;
        }
        
        // Generate new secret number within new range if game continues
        if (!won) {
            secretNumber = low + rand() % (high - low + 1);
        }
    }
    
    return 0;
}