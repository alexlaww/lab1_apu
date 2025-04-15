#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

// Function to validate time input
bool isValidTime(const string& time) {
    if (time.size() != 8 || time[2] != ':' || time[5] != ':') {
        return false;
    }
    int hours, minutes, seconds;
    char colon1, colon2;
    stringstream ss(time);
    ss >> hours >> colon1 >> minutes >> colon2 >> seconds;

    if (ss.fail() || colon1 != ':' || colon2 != ':') {
        return false;
    }
    if (hours < 0 || hours >= 24 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
        return false;
    }
    return true;
}

// Function to calculate elapsed time in seconds
int calculateElapsedTime(const string& time) {
    int hours, minutes, seconds;
    sscanf(time.c_str(), "%d:%d:%d", &hours, &minutes, &seconds);
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    string inputTime;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> inputTime;

        if (!isValidTime(inputTime)) {
            cout << "Invalid time format. Please use the HH:MM:SS format." << endl;
        }
        else {
            break;
        }
    }
    
    int elapsedSeconds = calculateElapsedTime(inputTime);
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds" << endl;

    return 0; // Exit successfully
}