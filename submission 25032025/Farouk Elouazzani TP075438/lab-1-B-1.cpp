#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//function
bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh < 24) && (mm >= 0 & mm < 60) && (ss >= 0 && ss < 60);
}

int main() {
    string input;
    int hh, mm, ss;
    char colon1, colon2;
    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> input;

        stringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':') {
            if (isValidTime(hh, mm, ss)) {
                break;
            }
        }
        cout<<"Invalid Input\n";
    }

    //convert time to seconds
    int totalSeconds = hh*3600 + mm*60 + ss;
    cout<<"Elapsed time in seconds = "<<totalSeconds;

}