#include <iostream>
#include <iomanip>
using namespace std;

// Question 7:
void compareRectangles() {
    double width1, height1, width2, height2;
    
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> width1;
    cout << "Height = ";
    cin >> height1;
    
    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> width2;
    cout << "Height = ";
    cin >> height2;
    
    double area1 = width1 * height1;
    double area2 = width2 * height2;
    
    cout << endl;
    if (area1 > area2) {
        cout << "Area in rectangle A is bigger rectangle B." << endl;
    }
    else if (area2 > area1) {
        cout << "Area in rectangle B is bigger rectangle A." << endl;
    }
    else {
        cout << "Areas are the same." << endl;
    }
}

// Question 8:
void calculateMealCost() {
    const double GST_RATE = 0.06;
    double mealCost, tipPercentage;
    
    cout << "\nEnter the cost of the meal (before GST and tipping): $";
    cin >> mealCost;
    cout << "Enter the tip amount (as a percentage): ";
    cin >> tipPercentage;
    
    double gstAmount = mealCost * GST_RATE;
    double tipAmount = mealCost * (tipPercentage / 100);
    
    cout << fixed << setprecision(2);
    cout << "\nThe total cost of the meal BEFORE GST and tipping: $" << mealCost << endl;
    cout << "The total cost of the meal AFTER GST: $" << (mealCost + gstAmount) << endl;
    cout << "The total cost of the meal AFTER GST and tipping: $" << (mealCost + gstAmount + tipAmount) << endl;
}

int main() {
    cout << "=== Question 7: Rectangle Area Comparison ===\n";
    compareRectangles();
    
    cout << "\n=== Question 8: Meal Cost Calculator ===\n";
    calculateMealCost();
    
    return 0;
}