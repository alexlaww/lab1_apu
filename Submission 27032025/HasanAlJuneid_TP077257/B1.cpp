#include <iostream>
#include <string>
#include <cstdlib> // For stoi

using namespace std;

// Function to validate time input
bool isValidTime(int hr, int min, int sec) {
    return (hr >= 0 && hr <= 23) && (min >= 0 && min <= 59) && (sec >= 0 && sec <= 59);
}

int main() {
    const char delim = ':';
    string hr_s, min_s, sec_s;  
    int hr, min, sec;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        
        getline(cin, hr_s, delim);
        getline(cin, min_s, delim);
        getline(cin, sec_s);
        
        try {
            hr = stoi(hr_s);
            min = stoi(min_s);
            sec = stoi(sec_s);

            if (isValidTime(hr, min, sec)) {
                int elapsed = (hr * 3600) + (min * 60) + sec; // Corrected formula
                cout << "Elapsed Time: " << elapsed << " seconds" << endl; // Fixed concatenation
                break;
            } else {
                cout << "Invalid input! Please enter a valid time." << endl; // Fixed typo
            }
        } catch (exception& e) {
            cout << "Invalid input! Please enter a valid time in HH:MM:SS format." << endl;
        }
    }
}