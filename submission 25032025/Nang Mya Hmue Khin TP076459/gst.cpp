#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rate = 0.06;
    double cost, tip, gst, totalAfterGST, totalAfterTip;

    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> cost;

    cout << "Enter the tip percentage you would like to give: ";
    cin >> tip;

    gst = cost * rate;
    totalAfterGST = cost + gst;

    double tipAmount = (tip / 100)* totalAfterGST;
    totalAfterTip = totalAfterGST + tipAmount;

    cout << fixed << setprecision(2);
    cout <<"Total cost Before GST and tipping: $" << cost << endl;
    cout << "Total cost After GST: $" << totalAfterGST << endl;
    cout << "Total cost After GST and Tipping: $" << totalAfterTip << endl;

    return 0;
}