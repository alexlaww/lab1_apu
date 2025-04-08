#include <iostream>
#include <string>

using namespace std;

int main() {
    string timeString;
    int hours, minutes, seconds;
    char colon1, colon2;

    cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
    cin >> timeString;
    // Validate input format
    if (timeString.length() != 8 || timeString[2] != ':' || timeString[5] != ':') {
        cout << "Invalid input format!" << endl;
        return 1; // Exit with an error code
    }

    // Attempt to extract the values
    try {
        hours = stoi(timeString.substr(0, 2));
        minutes = stoi(timeString.substr(3, 2));
        seconds = stoi(timeString.substr(6, 2));
    }
    catch (const std::exception& e) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    // Validate values
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;

    return 0;
}