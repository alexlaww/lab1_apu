#include <iostream>
#include <iomanip>
using namespace std;

string getMonthName(int month) {
    string months[] = { "", "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };
    return months[month];
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int q = 1;
    int k = year % 100;
    int j = year / 100;

    int h = (q + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 6) % 7; 
}

void displayCalendar(int month, int year) {
    cout << "\n\t Calendar Title : " << getMonthName(month) << " - " << year << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday" << endl;
    cout << "------------------------------------------------------------" << endl;

    int daysInMonth = getDaysInMonth(month, year);
    int startDay = getStartDay(month, year);

    for (int i = 0; i < startDay; i++) {
        cout << setw(8) << " ";
    }

    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(8) << day;
        if ((day + startDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl << "------------------------------------------------------------" << endl;
}

int main() {
    int year, month, option;

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month. Please try again." << endl;
            continue;
        }

        displayCalendar(month, year);

        cout << "\nDo you want to see other month? 1 = Yes, others = No: ";
        cin >> option;
    } while (option == 1);

    return 0;
}
