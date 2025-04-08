#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeapYear(year) ? 29 : 28;
        default: return 0;
    }
}

int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (1 + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (h + 5) % 7;
}

void printCalendar(int month, int year) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    
    cout << "\n-------------------------------------\n";
    cout << "         " << months[month-1] << " " << year << "\n";
    cout << "-------------------------------------\n";
    cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";
    cout << "-------------------------------------\n";
    
    int startDay = getStartDay(month, year);
    int daysInMonth = getDaysInMonth(month, year);
    
    for (int i = 0; i < startDay; i++) {
        cout << "     ";
    }
    
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(4) << day << " ";
        
        if ((day + startDay) % 7 == 0 || day == daysInMonth) {
            cout << "\n";
        }
    }
    
    cout << "-------------------------------------\n";
}

int main() {
    int year, month;
    char choice;
    
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        
        cout << "Enter calendar's month (1-12): ";
        cin >> month;
        
        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a value between 1-12.\n";
            continue;
        }
        
        printCalendar(month, year);
        
        cout << "\nDo you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;
        
    } while (choice == '1');
    
    return 0;
}