
#include <iostream>
#include <limits>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int year, monthNumber, hot = 0, rainy = 0, cloudy = 0;

    while (true) {
        cout << "Enter a year (positive integer): ";
        cin >> year;
        if (cin.fail() || year < 1) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid year. Please enter a positive integer." << endl;
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter a month (1-12): ";
        cin >> monthNumber;
        if (cin.fail() || monthNumber < 1 || monthNumber > 12) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid month. Please enter a number between 1 and 12." << endl;
        } else {
            break;
        }
    }

    int daysInMonth = getDaysInMonth(year, monthNumber);

    for (int day = 1; day <= daysInMonth; day++) {
        char weather;

        cout << "Day " << day << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;
        weather = toupper(weather); // Normalize input to uppercase
        if (weather == 'H') {
        if (weather == 'H' || weather == 'h') {
        } else if (weather == 'R') {
        } else if (weather == 'R' || weather == 'r') {
        } else if (weather == 'C') {
        } else if (weather == 'C' || weather == 'c') {
            cloudy++;
        } else {
            cout << "Invalid input. Please enter 'H', 'R', or 'C'." << endl;
            day--;
        }
    }

    cout << "\nResults for Year " << year << ", Month " << monthNumber << ":" << endl;
    cout << "Hot days: " << hot << endl;
    cout << "Rainy days: " << rainy << endl;
    cout << "Cloudy days: " << cloudy << endl;

    return 0;
}
