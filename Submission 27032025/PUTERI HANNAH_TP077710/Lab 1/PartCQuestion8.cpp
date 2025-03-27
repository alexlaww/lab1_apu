#include <iostream>
using namespace std;

int main() {
    double mealCost, tipPercent, gst, totalAfterGST, totalAfterTip;

    // Input meal cost and tip percentage
    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter the tip percentage: ";
    cin >> tipPercent;

    // Calculate GST (6%)
    gst = mealCost * 0.06;
    totalAfterGST = mealCost + gst;

    // Calculate tip amount and final total
    double tipAmount = (tipPercent / 100) * mealCost;
    totalAfterTip = totalAfterGST + tipAmount;

    // Display results
    cout << "\nTotal cost of the meal BEFORE GST and tipping: " << mealCost << endl;
    cout << "Total cost of the meal AFTER GST: " << totalAfterGST << endl;
    cout << "Total cost of the meal AFTER GST and tipping: " << totalAfterTip << endl;

    return 0;
}
