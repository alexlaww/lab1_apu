#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

bool isValidTime(const string& timeStr, int& hours, int& minutes, int& seconds) {
    if (timeStr.length() != 8) return false;
    
    if (timeStr[2] != ':' || timeStr[5] != ':') return false;
    
    for (int i = 0; i < 8; i++) {
        if (i == 2 || i == 5) continue; 
        if (!isdigit(timeStr[i])) return false;
    }
    
    hours = stoi(timeStr.substr(0, 2));
    minutes = stoi(timeStr.substr(3, 2));
    seconds = stoi(timeStr.substr(6, 2));
    
    if (hours < 0 || hours > 23) return false;
    if (minutes < 0 || minutes > 59) return false;
    if (seconds < 0 || seconds > 59) return false;
    
    return true;
}

int main() {
    string inputTime;
    int hours, minutes, seconds;
    bool validInput = false;
    
    while (!validInput) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        getline(cin, inputTime);
        
        if (isValidTime(inputTime, hours, minutes, seconds)) {
            validInput = true;
        } else {
            cout << "Invalid input!" << endl;
        }
    }
    
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    
    cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
    
    return 0;
}