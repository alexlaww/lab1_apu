#include <iostream>
using namespace std; 

int main()
{
    int cost, tip;
    cout << "The total cost of the meal BEFORE GST and tipping: ";
    cin >> cost;
    cout << "Tip: ";
    cin >> tip;
    cout << "The total cost of the meal AFTER GST: " << cost *1.06 << endl;
    cout << "The total cost of the meal AFTER GST and tipping: " << cost *1.06 + tip << endl;
    /* code */
    return 0;
}
