#include<iostream>
using namespace std;

int main() {
    double gst = 0.06;
    double cost, tip, costgst, costfinal;

    cout << "Enter the cost of meal: ";
    cin >> cost;
    cout << "Enter tip amount (percentage form): ";
    cin >> tip;

    costgst = cost + (cost * gst);
    costfinal = costgst + (cost * (tip / 100));

    cout << "The total cost of the meal BEFORE GST and tipping: " << cost << endl;
    cout << "The total cost of the meal AFTER GST: " << costgst << endl;
    cout << "The total cost of the meal AFTER GST and tipping: " << costfinal << endl;
}