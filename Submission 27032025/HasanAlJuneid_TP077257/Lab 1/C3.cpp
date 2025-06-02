#include <iostream>
#include <iomanip>

int main() {
    double exchangeRate;
    int conversionDirection;
    double amount;
    double convertedAmount;
    
    // Prompt for exchange rate
    std::cout << "Enter the exchange rate from dollars to RMB: ";
    std::cin >> exchangeRate;
    
    // Prompt for conversion direction
    std::cout << "Enter 0 to convert dollars to RMB and 1 vice versa: ";
    std::cin >> conversionDirection;
    
    // Perform conversion based on user selection
    if (conversionDirection == 0) {
        // Converting from USD to RMB
        std::cout << "Enter the dollar amount: ";
        std::cin >> amount;
        
        // Calculate conversion
        convertedAmount = amount * exchangeRate;
        
        // Display result
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "$" << amount << " is " << convertedAmount << " yuan" << std::endl;
    }
    else if (conversionDirection == 1) {
        // Converting from RMB to USD
        std::cout << "Enter the RMB amount: ";
        std::cin >> amount;
        
        // Calculate conversion
        convertedAmount = amount / exchangeRate;
        
        // Display result
        std::cout << std::fixed << std::setprecision(2);
        std::cout << amount << " yuan is $" << convertedAmount << std::endl;
    }
    else {
        // Invalid conversion direction
        std::cout << "Invalid input for conversion direction. Please enter 0 or 1." << std::endl;
    }
    
    return 0;
}