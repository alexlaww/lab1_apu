#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iomanip>
using namespace std;

bool q1_isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int q1() {
    string input;
    int hh, mm, ss;
    char colon1, colon2;
    
    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;
        
        istringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':') {
            if (q1_isValidTime(hh, mm, ss)) {
                break;
            }
        }
        cout << "Invalid input!\n";
    }
    
    int elapsedSeconds = hh * 3600 + mm * 60 + ss;
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds\n";
    
    return 0;
}

void q2() {
    srand(time(0)); // Seed for random number generation
    
    cout << "Guess Number Game Started Now!\n";
    cout << "------------------------------\n";
    
    int min = rand() % 1000; // Generate a random minimum value between 0 and 999
    int max = min + (rand() % 1000); // Generate a random maximum value greater than min
    
    cout << "Guess Number between " << min << " to " << max << "\n";
    cout << "Your Answer: ";
    
    int x;
    cin >> x;
    
    if (x >= min && x <= max) {
        cout << "Congratulations! You won!";
    } else {
        cout << "Oops! You lost!";
    }
}


int main() {
    // q1();
    // q2();
    return 0;
}

