#include <iostream>
#include <string>
#include <cstdlib> // random number
using namespace std;
#include <sstream>
#include <ctime> // timing 



// Function to validate and parse time
bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh <= 24) && (mm >= 0 && mm <= 60) && (ss >= 0 && ss <= 60);
}

void Question2() {

    string input;
    int hh, mm, ss;
    char colon1, colon2;

    while (true)
    {

        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;

        //Use stringsteam  to parse the input
        
        /*Stringsteam -> 对句子或者是用户输入做出词语分析 
        Example: 
        Stringsteam ssInput; #create a stringsteam object named ssInput
        then ssInput(input) 意思是会对用户的输入进行词句分析*/

        stringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':')
        {
            if (isValidTime(hh, mm, ss)) 
            {
                break;
            }
        }

        cout << "Invalid input! Please enter a valid time in HH:MM:SS format.\n";
    }

    //Convert time to seconds
    int totalSeconds = hh * 3600 + mm * 60 + ss;
    cout << "Elapsed time in seconds = " << totalSeconds << "seconds\n";

}

void Question3() {
    
    srand (time(0)); // Send for random number generation
    int lower, upper, secretNumber, userGuess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "--------------------------------------------" << endl;

    // Set a range for the random number
    cout << "Enter the lower bound: ";
    cin >> lower;
    cout << "Enter the upper bound: ";
    cin >> upper;

    // Generate a random number in the given range
    secretNumber = lower + rand() % (upper - lower + 1);
    cout << "Guess a number between" <<  lower << " and " << upper << endl;

    // Loop until the correct guess is made
    do {
        cout << "Your answer: ";
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }while(userGuess != secretNumber);

}

int main() {
    Question2();
    return 0; 
}