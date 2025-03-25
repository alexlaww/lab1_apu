#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string getMonth(int month) {
    string Months[12] = {"January", "February", "March", "April", "May", "June", "July",
                         "August", "September", "October", "November", "December"};
    if (month >= 1 && month <= 12) {
        return Months[month - 1];
    } else {
        cout << "Invalid month. Please try again." << endl;
        return "";
    }
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

int getFirstDayOfMonth(int year, int month) {
    int totalDays = 0;

    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(year, m);
    }

    return (totalDays + 1) % 7;
}

void displayCalendar(int month, int year) {
    const int labelWidth = 10;
    int firstDay = getFirstDayOfMonth(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    cout << "\n\t\tCalendar : " << getMonth(month) << " - " << year << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << setw(labelWidth) << "Sun"
         << setw(labelWidth) << "Mon"
         << setw(labelWidth) << "Tue"
         << setw(labelWidth) << "Wed"
         << setw(labelWidth) << "Thu"
         << setw(labelWidth) << "Fri"
         << setw(labelWidth) << "Sat" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    for (int i = 0; i < firstDay; i++) {
        cout << setw(labelWidth) << " ";
    }


    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(labelWidth) << day;
        if ((firstDay + day) % 7 == 0) {
            cout << endl; 
        }
    }
    cout << endl << "--------------------------------------------------------------------------\n";
}

int main() {
    int year, month;

    cout << "Enter calendar's year: ";
    cin >> year;

    cout << "Enter calendar's month (1-12): ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month. Please try again." << endl;
        return 1;
    }

    displayCalendar(month, year);
    return 0;
}
