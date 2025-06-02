#include <iostream>
#include <iomanip>
#include <string>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to validate year input
int yearInputValidation(int year) {
    // Validate year (for example, accepting years between 1900 and 2100)
    while (year < 1900 || year > 2100) {
        std::cout << "Invalid year. Please enter a year between 1900 and 2100: ";
        std::cin >> year;
    }
    return year;
}

// Function to validate month input
int monthInputValidation(int month, int year) {
    // Validate month (1-12)
    while (month < 1 || month > 12) {
        std::cout << "Invalid month. Please enter a month between 1 and 12: ";
        std::cin >> month;
    }
    return month;
}

// Function to find days in month and convert month to text
std::string findDaysInMonth(int month, int year, int& days) {
    std::string monthNames[12] = {"January", "February", "March", "April", "May", "June",
                                 "July", "August", "September", "October", "November", "December"};
    
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // Adjust February for leap years
    if (isLeapYear(year)) {
        daysInMonth[1] = 29;
    }
    
    // Set the number of days for the given month
    days = daysInMonth[month - 1];
    
    // Return the month name
    return monthNames[month - 1];
}

// Function to get the day of week (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
int getDayOfWeek(int year, int month, int day) {
    // Zeller's Congruence algorithm
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    return (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
}

// Function to display the calendar
void displayCalendar(int month, int year, int days) {
    std::string monthName;
    
    // Get the month name
    monthName = findDaysInMonth(month, year, days);
    
    std::cout << std::endl;
    std::cout << std::setw(42) << "Calendar Title : " << monthName << " - " << year << std::endl;
    
    // Print a horizontal line
    std::cout << std::string(110, '-') << std::endl;
    
    // Print the days of the week
    std::string dayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    for (const auto& day : dayNames) {
        std::cout << std::setw(15) << day;
    }
    std::cout << std::endl;
    
    // Print another horizontal line
    std::cout << std::string(110, '-') << std::endl;
    
    // Get the first day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int firstDay = getDayOfWeek(year, month, 1);
    
    // Print the calendar grid
    int currentDay = 1;
    int weekDay;
    
    // Print calendar rows
    for (int i = 0; i < 6; i++) {  // Max 6 rows for a month
        if (currentDay > days)
            break;
            
        // Print each day of the week
        for (weekDay = 0; weekDay < 7; weekDay++) {
            if (i == 0 && weekDay < firstDay) {
                // Empty spaces before the first day
                std::cout << std::setw(15) << " ";
            } else if (currentDay <= days) {
                // Print the day number
                std::cout << std::setw(15) << currentDay;
                currentDay++;
            } else {
                // Empty spaces after the last day
                std::cout << std::setw(15) << " ";
            }
        }
        std::cout << std::endl;
    }
    
    // Print a horizontal line
    std::cout << std::string(110, '-') << std::endl;
}

int main() {
    int year, month, days;
    char choice;
    
    do {
        // Step 1: Declare the required variables (already done above)
        
        // Step 2: Input + input validation
        std::cout << "Enter calendar's year: ";
        std::cin >> year;
        year = yearInputValidation(year);
        
        std::cout << "Enter calendar's month: ";
        std::cin >> month;
        month = monthInputValidation(month, year);
        
        // Step 3: Process
        days = 0; // This will be set in findDaysInMonth when called in displayCalendar
        
        // Step 4: Output
        displayCalendar(month, year, days);
        
        // Ask if the user wants to see another month
        std::cout << "Do you want to see other month? 1 = Yes, others = No: ";
        std::cin >> choice;
        
    } while (choice == '1');
    
    return 0;
}