#include<iostream>
using namespace std;

int ConvertLetterString(string month) {
    if (month == "January") {
        return 1;
    } else if (month == "February") {
        return 2;
    } else if (month == "March") {
        return 3;
    } else if (month == "April") {
        return 4;
    } else if (month == "May") {
        return 5;
    } else if (month == "June") {
        return 6;
    } else if (month == "July") {
        return 7;
    } else if (month == "August") {
        return 8;
    } else if (month == "September") {
        return 9;
    } else if (month == "October") {
        return 10;
    } else if (month == "November") {
        return 11;
    } else if (month == "December") {
        return 12;
    } else {
        return -1;
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
    else {
        return 31;
    }
}

int main() {
    char weather;
    int hot = 0, rainy = 0, cloudy = 0;
    string month;
    int year;

    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    int monthNumber = ConvertLetterString(month);
    if (monthNumber == -1) {
        cout << "Invalid month entered." << endl;
        return 1; 
    }

    int daysInMonth = FindDaysInMonth(monthNumber, year);

    for (int i = 0; i < daysInMonth; i++) {
        cout << "Day " << (i + 1) << ": Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (E to end): ";
        cin >> weather;
        if (weather == 'H') {
            hot++;
        } else if (weather == 'R') {
            rainy++;
        } else if (weather == 'C') {
            cloudy++;
        } else if (weather == 'E') {
            break; 
        } else {
            cout << "Wrong input. Please try again." << endl;
            i--; 
        }
    }
    
    cout << "Number of hot days this month: " << hot << endl;
    cout << "Number of rainy days this month: " << rainy << endl;
    cout << "Number of cloudy days this month: " << cloudy << endl;

    cout << "Press any key to continue...";
    cin.ignore(); 
    cin.get(); 
}