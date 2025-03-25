# include <iostream>
# include <iomanip>
# include <sstream>

using namespace std;

int main(){
    double meal, gst = 0.06, tip, mealGST, mealGSTTip;

    cout << fixed << setprecision(2);
    cout << "Enter meal: ";
    cin >> meal;

    cout << "Enter tip (%): ";
    cin >> tip;

    mealGST = meal + meal * gst;
    mealGSTTip = mealGST + meal * (tip/100);

    cout << "The total cost of the meal BEFORE GST: RM" << meal << endl;
    cout << "The total cost of the meal AFTER GST: RM" << mealGST << endl;
    cout << "The total cost of the meal AFTER GST and tipping: RM" << mealGSTTip << endl;
}