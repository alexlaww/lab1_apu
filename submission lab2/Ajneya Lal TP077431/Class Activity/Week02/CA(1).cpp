#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    double totalInches, centimeters;

    cout << "Enter length in feet: ";
    cin >> feet;

    cout << "Enter remaining inches: ";
    cin >> inches;

    totalInches = (feet * 12) + inches;
    centimeters = totalInches * 2.54;

    cout << "The length in centimeters is: " << centimeters << " cm" << endl;

    return 0;
}
