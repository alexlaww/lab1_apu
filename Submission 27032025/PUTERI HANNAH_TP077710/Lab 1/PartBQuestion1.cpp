#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>  // Fixed header file

using namespace std;

bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main() {
    string timeStr;
    int hh, mm, ss;
    char delimiter1, delimiter2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeStr;

        // Use stringstream to parse input
        stringstream timeStream(timeStr);  
        //stringstream = Object ; timeStream = Holds the string ; timeStr = Actual time to be parsed

        if (timeStream >> hh >> delimiter1 >> mm >> delimiter2 >> ss && 
            delimiter1 == ':' && delimiter2 == ':' && isValidTime(hh, mm, ss)) {
            break;  // Valid input, exit loop
        }

        cout << "Invalid input!" << endl;
    }

    int elapsedSeconds = hh * 3600 + mm * 60 + ss;
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds" << endl;

    return 0;
}

