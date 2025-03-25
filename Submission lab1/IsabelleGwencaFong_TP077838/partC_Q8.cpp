#include <iostream>

using namespace std;

int main()
{
    double mealCost, tipPercentage;

    cout << "Enter meal cost: ";
    cin >> mealCost;
    cin.ignore();
    cout << "Enter tip percentage: ";
    cin >> tipPercentage;
    cin.ignore();

    cout << "The total cost of the meal BEFORE GST and tipping: " << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: " << mealCost * 1.06 << endl;
    cout << "The total cost of the meal AFTER GST and tipping: " << mealCost * 1.06 * (1 + tipPercentage / 100) << endl;
    return 0;
}
