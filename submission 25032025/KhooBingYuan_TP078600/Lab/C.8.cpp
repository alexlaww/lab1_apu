#include <iostream>
using namespace std;

int main(){
    double price, price_aft_gst, tipping, total_cost;
    double GST = 0.06;

    cout << "Enter the total cost of the meal: ";
    cin >> price;

    cout << "Tipping Given: ";
    cin >> tipping;
    cout << endl;

    price_aft_gst = price * GST + price;
    total_cost = price_aft_gst + tipping;

    cout << "The total cost of the meal BEFORE GST and tipping: " << price << endl;
    cout << "The total cost of the meal AFTER GST: " << price_aft_gst <<endl;
    cout << "The total cost of the meal AFTER GST and tipping: " << total_cost << endl;
}