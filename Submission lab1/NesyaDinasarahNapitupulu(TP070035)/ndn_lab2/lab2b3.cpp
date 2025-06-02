#include<iostream>
using namespace std;

bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) ||
    (year % 400 == 0);
}

int yearInputValidation(int year){
    while(year < 1){
        cout << "Invalid year. Enter again: ";
        cin >> year;
    }
    return year;
}

int monthInputValidation(int month, int year){
    while(month < 1 || month > 12) {
        cout << "Invalid month. Enter again: ";
        cin >> month;
    }
    return month;
}

int findDaysInMonth(int month, int year){
    int days;
    switch(month){
        case 1: cout << "January"; days = 31; break;
        case 2: 
        cout << "February";
        days = isLeapYear(year) ? 29:28;
        break;
        case 3: cout << "March"; days = 31; break;
        case 4: cout << "April"; days = 30; break;
        case 5: cout << "May"; days = 31; break;
        case 6: cout << "June"; days = 30; break;
        case 7: cout << "July"; days = 31; break;
        case 8: cout << "August"; days = 31; break;
        case 9: cout << "September"; days = 30; break;
        case 10: cout << "October"; days = 31; break;
        case 11: cout << "November"; days = 30; break;
        case 12: cout << "December"; days = 31; break;
    }
}

int getStartDay(int year, int month){
    int totalDays = 0;
    for (int y = 1; y < year; ++y) {
        totalDays += isLeapYear(y) ? 366:365;
    }
    for (int m = 1; m < month; ++m) {
        totalDays += findDaysInMonth(m, year);
    }
    return (totalDays + 6) % 7;
}

void displayCalendar(int month, int year, int days) {
    cout << " - " << year << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

    int startDay = getStartDay(year, month);
    for (int i = 0; i < startDay; ++i) {
        cout << "   ";
    }
    for (int day = 1; day <= days; ++day) {
        cout << (day < 10 ? " ":" ") << day;
        if((day + startDay) % 7 == 0 || day == days) cout << endl;
    }
}

int main() {
    int year, month, days;

    cout << "Enter calendar's year: ";
    cin >> year;
    year = yearInputValidation(year);

    cout << "Enter calendar's month: ";
    cin >> month;
    month = monthInputValidation(month, year);

    days = findDaysInMonth(month, year);
    displayCalendar(month, year, days);
}