#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double GST_RATE = 0.06;
    double mealCost, tipPercent;
    
    cout << "Enter the cost of the meal (before GST and tip): $";
    cin >> mealCost;
    cout << "Enter the tip percentage you want to give (e.g., 15 for 15%): ";
    cin >> tipPercent;

    double gstAmount = mealCost * GST_RATE;
    double afterGST = mealCost + gstAmount;
    double tipAmount = afterGST * (tipPercent / 100);
    double totalCost = afterGST + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nMeal cost breakdown:\n";
    cout << "--------------------------------\n";
    cout << "Before GST & tip: $" << mealCost << endl;
    cout << "After GST (6%): $" << afterGST << endl;
    cout << "After GST & tip (" << tipPercent << "%): $" << totalCost << endl;
    
    return 0;
}