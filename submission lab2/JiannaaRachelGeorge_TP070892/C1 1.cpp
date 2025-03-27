#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return daysInMonth[month];
}

int getDayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;
    return ((h + 5) % 7);
}

void printCalendar(int year, int month) {
    string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    cout << "\n" << setw(20) << "Calendar Title : " << months[month] << " - " << year << endl;
    cout << string(100, '-') << endl;
    
    cout << setw(10) << "Sunday" << setw(10) << "Monday" << setw(10) << "Tuesday" << setw(12) << "Wednesday" << setw(10) << "Thursday" << setw(10) << "Friday" << setw(10) << "Saturday" << endl;
    cout << string(100, '-') << endl;
    
    int startDay = getDayOfWeek(year, month, 1);
    int daysInMonth = getDaysInMonth(month, year);
    
    int currentDay = 1;
    for (int i = 0; i < startDay; i++) {
        cout << setw(10) << " ";
    }
    
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(10) << day;
        if ((startDay + day) % 7 == 0 || day == daysInMonth) {
            cout << endl;
        }
    }
    cout << endl << string(100, '-') << endl;
}

int main() {
    int year, month, choice;
    
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a month between 1 and 12." << endl;
            continue;
        }
        
        printCalendar(year, month);
        
        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        cin >> choice;
    } while (choice == 1);
    
    return 0;
}