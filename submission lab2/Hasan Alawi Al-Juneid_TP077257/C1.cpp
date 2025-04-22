#include <iostream>
#include <string>

using namespace std;

bool validate_time_format(const string& time_str) {
    // Check if the string has the correct length
    if (time_str.length() != 8) {
        return false;
    }
    
    // Check if the format is correct (HH:MM:SS)
    if (time_str[2] != ':' || time_str[5] != ':') {
        return false;
    }
    
    // Extract hours, minutes, and seconds
    int hours, minutes, seconds;
    try {
        hours = stoi(time_str.substr(0, 2));
        minutes = stoi(time_str.substr(3, 2));
        seconds = stoi(time_str.substr(6, 2));
    } catch (const exception&) {
        return false;
    }
    
    // Validate ranges
    if (hours < 0 || hours > 23) {
        return false;
    }
    if (minutes < 0 || minutes > 59) {
        return false;
    }
    if (seconds < 0 || seconds > 59) {
        return false;
    }
    
    return true;
}

int calculate_elapsed_seconds(const string& time_str) {
    // Extract hours, minutes, and seconds
    int hours = stoi(time_str.substr(0, 2));
    int minutes = stoi(time_str.substr(3, 2));
    int seconds = stoi(time_str.substr(6, 2));
    
    // Calculate total seconds
    int total_seconds = hours * 3600 + minutes * 60 + seconds;
    return total_seconds;
}

int main() {
    string time_input;
    
    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> time_input;
        
        if (validate_time_format(time_input)) {
            int seconds = calculate_elapsed_seconds(time_input);
            cout << "Elapsed time in seconds = " << seconds << " seconds" << endl;
            break;
        } else {
            cout << "Invalid time format. Please use HH:MM:SS format (e.g., 00:02:44)" << endl;
        }
    }
    
    return 0;
}