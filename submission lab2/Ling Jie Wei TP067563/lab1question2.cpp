#include <iostream>
#include <sstream>  // For string parsing
#include <limits>   // For input validation

using namespace std;

// Function to check if input is a valid time format and extract hours, minutes, seconds
bool isValidTime(const string &timeStr, int &hours, int &minutes, int &seconds) {
    char colon1, colon2;
    stringstream ss(timeStr);

    // Parse the time format HH:MM:SS
    if (!(ss >> hours >> colon1 >> minutes >> colon2 >> seconds)) {
        return false;  // Invalid format
    }

    // Ensure the colons are correct and values are within valid ranges
    if (colon1 != ':' || colon2 != ':' || hours < 0 || hours > 23 || 
        minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        return false;
    }

    return true;
}

int main() {
    string timeInput;
    int hours, minutes, seconds;

    while (true) {
        cout << "Enter time in HH:MM:SS format: ";
        cin >> timeInput;

        // Validate the time format
        if (isValidTime(timeInput, hours, minutes, seconds)) {
            break;  // Valid input, exit loop
        } else {
            cout << "Invalid time format! Please enter time in HH:MM:SS format (00-23:00-59:00-59)." << endl;
            cin.clear();  // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        }
    }

    // Calculate total seconds elapsed since midnight
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    // Display result
    cout << "Time entered: " << timeInput << endl;
    cout << "Seconds elapsed since midnight: " << totalSeconds << " seconds" << endl;

    return 0;
}
