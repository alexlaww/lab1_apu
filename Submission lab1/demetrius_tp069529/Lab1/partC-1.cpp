#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    if (month == 2) // February
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int getFirstDayOfMonth(int year, int month) {
    tm time = {};
    time.tm_year = year - 1900;
    time.tm_mon = month - 1;
    time.tm_mday = 1;
    mktime(&time);
    return time.tm_wday;
}

void printCalendar(int year, int month) {
    cout << endl << setw(20) << " " << year << " - Month " << month << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

    int daysInMonth = getDaysInMonth(year, month);
    int firstDay = getFirstDayOfMonth(year, month);

    for (int i = 0; i < firstDay; i++)
        cout << "    ";

    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(3) << day << " ";
        if ((day + firstDay) % 7 == 0)
            cout << endl;
    }
    cout << endl;
}

int main() {
    int year, month;
    char choice;

    do {
        cout << "Enter a year: ";
        cin >> year;
        cout << "Enter a month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month. Please try again." << endl;
            continue;
        }

        printCalendar(year, month);

        cout << "Do you want to see another month's calendar? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Ok bye bye" << endl;

    return 0;
}