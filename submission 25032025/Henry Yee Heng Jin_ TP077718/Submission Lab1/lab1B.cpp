#include <iostream>
#include <sstream> 
#include <iomanip> 
#include <cstdlib>      //for srand
#include <ctime>        //for time


using namespace std;

// Function to validate and parse time
bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main() {
    string input;
    int hh, mm, ss;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;

        // Use stringstream to parse the input
        stringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':') {
            if (isValidTime(hh, mm, ss)) {
                break; // Valid input, exit loop
            }
        }

        cout << "Invalid input! Please enter a valid time in HH:MM:SS format.\n";
    }

    // Convert time into seconds
    int totalSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds\n";

    return 0;


//B2
    
    srand(time(0)); // seed random number generator

    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "===============================" << endl;

    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;

    secretNumber = lower + rand() % (upper - lower + 1);

    cout << "Gues a number between " << lower << " and " << upper << ": " << endl;

    //Loop until correct guess is made
    do
    {
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n"; //or use endl
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (userGuess != secretNumber);
}
