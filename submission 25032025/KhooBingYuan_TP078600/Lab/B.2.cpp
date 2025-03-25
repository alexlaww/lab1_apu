#include <iostream>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()
#include <Windows.h> // For Windows clean screen

using namespace std;


void validateIntegerInput(int &userInput, int &flag) {
    char c;
    while (true) {
        cin >> userInput;
        
        if (cin.fail() || (cin.get(c) && c != '\n')) {
            cin.clear(); // Clear error flags
            while (cin.get() != '\n'); // Discard invalid input
            flag++;  // Increment flag for every invalid attempt
            cout << "Invalid input. Please enter a valid integer: ";
        } else {
            break;
        }
    }
}

// Function to move the cursor up and overwrite previous lines
void moveCursorUp(int lines) {
    for (int i = 0; i < lines; i++) {
        cout << "\033[A\33[2K"; // Move cursor up and clear the line
    }
}

void guessNumber(int number){
    int i = 0, low = 1, high = 100;
    cout << "Guess Number Game Started Now:" << endl;
    cout << string(50, '-') << endl;
    cout << "Guess Number between " << low << " to " << high <<endl;
    cout << "Your answer: ";
    while ( i != number){       
        int flag =2; //Default 2 lines to move up(range + input line)
        
        // Validate input is integer
        validateIntegerInput(i, flag);
        // Validate input is within range
        while (i < low || i > high) {
            flag++;  // Increase flag for each invalid range attempt
            cout << "Invalid input! Please enter a number between " << low << " and " << high << ": ";
            validateIntegerInput(i,flag);
        }
        
        if(i == number){
            cout << "Congratulation! You won!";
            break;
        }
        else if(i < number){
            low = i;
        }
        else{
            high =i;
        }
        
        // Move cursor up by flag value represent how many lines and overwrite the range and input
        moveCursorUp(flag);
        cout << "Guess Number between " << low << " to " << high <<endl;
        cout << "Your answer: ";
    }
}

int main() {
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    guessNumber(randomNumber);

    return 0;
}
