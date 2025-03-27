#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

bool isValidTime(int hh, int mm, int ss) {
    return (hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59);
}

int main() {
    string input;
    int hh, mm, ss;
    char c1, c2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        getline(cin, input);

        stringstream ssInput(input);
        if ((ssInput >> hh >> c1 >> mm >> c2 >> ss) && (c1 == ':' && c2 == ':') && isValidTime(hh, mm, ss)) {
            int totalSeconds = hh * 3600 + mm * 60 + ss;
            cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
            break;
        } else {
            cout << "Invalid input!" << endl;
        }
    }

    return 0;
}