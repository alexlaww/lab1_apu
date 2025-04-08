#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool isNumber(const string& s) {
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

int main() {
    string input, hh, mm, ss;
    int hours, minutes, seconds;

    while (true) {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        getline(cin, input);

        stringstream ssin(input);
        if (getline(ssin, hh, ':') && getline(ssin, mm, ':') && getline(ssin, ss)) {
            if (isNumber(hh) && isNumber(mm) && isNumber(ss)) {
                hours = stoi(hh);
                minutes = stoi(mm);
                seconds = stoi(ss);

                if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
                    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
                    cout << "Elapsed time is: " << totalSeconds << " seconds." << endl;
                    break;
                }
            }
        }
        cout << "Invalid input!" << endl;
    }

    return 0;
}
