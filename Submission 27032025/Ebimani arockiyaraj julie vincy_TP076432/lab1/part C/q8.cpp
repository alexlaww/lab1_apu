//8
#include <iostream>
using namespace std;

int main() {
    double mealCost, gst, tipPercent, totalAfterGST, totalWithTip;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> mealCost;
    cout << "Enter tip percentage (%): ";
    cin >> tipPercent;
 
    // GST 
    gst = mealCost * 0.06;
    totalAfterGST = mealCost + gst;
    
    //tips
    double tips= totalAfterGST * (tipPercent / 100);
    totalWithTip = totalAfterGST + tips;

    cout << "\nThe total cost of the meal BEFORE GST and tipping: RM" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: RM" << totalAfterGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM" << totalWithTip << endl;

    return 0;
}