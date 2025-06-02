#include <iostream>
#include <iomanip>

int main() {
    int rows;
    
    // Prompt user for number of rows
    std::cout << "Enter number of rows (for diamond (triangle) dimension) : ";
    std::cin >> rows;
    
    // Validate input
    if (rows <= 0) {
        std::cout << "Please enter a positive number of rows." << std::endl;
        return 1;
    }
    
    // Print upper half of the diamond (including middle row)
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    
    // Print lower half of the diamond (excluding middle row)
    for (int i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            std::cout << " ";
        }
        
        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        
        std::cout << std::endl;
    }
    
    return 0;
}