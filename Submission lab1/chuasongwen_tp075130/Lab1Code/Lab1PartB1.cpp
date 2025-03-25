//how extract HH MM SS

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string timeInput;
    int HH, MM, SS;
    char colon1, colon2;

    while (true) { // Infinite loop until valid input
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        getline(cin, timeInput); // Read entire input as string

        stringstream ss(timeInput); // Convert input to a stream
        ss >> HH >> colon1 >> MM >> colon2 >> SS; // Try to extract values

        // Check if input is valid
        if (!ss.fail() && ss.eof() && colon1 == ':' && colon2 == ':' &&
            HH >= 0 && HH < 24 && MM >= 0 && MM < 60 && SS >= 0 && SS < 60) {
            break; // Exit loop if input is valid
        }

        cout << "Invalid input! Please enter time in HH:MM:SS format." << endl;
    }

    // Convert time to seconds
    int elapsedSeconds = HH * 3600 + MM * 60 + SS;
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds" << endl;

    return 0;
}
