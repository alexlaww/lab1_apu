#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string month;
    int daysInMonth = 0;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    
    // Input the month
    std::cout << "Enter Your Month (e.g. August 2019): ";
    std::getline(std::cin, month);
    
    // Determine the number of days in the month
    // For simplicity, let's ask the user for the number of days
    std::cout << "Enter number of days in " << month << ": ";
    std::cin >> daysInMonth;
    std::cin.ignore(); // Clear the newline from the input buffer
    
    // Process each day in the month
    for (int day = 1; day <= daysInMonth; day++) {
        // Prompt for weather input
        std::cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        std::cin >> weather;
        
        // Convert input to uppercase for case-insensitive comparison
        weather = std::toupper(weather);
        
        // Check for early termination
        if (weather == 'E') {
            std::cout << "Program terminated early." << std::endl;
            break;
        }
        
        // Process the weather data
        if (weather == 'H') {
            std::cout << "h" << std::endl;
            hotDays++;
        } else if (weather == 'R') {
            std::cout << "r" << std::endl;
            rainyDays++;
        } else if (weather == 'C') {
            std::cout << "c" << std::endl;
            cloudyDays++;
        } else {
            std::cout << "Invalid input! Please enter H, R, C, or E." << std::endl;
            // Decrement day to retry this day
            day--;
        }
    }
    
    // Display the summary
    std::cout << "\nNumber of hot days this month: " << hotDays << std::endl;
    std::cout << "Number of rainy days this month: " << rainyDays << std::endl;
    std::cout << "Number of cloud days this month: " << cloudyDays << std::endl;
    std::cout << "Press any key to continue . . . ";
    std::cin.ignore();
    std::cin.get();
    
    return 0;
}