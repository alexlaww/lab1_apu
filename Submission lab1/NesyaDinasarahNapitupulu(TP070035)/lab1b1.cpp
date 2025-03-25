#include<iostream>
#include<string>
#include<sstring>
using namespace std;

bool isValidTime(int hour, int minute, int second) {
    return(hour >= 0 && hour < 24) && (minute >= 0 && minute < 60) && (second >= 0 && second < 60);
}

int main() {
    int hour, minute, second;
    string time;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> time;

        stringstream T(time); 
        if(T >> hour >> colon1 >> minute >> colon2 >> second && colon1 == ':' && colon2 == ':'
            if(isValidTime(hour, minute, second))) {
                break; 
         }
    } 
    cout << "Invalid input! Please enter a valid time in HH:MM:SS format \n";
}

int total = (hour * 3600) + (minute * 60) + second;
cout << "Elapsed time in seconds = " << total << " seconds\n";
return 0;
