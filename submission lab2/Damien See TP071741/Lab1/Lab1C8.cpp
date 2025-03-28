#include <iostream>
using namespace std;

int main() {
    double mealCost, GSTRate = 0.06, tipPercentage, totalAfterGST, totalAfterTip;

    // Input meal cost and tip percentage
    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter the tip percentage: ";
    cin >> tipPercentage;

    // Calculate total cost after GST
    totalAfterGST = mealCost + (mealCost * GSTRate);

    // Calculate total cost after GST and tip
    totalAfterTip = totalAfterGST + (totalAfterGST * (tipPercentage / 100));

    // Display the results
    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: RM" << totalAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM" << totalAfterTip << endl;

    return 0;
}