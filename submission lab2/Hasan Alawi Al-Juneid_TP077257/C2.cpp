#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int convertLetterString(string month_str) {
    // Convert to lowercase
    transform(month_str.begin(), month_str.end(), month_str.begin(), ::tolower);
    
    // Extract month part if full date provided
    string month = month_str;
    size_t spacePos = month_str.find(' ');
    if (spacePos != string::npos) {
        month = month_str.substr(0, spacePos);
    }
    
    if (month == "january" || month == "march" || month == "may" || 
        month == "july" || month == "august" || month == "october" || month == "december") {
        return 31;
    } 
    else if (month == "april" || month == "june" || month == "september" || month == "november") {
        return 30;
    } 
    else if (month == "february") {
        int year;
        
        // Check if year is provided in input
        if (spacePos != string::npos && month_str.length() > spacePos + 1) {
            try {
                year = stoi(month_str.substr(spacePos + 1));
            }
            catch (const exception&) {
                cout << "Enter the year: ";
                cin >> year;
            }
        } 
        else {
            cout << "Enter the year: ";
            cin >> year;
        }
        
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return 29;
        } 
        else {
            return 28;
        }
    } 
    else {
        cout << "Invalid month name!" << endl;
        return 0;
    }
}

int findDaysInMonth(string month) {
    return convertLetterString(month);
}

void weatherReport(int days, int &hot_count, int &rainy_count, int &cloudy_count) {
    hot_count = 0;
    rainy_count = 0;
    cloudy_count = 0;
    
    for (int day = 1; day <= days; day++) {
        char weather;
        bool validInput = false;
        
        while (!validInput) {
            cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
            cin >> weather;
            weather = toupper(weather);
            
            switch (weather) {
                case 'H':
                    hot_count++;
                    cout << "h" << endl;
                    validInput = true;
                    break;
                case 'R':
                    rainy_count++;
                    cout << "r" << endl;
                    validInput = true;
                    break;
                case 'C':
                    cloudy_count++;
                    cout << "c" << endl;
                    validInput = true;
                    break;
                case 'E':
                    return;
                default:
                    cout << "Invalid input! Please try again." << endl;
            }
        }
    }
}

void displayReport(int hot_count, int rainy_count, int cloudy_count) {
    cout << "Number of hot days this month: " << hot_count << endl;
    cout << "Number of rainy days this month: " << rainy_count << endl;
    cout << "Number of cloudy days this month: " << cloudy_count << endl;
    
    cout << "\nThe analysis star design as below:" << endl;
    for (int i = 0; i < 60; i++) cout << "-";
    cout << endl;
    
    cout << "h - " << hot_count << " ";
    for (int i = 0; i < hot_count; i++) cout << "* ";
    cout << endl;
    
    cout << "r - " << rainy_count << " ";
    for (int i = 0; i < rainy_count; i++) cout << "* ";
    cout << endl;
    
    cout << "c - " << cloudy_count << " ";
    for (int i = 0; i < cloudy_count; i++) cout << "* ";
    cout << endl;
    
    for (int i = 0; i < 60; i++) cout << "-";
    cout << endl;
}

int main() {
    cout << "Weather Forecast Tracker" << endl;
    for (int i = 0; i < 30; i++) cout << "=";
    cout << endl;
    
    string month_input;
    do {
        cout << "Enter Your Month (e.g., August 2023): ";
        getline(cin, month_input);
    } while (month_input.empty());
    
    int days_in_month = findDaysInMonth(month_input);
    
    if (days_in_month > 0) {
        int hot_days = 0, rainy_days = 0, cloudy_days = 0;
        weatherReport(days_in_month, hot_days, rainy_days, cloudy_days);
        displayReport(hot_days, rainy_days, cloudy_days);
        
        cout << "Press any key to continue...";
        cin.ignore();
        cin.get();
    }
    
    return 0;
}