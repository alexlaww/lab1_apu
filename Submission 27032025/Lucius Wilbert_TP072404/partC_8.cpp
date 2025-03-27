#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealCost, tipPercent;
    const double GST_RATE = 0.06;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;

    cout << "Enter the tip percentage: ";
    cin >> tipPercent;

    double afterGST = mealCost + (mealCost * GST_RATE);
    double tipAmount = afterGST * (tipPercent / 100.0);
    double totalCost = afterGST + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping = RM " << mealCost << endl;
    cout << "The total cost of the meal AFTER GST = RM " << afterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping = RM " << totalCost << endl;

    return 0;
}
