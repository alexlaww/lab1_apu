#include <iostream>

using namespace std;

int main() {
    float widthA, heightA, widthB, heightB, areaA, areaB;

    cout << "Rectangle A:\n";
    cout << "Width = ";
    cin >> widthA;
    cout << "Height = ";
    cin >> heightA;

    cout << "\nRectangle B:\n";
    cout << "Width = ";
    cin >> widthB;
    cout << "Height = ";
    cin >> heightB;

    areaA = widthA * heightA;
    areaB = widthB * heightB;

    if (areaA > areaB)
        cout << "\nArea in rectangle A is bigger than rectangle B.\n";
    else if (areaB > areaA)
        cout << "\nArea in rectangle B is bigger than rectangle A.\n";
    else
        cout << "\nBoth rectangles have the same area.\n";

}
