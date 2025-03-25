#include<iostream>
#include<sstream>

using namespace std;

int main(){
    int hours, minutes, seconds;
    int totalSeconds = 0;

    for (int i =0; i < 3; i++){
        string timeInput;
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeInput;

        stringstream ss(timeInput);
        char colon;
        ss >> hours >> colon >> minutes >> colon >> seconds;

        totalSeconds += (hours * 3600) + (minutes * 60) + seconds;
    }

    cout << "Elapsed time is: " << totalSeconds << "seconds" << endl;

    return 0;
}