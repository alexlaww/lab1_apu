#include <iostream>
#include <iomanip>
using namespace std;

double convert(double* inches);

int main() {
    double measurement;

    cout << "Enter a length in inches, and I will convert\n";
    cout << "it to centimeters: ";
    cin >> measurement;
    convert(&measurement);
    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;
}

double convert(double* inches) {
    return *inches = (*inches) * 2.54;
}