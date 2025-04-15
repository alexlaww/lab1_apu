#include<iostream>
using namespace std;

// unfinished
int ConvertLetterString(string month) {
    if (month == "January") {
        return 1;
    }

}

int FindDaysInMonth(int month, int year) {
    if (month == 2) {
        if (year % 4 == 0) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
}

int main() {
    char weather;
    int hot, rainy, cloudy = 0;
    string month;
    int year;

    for (int i = 0; i < 28; i++) {
        cout << "Day " << (i + 1) << ": Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (E to end): ";
        cin >> weather;
        if (weather == 'H') {
            hot += 1;
        }
        else if (weather == 'R') {
            rainy += 1;
        }
        else if (weather == 'C') {
            cloudy += 1;
        }
        else if (weather == 'E') {
            break;
        }
        else {
            cout << "Wrong input. Please try again" << endl;
            i--;
        }
    }
    cout << "Number of hot days this month: " << hot << endl;
    cout << "Number of rainy days this month: " << rainy << endl;
    cout << "Number of cloudy days this month: " << cloudy << endl;

    cout << "Press any key to continue...";
    return 0;
}