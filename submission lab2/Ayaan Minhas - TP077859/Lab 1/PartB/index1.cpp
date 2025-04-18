#include <iostream>
#include <string>
#include <sstream> // For string stream conversion
#include <iomanip> // For setw (optional for output)

using namespace std;

int main() {
    string time_str;
    int hh, mm, ss;
    char colon1, colon2;
    long total_seconds;
    bool valid_input = false;

    do {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> time_str;

        // Use stringstream for parsing and basic format checking
        stringstream ss_time(time_str);
        // Try to extract numbers and colons, checking the stream state
        ss_time >> hh >> colon1 >> mm >> colon2 >> ss;

        // Check if extraction was successful, colons are correct, and no extra chars
        if (ss_time && colon1 == ':' && colon2 == ':' && ss_time.eof()) {
            // Check ranges
            if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59 && ss >= 0 && ss <= 59) {
                valid_input = true;
            } else {
                cout << "Invalid input! Time values out of range." << endl;
            }
        } else {
            cout << "Invalid input! Format incorrect." << endl;
            // Clear error flags for the next cin attempt if needed, 
            // though reading a new string usually resets it.
        }

    } while (!valid_input);

    // Calculate total seconds
    total_seconds = hh * 3600L + mm * 60L + ss; // Use L for long literal if needed

    cout << "Elapsed time in seconds = " << total_seconds << " seconds" << endl;

    return 0;
}