#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    double mealCost, tipPercent;
    const double GST = 0.06;

    cout << "Enter the cost of the meal (before GST and tip): ";
    cin >> mealCost;

    cout << "Enter tip percentage (e.g. 10 for 10%): ";
    cin >> tipPercent;

    double costAfterGST = mealCost + (mealCost * GST);
    double tipAmount = costAfterGST * (tipPercent / 100);
    double totalCost = costAfterGST + tipAmount;

    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << costAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << totalCost << endl;

    return 0;
}
