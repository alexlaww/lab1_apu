#include<iostream>
#include<iomanip>

using namespace std;

bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

void displayCalendar(int month, int year) {
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    cout << "\n"<< "\tCalendar Title : " << months[month - 1] << "-" << year << endl;
    cout << "------------------------------------------------------------------------" << endl;
    string weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (const string& day : weekDays) {
        cout << setw(10) << day;
    }
    cout << "\n";
    cout << "------------------------------------------------------------------------" << endl;
    
    int days = getDaysInMonth(month, year);
    
    int totalDays = 0;
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }
    int startDay = (totalDays + 1) % 7;

    for (int i = 0; i < startDay; i++) {
        cout << setw(10) << " ";
    }
    
    for (int day = 1; day <= days; day++) {
        cout << setw(10) << day;
        if ((startDay + day) % 7 == 0 || day == days) {
            cout << endl;
        }
    }
    cout << "------------------------------------------------------------------------" << endl;
}

int main(){
    int month , year;
    cout << "Enter calendar's year:";
    cin >> year;
    cout << "Enter calendar's month: ";
    cin >> month;

    if(month < 1 || month > 12 || year < 1900){
        cout << "Invapid Input." << endl;
    }else{
        displayCalendar(month, year);
    }
    return 0;
}