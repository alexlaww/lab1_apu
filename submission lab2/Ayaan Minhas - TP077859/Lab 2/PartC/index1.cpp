#include <iostream>
#include <string>
#include <sstream> 
#include <iomanip> 

using namespace std;

// Function Prototypes

bool getTimeInput(int& hh, int& mm, int& ss);

// Calculates total elapsed seconds from valid hh, mm, ss.
long calculateElapsedSeconds(int hh, int mm, int ss);

int main() {
    int hours, minutes, seconds;
    long total_seconds;

    // Loop until valid time input is received
    while (!getTimeInput(hours, minutes, seconds)) {
        // Error message is printed inside getTimeInput
    }

    // Calculate elapsed seconds using the validated values
    total_seconds = calculateElapsedSeconds(hours, minutes, seconds);

    // Display the result
    cout << "Elapsed time in seconds = " << total_seconds << " seconds" << endl;

    return 0;
}

// --- Function Definitions ---

bool getTimeInput(int& hh, int& mm, int& ss) {
    string time_str;
    char colon1, colon2;

    cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
    cin >> time_str;

    // Use stringstream for parsing and format checking
    stringstream ss_time(time_str);

    ss_time >> hh >> colon1 >> mm >> colon2 >> ss;

    // Check 1: Extraction successful, colons correct, no extra characters
    if (ss_time && colon1 == ':' && colon2 == ':' && ss_time.eof()) {
        // Check 2: Ranges are valid
        if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59) {
            return true; // Input is valid
        } else {
            cout << "Invalid input! Time values out of range (HH:0-23, MM:0-59, SS:0-59)." << endl;
            return false; // Input invalid (range error)
        }
    } else {
        cout << "Invalid input! Format incorrect (must be HH:MM:SS)." << endl;

        return false; // Input invalid (format error)
    }
}

long calculateElapsedSeconds(int hh, int mm, int ss) {
    // Use long literal (L) for constants if there's a risk of overflow
    // with large intermediate values, although with standard time hh*3600 is safe for int.
    return hh * 3600L + mm * 60L + ss;
}