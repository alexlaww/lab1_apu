#include <iostream>
#include <sstream>
using namespace std;

bool isValidTime(int hours, int minutes, int seconds) {
    return (hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60);
}


int main() {
    string str_hours, str_minutes, str_seconds;
    string input_time;


    while (true){
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        getline(cin, input_time);
        stringstream ss(input_time);

        if(getline(ss, str_hours, ':') && getline(ss, str_minutes, ':') && getline(ss, str_seconds)){
            try{
                int hours = stoi(str_hours);
                int minutes = stoi(str_minutes);
                int seconds = stoi(str_seconds);

                if(isValidTime(hours, minutes, seconds)){
                    int result = hours * 3600 + minutes * 60 + seconds;
                    cout << "Elapsed time is: " << result << " seconds.";
                    break;
                }
                else{
                    cout << "Number out of range! Please enter a valid time." << endl;
                }
            }
            catch (invalid_argument&) {
                cout << "Invalid input! Please enter numeric values in HH:MM:SS format." << endl;
            }
        }
        else {
            cout << "Invalid format! Use HH:MM:SS format." << endl;
        }
    }

    
    return 0;
}
