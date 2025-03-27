#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isValidTimeFormat(const string& time) {
    if (time.length() != 8) return false;
    if (time[2] != ':' || time[5] != ':') return false;
    
    int hh, mm, ss;
    sscanf(time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
    
    return (hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59);
}

int timeToSeconds(const string& time) {
    int hh, mm, ss;
    sscanf(time.c_str(), "%d:%d:%d", &hh, &mm, &ss);
    return hh * 3600 + mm * 60 + ss;
}

int main() {
    string time;
    
    while (true) {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        getline(cin, time);
        
        if (!isValidTimeFormat(time)) {
            cout << "Invalid input!" << endl;
            continue;
        }
        
        int seconds = timeToSeconds(time);
        cout << "Elapsed time in seconds = " << seconds << " seconds" << endl;
        break;
    }
    
    return 0;
}
