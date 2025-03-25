#include<iostream>
#include<stdexcept>
#include <limits>     // Needed for numeric_limits

using namespace std;


double parseInchToCentimeter(double inches){
    return inches * 2.54;
}



int main(){

    double length;
    int choice;

    cout << "What unit u want to convert from to centimeters? \n";
    cout << "1. Feet \n";
    cout << "2. Inches \n";
    cout << "Choose a number either (1 or 2) \n";

    cin >> choice;

    cout << "Give me the length: ";
    
    cin >> length;

     // Check if length is a valid number
     if (cin.fail() || length < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Please enter a valid positive number for the length.\n";
        return 1;
    }



    if (choice == 1){
        cout << parseInchToCentimeter(length * 12)<< "cm";
    }
    else if (choice == 2){
        cout << parseInchToCentimeter(length)<< "cm";
    }
    else{
        cerr <<"Invalid choice! Please enter 1 or 2.";
    }



    return 0;
}