#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 != 0) return false;
    else if (year % 100 != 0) return true;
    else return (year % 400 == 0);
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

// Function to calculate the day of the week for the first day of the month (Zeller's Congruence)
int getFirstDayOfMonth(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int day = 1;
    
    // Zeller's Congruence formula
    int h = (day + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    
    // Convert result to match Sunday = 0 convention
    return (h + 5) % 7;
}

// Function to print the calendar
void printCalendar(int month, int year) {
    // Array of month names
    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    
    // Get the first day of the month and number of days
    int firstDay = getFirstDayOfMonth(month, year);
    int days = daysInMonth(month, year);
    
    // Print calendar header
    cout << "\nCalendar Title : " << monthNames[month - 1] << " - " << year << endl;
    cout << "-----------------------------" << endl;
    
    // Print day names
    cout << setw(4) << right << "Sun" 
         << setw(4) << right << "Mon" 
         << setw(4) << right << "Tue" 
         << setw(4) << right << "Wed" 
         << setw(4) << right << "Thu" 
         << setw(4) << right << "Fri" 
         << setw(4) << right << "Sat" << endl;
    cout << "-----------------------------" << endl;
    
    // Print leading spaces for the first week
    int currentDay = 0;
    for (int i = 0; i < firstDay; i++) {
        cout << setw(4) << " ";
        currentDay++;
    }
    
    // Print the days of the month
    for (int day = 1; day <= days; day++) {
        cout << setw(4) << day;
        currentDay++;

        if (currentDay % 7 == 0) {
            cout << endl;
        }
    }
    
    cout << "\n-----------------------------\n"  << endl;
}

int main() {
    int year, month;
    char choice;
    
    do {
        // Get user input
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;
        
        // Validate input
        while (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a value between 1 and 12: ";
            cin >> month;
        }
        
        // Print the calendar
        printCalendar(month, year);
        
        // Ask if user wants to see another month
        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        cin >> choice;
        
    } while (choice == '1');
    
    return 0;
}