#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float widthA, heightA, widthB, heightB;
    float areaA, areaB;

    // Input for Rectangle A
    cout << "Rectangle A:" << endl;
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    // Input for Rectangle B
    cout << "\nRectangle B:" << endl;
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    // Calculate area
    areaA = widthA * heightA;
    areaB = widthB * heightB;

    // Compare areas and display result
    cout << endl;
    if (areaA > areaB) {
        cout << "Area in rectangle A is bigger than rectangle B." << endl;
    } else if (areaB > areaA) {
        cout << "Area in rectangle B is bigger than rectangle A." << endl;
    } else {
        cout << "Both rectangles have the same area." << endl;
    }

    return 0;
}
