#include <iostream>

using namespace std;

int main() {
    double widthA, heightA, areaA;
    double widthB, heightB, areaB;

    // Get dimensions for Rectangle A
    cout << "Rectangle A:" << endl;
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;
    areaA = widthA * heightA;

    // Get dimensions for Rectangle B
    cout << "\nRectangle B:" << endl; // Add newline for spacing
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;
    areaB = widthB * heightB;

    // Compare areas and print the result
    cout << endl; // Add newline for spacing before result
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger than rectangle B." << endl;
    } else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger than rectangle A." << endl;
    } else {
        cout << "The areas are the same." << endl;
    }

    return 0;
}