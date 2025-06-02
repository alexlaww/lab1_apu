#include <iostream>
#include <iomanip>

int main() {
    // Constants
    const double GST_RATE = 0.06; // 6% GST
    
    // Variables
    double mealCost;
    double tipPercentage;
    double gstAmount;
    double tipAmount;
    double costAfterGST;
    double totalCost;
    
    // Input: Meal cost and tip percentage
    std::cout << "Enter the cost of the meal (before GST and tipping): $";
    std::cin >> mealCost;
    
    std::cout << "Enter the tip percentage: ";
    std::cin >> tipPercentage;
    
    // Calculate GST
    gstAmount = mealCost * GST_RATE;
    
    // Calculate cost after GST
    costAfterGST = mealCost + gstAmount;
    
    // Calculate tip amount (based on the meal cost before GST)
    tipAmount = mealCost * (tipPercentage / 100);
    
    // Calculate total cost
    totalCost = costAfterGST + tipAmount;
    
    // Display results with proper formatting
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Meal Cost Breakdown ---" << std::endl;
    std::cout << "The total cost of the meal BEFORE GST and tipping: $" << mealCost << std::endl;
    std::cout << "The total cost of the meal AFTER GST: $" << costAfterGST << std::endl;
    std::cout << "The total cost of the meal AFTER GST and tipping: $" << totalCost << std::endl;
    
    // Additional information (optional)
    std::cout << "\n--- Details ---" << std::endl;
    std::cout << "GST amount (6%): $" << gstAmount << std::endl;
    std::cout << "Tip amount (" << tipPercentage << "%): $" << tipAmount << std::endl;
    
    return 0;
}