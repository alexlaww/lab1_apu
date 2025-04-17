#include <iostream>
#include <iomanip> // For setprecision and fixed

using namespace std;

int main() {
    const double GST_RATE = 0.06; // 6% GST
    double meal_cost, tip_percent;
    double gst_amount, tip_amount, cost_after_gst, total_cost;

    // Get input
    cout << "Enter the cost of the meal (before GST and tipping): ";
    cin >> meal_cost;
    cout << "Enter the tip amount (as a percentage, e.g., 15 for 15%): ";
    cin >> tip_percent;

    // Calculations
    gst_amount = meal_cost * GST_RATE;
    cost_after_gst = meal_cost + gst_amount;
    // Calculate tip on the original meal cost
    tip_amount = meal_cost * (tip_percent / 100.0); 
    total_cost = meal_cost + gst_amount + tip_amount; // Or cost_after_gst + tip_amount

    // Display results
    cout << fixed << setprecision(2); // Set precision for currency output
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << meal_cost << endl;
    cout << "The total cost of the meal AFTER GST (before tip): $" << cost_after_gst << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << total_cost << endl;

    return 0;
}