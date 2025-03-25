#include <iostream>

using namespace std;

int main(){
    // int lengthInFeet, lengthInInches;
    // double cm;

    // cout << "Please enter a number in Feet: ";
    // cin >> lengthInFeet;

    // cout << "Please enter a number in Inches: ";
    // cin >> lengthInInches;

    // int feetToInches = lengthInFeet * 12;
    // cm = lengthInInches * 2.54;
    
    // cout << "Equivalent length in from feet to inch " << feetToInches << "and Equivalent length from inches to cm: " << cm << endl;

    // return 0;

    int feet, inches;
    double centimeters;

    // Taking input from the user
    cout << "Enter length in feet and inches:\n";
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;

    // Convert feet to inches and add the remaining inches
    int total_inches = (feet * 12) + inches;

    // Convert inches to centimeters (1 inch = 2.54 cm)
    centimeters = total_inches * 2.54;

    // Display the result
    cout << "Equivalent length in centimeters: " << centimeters << " cm" << endl;

    return 0;
           
}