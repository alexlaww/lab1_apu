#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 19;
    int guess;
    int time = 0;
    int low = 1, high = 100; // Dynamic range

    cout << "Guess Number Game Started Now!\n"
         << string(50, '=') << "\n"
         << "Guess a number between " << low << " and " << high << "." << endl
         << "Your answer: ";
    
    cin >> guess;

    while (guess != number) {
        time++; // Track attempts

        if (guess > number) {
            high = guess ; // Update the upper bound
        } else {
            low = guess ; // Update the lower bound
        }

        cout << "Guess a number between " << low << " and " << high << ":" << endl;
        cout << "Your answer: ";
        cin >> guess; // Update guess inside the loop
    }

    cout << "\nCongratulations! You won in " << time << " attempts!" << endl;
    
    return 0;
}
