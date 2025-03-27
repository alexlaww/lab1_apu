#include <iostream>
#include <string>

using namespace std;

// Function to convert the month string to lowercase for comparison
string ConvertLetterString(string month) {
    for (char &c : month) {
        c = tolower(c);
    }
    return month;
}

// Function to determine the number of days in a given month
int FindDaysInMonth(string month, int year) {
    month = ConvertLetterString(month);

    if (month == "january" || month == "march" || month == "may" || month == "july" ||
        month == "august" || month == "october" || month == "december") {
        return 31;
    } else if (month == "april" || month == "june" || month == "september" || month == "november") {
        return 30;
    } else if (month == "february") {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    }
    
    return 0; // Invalid month
}

// Function to take user input for weather and count occurrences
void weatherReport(int days, int &hotDays, int &rainyDays, int &cloudyDays) {
    char weather;
    hotDays = rainyDays = cloudyDays = 0;

    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " - Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;
        weather = toupper(weather);

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else {
            cout << "Invalid input! Please enter 'H', 'R', or 'C'." << endl;
            i--; // Retry the same day
        }
    }
}

// Function to display the weather report graphically
void displayReport(int hotDays, int rainyDays, int cloudyDays) {
    cout << "\nWeather Report Summary:\n";
    cout << "Hot days:    " << hotDays << " ";
    for (int i = 0; i < hotDays; i++) cout << "*";
    cout << endl;

    cout << "Rainy days:  " << rainyDays << " ";
    for (int i = 0; i < rainyDays; i++) cout << "*";
    cout << endl;

    cout << "Cloudy days: " << cloudyDays << " ";
    for (int i = 0; i < cloudyDays; i++) cout << "*";
    cout << endl;
}

int main() {
    string month;
    int year, days, hotDays, rainyDays, cloudyDays;

    // Get user input for month and year
    cout << "Enter the month (e.g., January): ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    // Get number of days in the month
    days = FindDaysInMonth(month, year);
    if (days == 0) {
        cout << "Invalid month entered. Please restart the program." << endl;
        return 1;
    }

    // Get weather report
    weatherReport(days, hotDays, rainyDays, cloudyDays);

    // Display results
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    // Display graphical representation
    displayReport(hotDays, rainyDays, cloudyDays);

    return 0;
}
