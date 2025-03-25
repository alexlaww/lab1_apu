#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GST_RATE = 0.06;  // 6%
    double mealCost, tipPercent;
    
    // Input from user
    cout << "Enter the cost of the meal before GST and tip: $";
    cin >> mealCost;
    cout << "Enter the tip percentage (%): ";
    cin >> tipPercent;

    // Calculate GST and Tip
    double gstAmount = mealCost * GST_RATE;
    double costAfterGST = mealCost + gstAmount;
    double tipAmount = costAfterGST * (tipPercent / 100);
    double totalCost = costAfterGST + tipAmount;

    // Output results
    cout << fixed << setprecision(2);
    cout << "\nTotal cost before GST and tip: $" << mealCost << endl;
    cout << "Total cost after 6% GST: $" << costAfterGST << endl;
    cout << "Total cost after GST and " << tipPercent << "% tip: $" << totalCost << endl;

    return 0;
}
