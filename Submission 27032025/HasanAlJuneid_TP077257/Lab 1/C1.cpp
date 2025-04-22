#include <iostream>
#include <iomanip>
#include <string>

class Calendar {
private:
    int year;
    int month;
    std::string monthNames[12] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"};
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string dayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

public:
    Calendar(int y, int m) : year(y), month(m) {
        // Adjust February for leap years
        if (isLeapYear(year))
            daysInMonth[1] = 29;
    }

    // Check if the given year is a leap year
    bool isLeapYear(int y) {
        return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
    }

    // Get the day of week (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int getDayOfWeek(int y, int m, int d) {
        // Zeller's Congruence algorithm
        if (m < 3) {
            m += 12;
            y--;
        }
        int k = y % 100;
        int j = y / 100;
        return (d + 13 * (m + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    }

    // Get the first day of the month
    int getFirstDayOfMonth() {
        return getDayOfWeek(year, month, 1);
    }

    // Display the calendar for the given month
    void displayCalendar() {
        std::cout << std::endl;
        std::cout << std::setw(42) << "Calendar Title : " << monthNames[month - 1] << " - " << year << std::endl;
        
        // Print a horizontal line
        std::cout << std::string(110, '-') << std::endl;
        
        // Print the days of the week
        for (const auto& day : dayNames) {
            std::cout << std::setw(15) << day;
        }
        std::cout << std::endl;
        
        // Print another horizontal line
        std::cout << std::string(110, '-') << std::endl;
        
        // Get the first day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
        int firstDay = getFirstDayOfMonth();
        
        // Get the number of days in the month
        int days = daysInMonth[month - 1];
        
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
};

int main() {
    int year, month;
    char choice;
    
    do {
        // Get user input
        std::cout << "Enter calendar's year: ";
        std::cin >> year;
        
        std::cout << "Enter calendar's month: ";
        std::cin >> month;
        
        // Validate month input
        while (month < 1 || month > 12) {
            std::cout << "Invalid month. Please enter a value between 1 and 12: ";
            std::cin >> month;
        }
        
        // Create and display the calendar
        Calendar calendar(year, month);
        calendar.displayCalendar();
        
        // Ask if the user wants to see another month
        std::cout << "Do you want to see other month? 1 = Yes, others = No: ";
        std::cin >> choice;
        
    } while (choice == '1');
    
    return 0;
}