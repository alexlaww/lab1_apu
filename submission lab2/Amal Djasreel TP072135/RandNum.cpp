#include <iostream>
#include <cstdlib>   // For rand(), srand()
#include <ctime>     // For time()
using namespace std;

int main() {
    // Initialize the random seed
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // Generate a random max range (between 1 and 100)
    int maxRange = rand() % 100 + 1;  
    // Generate a secret number between 1 and maxRange
    int secretNumber = rand() % maxRange + 1;
    
    cout << "Guess Number Game Started Now!\n";
    cout << "Guess Number between 1 to " << maxRange << endl;
    
    int guess;
    do {
        cout << "Your answer: ";
        cin >> guess;
        
        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "Congratulations! You won!\n";
        }
        
    } while (guess != secretNumber);

    return 0;
}
