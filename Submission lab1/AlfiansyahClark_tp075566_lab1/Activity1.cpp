#include <iostream>
using namespace std;

const int NUMBER =12;

int main(){
    
    //Task 1
    
    int firstNum;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum =" << firstNum << endl;
    cout << "Line 10: Enter an integer: ";
    cin >> secondNum;
    cout << endl;

    cout << "Line 13: secondNum =" << secondNum << endl;
    firstNum = firstNum + NUMBER + 2 * secondNum;
    cout << "Line 15: The new value of" << "firstNum= " << firstNum << endl;
    
    /*
    //Activity 1
    int feet, inches;
    double totalinch, cent;

    cout << "Enter The Length in Feet: ";
    cin >> feet;
    cout << "Enter The Length in Inches: ";
    cin >> inches;

    totalinch = (feet * 12) + inches;
    cent = totalinch * 2.54;

    cout << "\n\nLength to Centimeters:\t "<< cent;
    */

    

    return 0;
}