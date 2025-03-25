#include <iostream>
#include <sstream>
# include <ctime>
# include <cstdlib>
#include <iomanip>

using namespace std;

int main(){
    srand(time(0)); //Seed for random number generator
    int lower , upper , secretNumber , guess ;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "------------------------------------" << endl;

    // Set a range for the ramndom number
    cout << "Enter the lower bound:" ;
    cin >> lower ;
    cout << "Enter the upper bound:" ;
    cin >> upper ;
    
    // Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1) ;

    cout << "Guess a number between " << lower << " and " << upper << endl;

    // Loop until the user guesses the correct number  

    do
    {
        cout << "Enter your guess: " ;
        cin >> guess ;

        if (guess > secretNumber){
            cout << "Too high! Try again." << endl;
        }
        else if (guess < secretNumber){
            cout << "Too low! Try again." << endl;
        }
        else{
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != secretNumber);
    
    return 0;
}