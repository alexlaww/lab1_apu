#include <iostream>

using namespace std;

int main() {
    double mealCost, gstRate = 0.06, tipPercentage, totalCost, gstAmount, tipAmount;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    
    cout << "Enter the tip percentage (e.g., enter 10 for 10%): ";
    cin >> tipPercentage;

    gstAmount = mealCost * gstRate;

    totalCost = mealCost + gstAmount;

    tipAmount = (tipPercentage / 100) * totalCost;

    totalCost += tipAmount;

    cout << "\nTotal cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "Total cost of the meal AFTER GST: $" << mealCost + gstAmount << endl;
    cout << "Total cost of the meal AFTER GST and tipping: $" << totalCost << endl;

}
