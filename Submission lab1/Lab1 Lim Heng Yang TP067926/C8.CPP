#include <iostream>
using namespace std;

int main() { 
    int cost, tip;
    cout << "Enter the cost"; cin >> cost;
    cout << "Enter the Tip"; cin >> tip; 
    cout << "The total cost of the meal before GST: " + cost + "and tipping:" + tip << endl;
    cout << "The total cost of the meal after GST: " + cost * 1.06 << endl;
    cout << "The total cost of the meal after GST: " + cost* 1.06 + "and tipping:" + tip << endl;
}
