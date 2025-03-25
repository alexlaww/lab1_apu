#include <iostream>
using namespace std;

int main() {
    float widthA, heightA, widthB, heightB, areaA, areaB;

    // Input for Rectangle A
    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    // Input for Rectangle B
    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    // Calculate areas
    areaA = widthA * heightA;
    areaB = widthB * heightB;

    // Compare and display results
    cout << "\n";
    if (areaA > areaB)
        cout << "Area in rectangle A is bigger than rectangle B.\n";
    else if (areaB > areaA)
        cout << "Area in rectangle B is bigger than rectangle A.\n";
    else
        cout << "Both rectangles have the same area.\n";

    return 0;
}
