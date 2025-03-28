#include <iostream>
#include <cctype>
#include <string>
#include <sstream>

using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
}

int getDaysInMonth(const string& month, int year) {
    if (month == "January" || month == "March" || month == "May" || 
        month == "July" || month == "August" || month == "October" || month == "December")
        return 31;
    else if (month == "April" || month == "June" || month == "September" || month == "November")
        return 30;
    else if (month == "February")
        return isLeapYear(year) ? 29 : 28;
    return 0;
}

int main() {
    string monthYear;
    string month;
    int year;
    int daysInMonth = 0;

    while (true) {
        cout << "Enter Your Month (e.g. August 2019): ";
        getline(cin, monthYear);
        
        istringstream iss(monthYear);
        iss >> month >> year;
        
        daysInMonth = getDaysInMonth(month, year);
        if (daysInMonth > 0) break;
        
        cout << "Invalid month/year format or month name. Please try again.\n";
    }

    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    bool earlyExit = false;

    for (int day = 1; day <= daysInMonth && !earlyExit; ) {
        cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, \"E\" to End: ";
        cin >> weather;
        weather = toupper(weather);
        
        if (weather == 'H') {
            hotDays++;
            day++;
        } else if (weather == 'R') {
            rainyDays++;
            day++;
        } else if (weather == 'C') {
            cloudyDays++;
            day++;
        } else if (weather == 'E') {
            earlyExit = true;
        } else {
            cout << "Invalid input! Please enter H, R, C, or E.\n";
        }
    }

    cout << "\nWeather Summary for " << month << " " << year << ":\n";
    cout << "Number of hot days: " << hotDays << endl;
    cout << "Number of rainy days: " << rainyDays << endl;
    cout << "Number of cloudy days: " << cloudyDays << endl;
    cout << "Press any key to continue . . .";
    
    cin.ignore();
    cin.get();
    
    return 0;
}