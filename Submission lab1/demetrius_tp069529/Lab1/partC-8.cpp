#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double mealCost, tipPercentage, gst, tip, totalWithGST, totalWithGSTAndTip;

    cout << "Enter the cost of the meal: ";
    cin >> mealCost;

    cout << "Enter the tip percentage: ";
    cin >> tipPercentage;

    gst = mealCost * 0.06;

    tip = mealCost * (tipPercentage / 100);

    totalWithGST = mealCost + gst;
    totalWithGSTAndTip = totalWithGST + tip;

    cout << fixed << setprecision(2);
    cout << "Total cost before GST and tipping: $" << mealCost << endl;
    cout << "Total cost after GST: $" << totalWithGST << endl;
    cout << "Total cost after GST and tipping: $" << totalWithGSTAndTip << endl;

    return 0;
}