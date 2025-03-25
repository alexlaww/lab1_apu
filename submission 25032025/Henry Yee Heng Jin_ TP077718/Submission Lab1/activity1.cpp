#include <iostream>
#include <iomanip>
using namespace std;

void validateIntegerInput(int &userInput) {
    char c;
    while (true) {
        cin >> userInput;
        
        if (cin.fail() || (cin.get(c) && c != '\n')) {
            cin.clear(); // Clear error flags
            while (cin.get() != '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid integer: ";
        } else {
            break;
        }
    }
}

int main(){
    int feet, inch, total_inch;
    double centimeters;
    cout << "Enter the feet of the length: ";
    validateIntegerInput(feet);
    cout << "Enter the inch of the length: ";
    validateIntegerInput(inch);

    total_inch = feet * 12 + inch;
    centimeters = total_inch * 2.54;

    cout << "The lenght in centimeters = " << fixed << setprecision(2) << centimeters << endl;

    return 0;
}
