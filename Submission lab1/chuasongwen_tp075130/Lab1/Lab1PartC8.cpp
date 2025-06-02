#include <iostream>
using namespace std;

double mealCost, tipPercent, gstAmount, tipAmount, totalAfterGST, totalFinal;
const double GST_RATE = 0.06; 

void calculate();
int main() {
    
    cout << "Enter the cost of the meal before GST and tipping: ";
    cin >> mealCost;

    cout << "Enter the tip percentage (e.g., enter 10 for 10%): ";
    cin >> tipPercent;
    
    calculate();

    cout << "\nTotal cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "Total cost of the meal AFTER GST: $" << totalAfterGST << endl;
    cout << "Total cost of the meal AFTER GST and tipping: $" << totalFinal << endl;

    return 0;
}

void calculate(){
    gstAmount = mealCost * GST_RATE;
    totalAfterGST = mealCost + gstAmount;

    tipAmount = totalAfterGST * (tipPercent / 100);
    totalFinal = totalAfterGST + tipAmount;
}
