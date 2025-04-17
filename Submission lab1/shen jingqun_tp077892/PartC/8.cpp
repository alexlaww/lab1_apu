#include <iostream>
using namespace std;

int main() {
    float mealCost, tipPercent;
    const float GST = 0.06;

    cout << "Enter the cost of the meal (before GST and tip): ";
    cin >> mealCost;

    cout << "Enter tip percentage (e.g. 10 for 10%): ";
    cin >> tipPercent;

    float costAfterGST = mealCost * (1 + GST);
    float totalCost = costAfterGST * (1 + tipPercent / 100.0);

    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM " << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: RM " << costAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM " << totalCost << endl;

    system("pause");
    return 0;
}
