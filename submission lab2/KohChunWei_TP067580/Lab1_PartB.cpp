#include<iostream>
#include<sstream>
#include<iomanip>

// g++ Lab1_PartB.cpp
using namespace std;

// Function to valid the time range
// bool ValidTime(int hours, int minutes, int seconds){
//     return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60);
// }

// int main(){
//     string timeInput;
//     int hours, minutes, seconds;
//     char colon1, colon2;
//     cout<< "Please enter your elapsed time (in HH:MM:SS format) = ";
//     cin >> timeInput;
//     stringstream ss(timeInput);
//     if (ss >> hours >> colon1 >> minutes >> colon2 >> seconds && colon1 == ':' && colon2 == ':') {
//         if (ValidTime(hours, minutes, seconds)) {
//             int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
//             cout << "Elapsed time is: " << totalSeconds << " seconds."<<endl;
//         } else {
//             cout << "Invalid time entered. Please enter a valid time in HH:MM:SS format." << endl;
//         }
//     } else {
//         cout << "Invalid format. Please enter time in HH:MM:SS format." << endl;
//     }
    
//     return 0;
// }

// int main(){
//     srand(time(0)); 
//     int secretNumber = rand() % 100 + 1; 
//     int guess;
//     int f_num = 1, l_num = 100;
//     int attempts = 0;
    
//     cout << "Guess Number Game Started Now!" << endl;
//     for(int i = 0; i < 70; i++){
//         cout << "-";
//     }
//     cout << "\n";
//     cout << "Guess Number between " << f_num << " to " << l_num << endl;
//     do {
//         cout << "Your answer: ";
//         cin >> guess;
//         attempts++;
//         if (guess > secretNumber) {
//             cout << "Too high! Try again." << endl;
//             l_num = guess - 1;
//         } else if (guess < secretNumber) {
//             cout << "Too low! Try again." << endl;
//             f_num = guess + 1;
//         } else {
//             cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
//             break;
//         }
//         cout << "Guess Number between " << f_num << " to " << l_num << endl;
//     } while (guess != secretNumber);
    
//     return 0;
// }


