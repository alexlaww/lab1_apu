#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    bool valid = false;
    int hours, minutes, seconds, hr , min, total_seconds;
    string time;
    cout << "Please enter your elapsed time in (HH:MM:SS) format = ";
    
    while (!valid)
    {
        cin >> time;
        stringstream ss(time);
        char ch1, ch2;
        if (ss >> hours >> ch1 >> minutes >> ch2 >> seconds && ch1 == ':' && ch2 == ':' && ss.eof())
        {
            valid = true;
        }
        else
        {
            cout << "Invalid input. Please enter your elapsed time in (HH:MM:SS) format = ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    
    hr = hours * 3600;
    min = minutes * 60;
    total_seconds = hr + min + seconds;
    cout << "The total seconds is " << total_seconds << " seconds\n";


    /*
    int secretNumber;
    cout << "Guess the number game!!!\n";

    int guess;
    bool correct = false;
    srand(time(0));
    secretNumber = 1 + rand() % 100;
    do
    {
        cout << "Enter your guess number (1-100) = ";
        cin >> guess;
        if (guess > secretNumber)
        {
            cout << "The number is lower.\n";
        }
        else if (guess < secretNumber)
        {
            cout << "The number is higher.\n";
        }
        else if (guess == secretNumber)
        {
            cout << "Congratulations! You have guessed the correct number.\n";
            correct = true;
        }
        else
        {
            cout << "Sorry, you have guessed the wrong number.\n";
        }
    } while (guess != secretNumber && !correct); */
}