#include <iostream>
#include <cstdlib> //generate random number
#include <ctime> //time start from 0

using namespace std;

int main()
{
    srand(time(0)); //seed for random number generation

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Nowl!" << end1;
    cout << "--------------------------------------------" << end1;

    //Set a range for the random number
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    //Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1);

    cout << "Guess a number between " << lower << " and " << upper << end1;

    //Loop until the correct guess is made
    do
    {
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber)
        {
            cout << "Too low! Try again.\n";
        }

        else if(userGuess > secretNumber)
        {
            cout << "Too high! Try again.\n";
        }

        else
        {
            cout << "Congratulations! You guessed the correct number." << end1;
        }
    }while(userGuess != secretNumber);

    return 0;
}