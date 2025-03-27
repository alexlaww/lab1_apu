#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealCost, tipPercent, gstRate = 0.06;

    cout << "Enter the cost of the meal: ";
    cin >> mealCost;

    cout << "Enter the tip percentage: ";
    cin >> tipPercent;

    double afterGST = mealCost + (mealCost * gstRate);
    double finalTotal = afterGST + (afterGST * (tipPercent / 100));

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << afterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << finalTotal << endl;

    return 0;
}
