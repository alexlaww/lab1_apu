#include <iostream>
using namespace std;

int main() {
    double lengthA, widthA, lengthB, widthB, areaA, areaB;

    cout << "Enter the length of Rectangle A: ";
    cin >> lengthA;
    cout << "Enter the width of Rectangle A: ";
    cin >> widthA;

    cout << "Enter the length of Rectangle B: ";
    cin >> lengthB;
    cout << "Enter the width of Rectangle B: ";
    cin >> widthB;

    areaA = lengthA * widthA;
    areaB = lengthB * widthB;

    cout << "\nRectangle A Area: " << areaA << endl;
    cout << "Rectangle B Area: " << areaB << endl;

    if (areaA > areaB) {
        cout << "Rectangle A has a larger area than Rectangle B." << endl;
    } else if (areaA < areaB) {
        cout << "Rectangle B has a larger area than Rectangle A." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }

    return 0;
}