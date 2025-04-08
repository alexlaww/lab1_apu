#include <iostream>
#include <cstdlib> // generate random number for the game 
#include <ctime>  // for time 

using namespace std; 

int main() {
    int number1;
    int number2;
    srand(time(0));
    int randomnumber; 
    int guess;

    cout << "enter the first number: "; cin >> number1;
    cout << "enter the second number: "; cin >> number2;
    randomnumber = rand() % (number2 - number1 + 1) + number1;

    cout << "Press Enter to start the game...";
    cin.ignore();
    cin.get();

    cout << "Guess Number game starts now!" << endl;
    cout << string(75, '-') << endl;
    cout << "Guess a number between " << number1 << " and " << number2 << endl;

    do {
        cout << "Enter your guess: "; cin >> guess;
        if(guess > randomnumber) {
            cout << "Too high! Try again" << endl;
        } else if(guess < randomnumber) {
            cout << "Too low! Try again" << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
    } while(guess != randomnumber);




    return 0;
}