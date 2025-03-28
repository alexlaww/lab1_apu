#include <iostream>
using namespace std;

int main() {
    double mealCost, tipPercent, gst = 0.06, tipAmount, totalCost;

    cout << "Enter meal cost: ";
    cin >> mealCost;
    cout << "Enter tip percentage: ";
    cin >> tipPercent;

    tipAmount = (tipPercent / 100) * mealCost;
    totalCost = mealCost + (mealCost * gst) + tipAmount;

    cout << "Meal Cost Before GST: $" << mealCost << endl;
    cout << "Meal Cost After GST: $" << mealCost * (1 + gst) << endl;
    cout << "Total Cost After GST & Tip: $" << totalCost << endl;

    return 0;
}
