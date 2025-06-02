// B-1
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    string timeInput;
    int hours, minutes, seconds;
    char colon1, colon2;
    bool validInput = false;
    
    while (!validInput) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeInput;
        
        // Using stringstream for parsing the input
        stringstream ss(timeInput);
        
        // Try to parse the input in the format HH:MM:SS
        ss >> hours >> colon1 >> minutes >> colon2 >> seconds;
        
        // Validate the format and ranges
        if (ss.fail() || colon1 != ':' || colon2 != ':' || 
            hours < 0 || hours > 23 || 
            minutes < 0 || minutes > 59 || 
            seconds < 0 || seconds > 59) {
            cout << "Invalid input!" << endl;
        } else {
            validInput = true;
        }
    }
    
    // Calculate total seconds elapsed since midnight
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    // Display the result
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
    
    return 0;
}