#include <iostream>
using namespace std;

int main() {
    double mealCost, tipPercent, costAfterGST, totalCost;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter the tip percentage: ";
    cin >> tipPercent;

    costAfterGST = mealCost * 1.06; 

    totalCost = costAfterGST * (1 + tipPercent / 100);

    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << costAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << totalCost << endl;

    return 0;
}
