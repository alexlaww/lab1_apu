#include <iostream>
#include <iomanip>

int main() {
    const int MIN = 1;
    const int MAX = 50;
    const int NUMBERS_PER_ROW = 5;
    
    int count = 0;
    
    std::cout << "Even numbers between " << MIN << " and " << MAX << ":" << std::endl;
    
    for (int i = MIN; i <= MAX; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            // Print the number with fixed width for alignment
            std::cout << std::setw(8) << i;
            count++;
            
            // Start a new line after every NUMBERS_PER_ROW numbers
            if (count % NUMBERS_PER_ROW == 0) {
                std::cout << std::endl;
            }
        }
    }
    
    // Add a final newline if the last row is incomplete
    if (count % NUMBERS_PER_ROW != 0) {
        std::cout << std::endl;
    }
    
    return 0;
}