#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealCost, tipPercentage, gst, tipAmount, totalCost;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;

    cout << "Enter the tip percentage: ";
    cin >> tipPercentage;

    gst = mealCost * 0.06;
    tipAmount = mealCost * (tipPercentage / 100);
    totalCost = mealCost + gst + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << mealCost + gst << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << totalCost << endl;

    return 0;
}
